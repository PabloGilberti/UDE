/*#include <stdio.h>
const int TAM=5;
typedef int Array[TAM];
typedef enum{FALSE,TRUE} boolean;


int main()
{
int i,buscando;
Array numeros;
boolean existe;

    for(i=0;i<TAM;i++){

        printf("Ingrese el valor de la posicion %d: ",i+1);
        scanf("\n%d",&numeros[i]);

    }
    for(i=0;i<TAM;i++){

        printf("\nEl Valor Cargado en la posicion %d,tiene el valor %d",i+1,numeros[i]);
    }

    printf("\nIngrese un valor a buscar: ");
    scanf("%d",&buscando);
    i=0;
    do{
        if(numeros[i]==buscando){
            existe=TRUE;

        }else{
            i++;
            existe=FALSE;

        }

    }while(i<TAM && !existe);

    if(existe){
        printf("El valor %d se encuentra en el arreglo",buscando);

    }else{
        printf("El valor %d NO se encuentra en el arreglo",buscando);

    }


    int posMen=0, PosMay;
   

    for(i=1;i<TAM;i++){
        if(numeros[i]<numeros[posMen]){
            posMen=i;
        }
        else{

            if(numeros[i]>numeros[PosMay]){
                PosMay=i;
            }
        }
        }

    printf ("\nEl menor valor es %d en la posicion %d",numeros[posMen],posMen);
    printf("\nEl mayor valor es %d en la posicion %d", numeros[PosMay],PosMay);

}*/

