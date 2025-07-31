#include <stdio.h>


const int MAX=80;
typedef char String[MAX];
typedef enum{FALSE,TRUE} boolean;





int main(){


    String cadena;
    boolean existe = FALSE;
    char letra;
    int i = 0;

 //Cargar String
    printf("Ingrese el texto: ");
    scanf("%c",&letra);

    while(letra!='\n' && i < MAX-1){

        cadena[i]=letra;
        i++;
        scanf("%c",&letra);

    }
    cadena[i]='\0';
//Imprimir String

    i=0;
    while(cadena[i]!='\0'){

        printf("%c",cadena[i]);
        i++;


    }

//Buscar String
    i=0;
    existe = FALSE;
    printf("\nIngrese un caracter: ");
    scanf("%c",&letra);

    while (cadena[i] != '\0' && !existe){
        printf("entra while");
        if (cadena[i] == letra){
            printf("Es True");
            existe = TRUE;
        }else{
            printf("SUMO i");
            i++;
         }   

    }

    if (existe==TRUE)
         printf ("el caracter ingresado se encuentra en el String");
    else
         printf ("el caracter ingresado NO encuentra en el String");

}