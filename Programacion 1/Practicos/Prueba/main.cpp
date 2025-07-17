#include<stdio.h>
const int TAM=6;
//DEFINO TIPO DE DATOS
typedef int ArrayEnteros[TAM];


int main(){

    //ArrayEnteros arreglo={5,-2,3,7,11,3};
    //DEFINO 4 VARIABLES DEL TIPO ARREGLO DEFINIDO AL INICIO
    ArrayEnteros a,b,c,d;
    a={5,-2,3,7,11,3};

    printf("%d",a[0]);


    #include <stdio.h>

const int TAM = 6;

typedef int ArregloEnteros[TAM];

int main(){

    //defino cuatro variables de tipo ArregloEnteros
    ArregloEnteros a, b, c, d;
    int indice = 1, i;
    int suma_dos_valores;

    //cargue el arreglo de anteros a = {5, -2, 9, 7, 11, 3}
    //CARGA DE ARREGLO: recorrida completa
    for(i=0; i<TAM; i++)
    {
        printf("Cargue un valor para la celda %d: ", i+1);
        scanf("%d", &a[i]);
    }

    //IMPRIMIR ARREGLO: recorrida completa
    printf("\nArreglo: ");
    for(i=0; i<TAM; i++)
    {
        printf(" %d ", a[i]);
    }


    //SELECCION:

    //imprimos el primer valor del arreglo a
//    printf("Primer elemento del arreglo: %d", a[0]); 

    //defino variable y le asigno valores del arreglo dentro de la expresion
    //suma_dos_valores = a[1] + a[2];

}



}