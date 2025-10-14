#ifndef ARREGLO_DINAMICO_H_INCLUDED
#define ARREGLO_DINAMICO_H_INCLUDED
#include "boolean.h"

typedef struct {int * arre;
                int tamanio;
               }array_dinamico;


void Crear(array_dinamico &arr, int n);

void Cargar(array_dinamico &arr);

void Desplegar(array_dinamico arr);

boolean Pertenece(array_dinamico arre, int valor);

float Promedio(array_dinamico arre);

void MaxMin(array_dinamico arr, int &valor1,int &valor2);

boolean Iguales(array_dinamico arr1,array_dinamico arr2);

int CuantosPertenecen(array_dinamico arr1,array_dinamico arr2);

void CopiarImpares(array_dinamico arr, array_dinamico &copiaarr);

void Destruir(array_dinamico &arre);



#endif // ARREGLO_DINAMICO_H_INCLUDED
