#include<stdio.h>



int main(){


    /*Ejercicio 1
    Escribir un programa en C++ que pida al usuario un carácter desde teclado como dato de entrada.
    Como salida, el programa debe desplegar en pantalla un mensaje indicando si el carácter
    ingresado es o no una letra mayúscula.*/

    /*char caracter;

    printf("Favor ingresar un caracter: ");
    scanf("\n %c",&caracter);

    if ((caracter>='A') && (caracter<='Z')){
        printf ("El Caracter ingresado es MAYUSCULA");

    }else{

        printf("El Caracter Ingresado es en MINUSCULA");

    }*/


    /*

    Ejercicio 2
    Escribir un programa en C++ que pida al usuario un carácter desde teclado como dato de entrada.
    Como salida, el programa debe desplegar en pantalla un mensaje indicando si el carácter
    ingresado una letra minúscula, una letra mayúscula, un dígito o un signo.

    */


     char caracter;

     printf("Ingrear un caracter desde teclado:");
     scanf("\n %c",&caracter);

        if((caracter>='0')&&(caracter<='9')){
            printf("El caracter ingresado es un numero");
        }else{
            if((caracter>='A')&&(caracter<='Z')){
                printf("El caracter ingresado es una letra");
            }else{        
                if((caracter>='a')&&(caracter<='z')){
                    printf("El caracter ingresado es una letra");
                }else
                     printf("El caracter ingresado es un signo");
                

            }
        }

        
     
    
}
