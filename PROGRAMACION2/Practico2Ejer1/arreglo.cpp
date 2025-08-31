#include<stdio.h>
#include "arreglo.h"




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
