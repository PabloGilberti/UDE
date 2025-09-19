#include <iostream>
#include "fecha.h"
#include "string.h"
#include <stdio.h>
#include "producto.h"
#include "arreglo.h"
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



    Producto p;
    printf("Ingrese un nombre de producto: ");
    CargarProducto(p);
    printf("Mostrando el nombre cargado: ");
    MostrarString(p.nombre);
    ArrProductos ap;
    CargarArreglo(ap);

    MostrarArreglo(ap);
}
