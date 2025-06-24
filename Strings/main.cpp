#include <iostream>
#include <stdio.h>
using namespace std;


const int MAX=32;
typedef char String[MAX];


int main()
{
        //dado un caracter, contar cuantas veces aparece en un string
        String cadena, cadenero;
        char letra;
        int i=0,cont=0;
       // cadena = "Hoy es lunes de casi invierno.\o";

        printf("Ingrese un caracter a buscar en el string: ");
        scanf("%c",&letra);

        
        while(cadena[i]!='\0'){

            if (cadena[i]==letra){
                cont++;
            i++;
        }
        }

        printf("La letra %c se encuentra %d veces en el string.",letra,cont);
        



}
