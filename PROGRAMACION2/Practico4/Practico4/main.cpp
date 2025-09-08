#include <iostream>
#include "fecha.h"
//typedef enum{BASTO,COPA,ESPADA,ORO}TipoPalo;
//typedef struct{int valor;TipoPalo Palo;}Carta;

int main()
{
 /*
   Carta c1, c2;
   c1.Palo=COPA;
   c1.valor=1;
 */


    Fecha f;

    printf("=== Carga de fecha ===\n");
    CargarFecha(f);

    printf("Fecha ingresada: ");
    MostrarFecha(f);
    printf("\n");

    printf("Dia: %d, Mes: %d, Anio: %d\n", DarDia(f), DarMes(f), DarAnio(f));


}
