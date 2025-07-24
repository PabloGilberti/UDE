#include <iostream>
#include<stdio.h>
using namespace std;

const int TAM=16;
typedef enum{FALSE,TRUE} booleano;
typedef enum {PEON,TORRE,CABALLO,ALFIL,DAMA,REY} pieza;
typedef char arreglo[TAM];

//ARREGLOS DE N NUMEROS ENTEROS
const int MAX=10;
typedef int arregloEnteros[MAX];

int main()
{

    arreglo Piezas;
    booleano valido=TRUE;
    int i,p,peon,torre,caballo,alfil,dama,rey;
    arregloEnteros arre;

/*

    for(i=0;i<TAM;i++){

        printf("Ingrese un tipo de pieza:");
        scanf("%d",&Piezas[i]);

    }


        i=0;
        do{
            switch(Piezas[i]){
               case 0:
                    peon++;
                    if (peon>8)
                        valido=FALSE;
                    break;
               case 1:
                    torre++;
                    if (torre>2)
                        valido=FALSE;
                    break;
                case 2:
                    caballo++;
                    if (caballo>2)
                        valido=FALSE;
                    break;
                case 3:
                    alfil++;
                    if (alfil>2)
                        valido=FALSE;
                    break;
                case 4:
                    dama++;
                    if (dama>1)
                        valido=FALSE;
                    break;
                case 5:
                    rey++;
                    if (rey>1)
                        valido=FALSE;
                    break;
                }
                i++;
             }while(i>TAM && valido);


            if(!valido)
                printf("Jugada no valida");
            else
                printf("Jugada Valida");



                    //imprimo prueba

    for(i=0;i<TAM;i++)
    printf("%d",Piezas[i]);
*/


    //Ejercicio2

    int k,l;
    printf("\EJERCICIO 2 CARGO ARREGLO Y VERIFICO NUMERO REPETIDO");
    for(k=0;k<MAX;k++){

        printf("\nIngrese valores:");
        scanf("%d",&arre[k]);

        l=0;
        while(l<k){
            if (arre[k]==arre[l]){
                printf("El valor ya fue ingresado.\nIngrese otro Valor:");
                scanf("%d",&arre[k]);
                l=0;
            }else{
             l++;
            }
        }
    }
//voy a ordenar el arreglo

printf("\nVamos arreglar el orden de los valores de mayor a menor");
int aux, j;
    for(i=0;i<MAX -1;i++){
        for(j=i+1;j<MAX;j++){

            if(arre[i]>arre[j]){
                aux=arre[i];
                arre[i]=arre[j];
                arre[j]=aux;
            }

        }
    }

    printf("\nEl orden del arreglo es");

    for(i=0;i<MAX;i++){
        printf("%d",arre[i]);



    }





}




















