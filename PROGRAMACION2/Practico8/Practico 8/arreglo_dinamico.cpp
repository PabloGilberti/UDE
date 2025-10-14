#include <stdio.h>
#include "arreglo_dinamico.h"


void Crear(array_dinamico &arr, int n){

    arr.arre = new int[n];
    arr.tamanio = n;

}

void Cargar(array_dinamico &arr){

    for(int i = 0;i< arr.tamanio;i++){
        printf("\nIngrese un valor entero:");
        scanf("%d",&arr.arre[i]);
    }
}

void Desplegar(array_dinamico arr){

    for(int i =0;i<arr.tamanio;i++){

        printf("\n%d",arr.arre[i]);


    }
}

boolean Pertenece(array_dinamico arr, int valor){

    boolean pertenece=FALSE;
    int i=0;

    while (!pertenece && i < arr.tamanio){

        if (arr.arre[i]==valor)
            pertenece=TRUE;
        else
            i++;

    }
    return pertenece;
}

float Promedio(array_dinamico arr){

    int suma = 0;
    float promedio=0.0;

    for (int i = 0;i<arr.tamanio;i++){

        suma = suma+arr.arre[i];
    }
     promedio = suma / arr.tamanio;

     return promedio;
}



void MaxMin(array_dinamico arr, int &minvalor,int &maxvalor){
//precondicion: arreglo no puede venir vacio.

        minvalor=arr.arre[0];
        maxvalor=arr.arre[0];

    for (int i=1;i<arr.tamanio;i++){

        if (arr.arre[i]<minvalor)
            minvalor=arr.arre[i];

        if(arr.arre[i]>maxvalor)
            maxvalor=arr.arre[i];
    }


}

boolean Iguales(array_dinamico arr1,array_dinamico arr2){


boolean igual=TRUE;
int i=0;

    if(arr1.tamanio!=arr2.tamanio){
            igual=FALSE;
    }else{
        while(i<arr1.tamanio && igual){
            if(arr1.arre[i]!=arr2.arre[i]){
                igual=FALSE;
            }
            i++;
            }

    }

        return igual;
}

int CuantosPertenecen(array_dinamico arr1,array_dinamico arr2){

    int cont=0;
    int j=0;
    boolean encontre=FALSE;



    for(int i=0;i<arr1.tamanio;i++){
        encontre=FALSE;
        j=0;
        while (j<arr2.tamanio && !encontre){

                if (arr1.arre[i]==arr2.arre[j]){
                    cont++;
                    encontre=TRUE;
                }else{
                    j++;
                }
        }
    }

    return cont;

}

void CopiarImpares(array_dinamico arr, array_dinamico &copiar){

    int cantimpares=0;
    for(int i=0; i<arr.tamanio;i++){

        if(arr.arre[i] % 2 !=0)
            cantimpares++;

    }

    Crear(copiar,cantimpares);
    int j=0;
    for(int i=0; i<arr.tamanio;i++){

        if(arr.arre[i] % 2 !=0){
            copiar.arre[j]=arr.arre[i];
            j++;
        }
    }
}







void Destruir(array_dinamico &arr){

    delete[] arr.arre;
    arr.arre = nullptr;
    arr.tamanio = 0;




}
