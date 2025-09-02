#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED
#include "booleano.h"
const int MAX=6;
typedef int arreglo[MAX];

void imprimirArreglo(arreglo arr);
void cargarArreglo(arreglo &arr);
booleano existe(arreglo arre, int numero);


#endif // ARREGLO_H_INCLUDED
