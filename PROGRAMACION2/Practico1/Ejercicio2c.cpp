#include <iostream>
#include <stdio.h>
using namespace std;
const int MAX=80;
typedef char arreglo[MAX];



//DEFINO FUNCIONES

int contarOcurrencias(arreglo cadena, char caracter) {
    int contador = 0;
    int i = 0;

    while (cadena[i] != '\0') { // recorre hasta el final del string
        if (cadena[i] == caracter) {
            contador++;
        }
        i++;
    }
    return contador;
}



int main(){


arreglo cadena;
/* parte a */
char car;
int i = 0;
printf ("Ingrese una frase y termine con ENTER: ");
fflush (stdin);
scanf ("%c", &car);
// continua en la próxima página

while (car != '\n' && i < MAX-1)
{
cadena[i] = car;
i++;
scanf ("%c", &car);
}
cadena[i]= '\0';

int ocurrencias=contarOcurrencias(cadena,'a');
}


