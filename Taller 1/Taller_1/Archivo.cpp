#include "Archivo.h"

void Agregar (String nomArch, String expresion){
 FILE * f = fopen (nomArch, "ab");
 fwrite (&expresion, sizeof(int), 1, f);
 fclose (f);
}
Boolean Existe (String nomArch){

 Boolean existeArchivo = TRUE;
 FILE * f = fopen (nomArch, "rb");
 if (f == NULL)
 existeArchivo = FALSE;
 else
 fclose (f);
 return existeArchivo;
}
Boolean Vacio (String nomArch)
{
 Boolean archivoVacio = FALSE;
 FILE * f = fopen (nomArch, "rb");
 fseek (f, 0, SEEK_END);
 if (ftell (f) == 0)
 archivoVacio = TRUE;
 fclose (f);
 return archivoVacio;
}
Boolean Pertenece (String nomArch, int entero){
 Boolean esta = FALSE;
 FILE * f = fopen (nomArch, "rb");
 int buffer;
 fread (&buffer, sizeof(int), 1, f);
 while (!feof(f) && !esta)
 {
 if (buffer == entero)
 esta = TRUE;
 else
 fread (&buffer, sizeof(int), 1, f);
 }
 fclose (f);
 return esta;
}
int Largo (String nomArch)
{
 int largoArchivo;
 FILE * f = fopen (nomArch, "rb");
 fseek (f, 0, SEEK_END);
 largoArchivo = ftell(f) / sizeof(int);
 fclose (f);
 return largoArchivo;
}
int K_esimo (String nomArch, int k)
{
 int buffer;
 FILE * f = fopen (nomArch, "rb");
 fseek (f, (k-1) * sizeof(int), SEEK_SET);
 fread (&buffer, sizeof(int), 1, f);
 fclose (f);
 return buffer;
}
void Desplegar (String nomArch)
{
 FILE * f = fopen (nomArch, "rb");
 int buffer;
 fread (&buffer, sizeof(int), 1, f);
 while (!feof(f))
 {
 printf (" %d ", buffer);
 fread (&buffer, sizeof(int), 1, f);
 }
 fclose (f);
}
