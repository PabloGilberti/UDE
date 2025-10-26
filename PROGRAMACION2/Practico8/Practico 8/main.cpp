#include <iostream>
#include <stdio.h>
#include "arreglo_dinamico.h"
#include "boolean.h"
using namespace std;

int main()
{
    array_dinamico arre;
    int n=0;
    printf("Ingrese un valor entero para el tamanio del arreglo dinamico:");
    scanf("%d",&n);

    Crear(arre,n);
    Cargar(arre);
    Desplegar(arre);

     if(Pertenece( arre, 5)){

        printf("\nEl valor existe en el arreglo dinamico");

     }else{

           printf("\nEl valor NO existe en el arreglo dinamico");

     }








}
