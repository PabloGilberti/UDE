#include <iostream>
#include <stdio.h>
const int MAX=6;
typedef int arreglo[MAX];
typedef enum {FALSE,TRUE} booleano;


void imprimirArreglo(arreglo arr){


    for(int i = 0;i<MAX;i++){

        printf("\nEl valor en la posicion %d del arreglo es: %d",i,arr[i]);

    }
}



void cargarArreglo(arreglo &arr){
    int numero;

   // printf("Favor cargar valores:");
  //  scanf("%d",&numero);

    for(int i=0;i<MAX;i++){
        printf("\nFavor cargar valores:");
        scanf("%d",&numero);
        arr[i]=numero;
    }

}
booleano existe(arreglo arre, int numero){

    booleano existe=FALSE;
    int i=0;
    while(!existe && i < MAX){

        if(arre[i]== numero){

            existe=TRUE;
        }else{
            i++;
        }

    }

    return existe;

}

void suma_producto(arreglo arre, int &suma,int &producto){

    for (int i=0;i<MAX;i++){

        suma = suma+arre[i];
        producto = producto * arre[i];

    }




}

int retMultiplos(arreglo arre, int numero){

    int contador=0;

    for(int i=0; i<MAX;i++){

        if(arre[i]%numero==0){
            contador++;

        }
    }
        return contador;





}

void invertirArray(arreglo &arr){

    int aux=0,j;

    for(int i=0;i<MAX/2;i++){

        aux=arr[MAX-1-i];
        arr[MAX-1-i]=arr[i];
        arr[i]=aux;

    }
    printf("Imprimir el arreglo ");
    imprimirArreglo(arr);






}


int main()
{


    //• Cargar un arreglo de enteros con valores leídos por teclado y Mostrar el arreglo por pantalla.
    arreglo arre;

    cargarArreglo(arre);
    imprimirArreglo(arre);

    //Dado un valor, saber si pertenece o no al arreglo.

    booleano existente=existe(arre,14);

        if (existente){

            printf("\nExiste el valor buscado");
        }else{
            printf("\nNo existe el valor buscado");
        }



        //Devolver la suma y el producto de todos los valores del arreglo.
        int suma=0, producto=1;
        suma_producto(arre,suma,producto);

        printf("\nEl valor de la suma es:%d y el valor del producto es: %d",suma, producto);

        //Dado un entero m, contar cuántos múltiplos de m hay en el arreglo.
        //int retorno=retMultiplos(arre,3);

        printf("\nElresultado de cantidad de multiplos es:%d",retMultiplos(arre,2));


        //Invertir el arreglo sobre sí mismo (intercambiar 1º con última celda, 2º con penúltima, etc.).

invertirArray(arre);
}
