#include<stdio.h>
using namespace std;
const int TAM=3;
typedef int arregloEntero[TAM];


int main(){

    int dia, i;

    printf("Ingrese un valor para el dia de la semana:\n");
    scanf("%d",&dia);
    switch(dia){
        case 1:
            printf("El dia el Lunes");
            break;
        case 2:
            printf("Eldia es Martes");
            break;
        case 3:
            printf("El dia es Miercoles");
            break;
        case 4:
            printf("El dia es Jueves");
            break;
        case 5 :
            printf("El dia es Viernes");
            break;
        case 6 :
            printf("El dia es sabado");
            break;
        case 7 :
            printf("El dia es Domingo");
            break;
        default :
            printf("Error, opcion no encontrada");
    } 
    arregloEntero arre;
    
     for (int i = 0; i < 3; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arre[i]);  
    }

    // Mostrar lo que se cargó
    printf("\nLos números ingresados son:\n");
    for (int i = 0; i < 3; i++) {
        printf("numeros[%d] = %d\n", i, arre[i]);
    } 



}