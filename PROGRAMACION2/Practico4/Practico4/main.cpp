#include <iostream>
#include "fecha.h"
#include "string.h"
#include <stdio.h>
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

    printf("Dia: %02d, Mes: %02d, Anio: %04d\n", DarDia(f), DarMes(f), DarAnio(f));



    String nombre;
    printf("Ingrese un nombre de producto: ");
    CargarString(nombre);

    printf("Mostrando el nombre cargado: ");
    MostrarString(nombre);
    printf("\n");


}
