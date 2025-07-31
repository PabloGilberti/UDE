#include <iostream>
#include <stdio.h>
using namespace std;
const int MAX=10;
typedef int arregloEntero[MAX];
typedef enum{FALSE,TRUE} booleano;

//Trabajar con String

const int MAXS=80;
typedef char String[MAXS];

//Trabajar con Matrices
const int FIL=6;
const int COL=5;
typedef int Matriz[FIL][COL];



int main()
{

    arregloEntero arreglo;
    booleano existe=FALSE;
    int i=0,j=0, num=0;
 /*
    for (i=0;i<MAX;i++){

        printf("Ingrese un numero para la posicion %d: ",i+1);

        scanf("\n%d",&arreglo[i]);
    }

    for (i=0;i<MAX;i++){

        printf("\nIngresado para la Posicion %d: el Numero: %d ",i+1,arreglo[i]);
    }
    //buscar un numero ingresado por teclado

    i=0;
    printf("\nIngrese un numero a ser buscado: ");
    scanf("%d",&num);
    fflush(stdin);

    do{
        if (arreglo[i] == num){
            existe=TRUE;
        }else{
            i++;
        }

    }while(i<MAX && !existe);

        if(existe){
            printf("El valor ingresado se encuentra en la posicion %d del arreglo",i+1);
        }else{
            printf("El valor ingresado NO se encuentra en el arreglo%d",i);
        }





//Defino  Variables de String



    String cadena;
    char c;
    int j=0;


    printf("\nIngrese Nombre[ENTER para terminar]:");
    scanf("%c",&c);

    while(c!='\n' && j<MAXS-1){
        cadena[j]=c;
        scanf("%c",&c);
        j++;

    }
    cadena[j]='\0';


    //IMPRIMIR EL NOMBRE

    j=0;
    printf("El nombre Ingresado es :");
    while(cadena[j]!='\0'){

        printf("%c",cadena[j]);
        j++;

    }
*/
//Definicion de valores para matrices

    Matriz matriz;


    printf("\nVAMOS A PROCEDER A CARGAR LA MATRIZ");

    for(i=0;i<FIL;i++){

        for(j=0;j<COL;j++){
                printf("\nIngrese un valor para la celda de posicion Fila: %d, columna: %d ->",i,j);
                scanf("%d",&matriz[i][j]);
        }

    }


    printf("\nVAMOS A PROCEDER A BUSCAR UN VALOR EN  LA MATRIZ");

    j=0;
    i=0;
    num=0;
    existe=FALSE;

        printf("\nIngrese un valor a ser buscado en la matriz:");
        scanf("%d",&num);
    do{
        j=0;
       do{
        j++;
        if(matriz[i][j] == num){
            existe=TRUE;

        }

       }while(j<COL && !existe);
        i++;
    }while(i<FIL &&!existe);


       if(existe){

        printf("\n El valor para la celda de posicion Fila: %d, columna: %d  tiene el valor: buscado: -> %d",i,j,num);

       }else{

            printf("Valor no encontrado en la matriz");
       }



}
