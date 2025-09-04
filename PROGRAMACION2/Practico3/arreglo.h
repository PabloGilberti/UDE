#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

const int TAM = 5;
typedef int arreglo [TAM];


void cargarArreglo(arreglo &arr);
void sumaElementos(arreglo arr,int &suma);
void imprimirArreglo(arreglo arr);

booleano existe(arreglo arre, int numero);


#endif // ARREGLO_H_INCLUDED
