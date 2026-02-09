#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include "Termino.h"

typedef struct NodoArb{ Termino info;
                        int numeroNodo;
                        NodoArb * hizq;
                        NodoArb * hder;
                        }nodoA;

 typedef nodoA * Arbol;



#endif // ARBOL_H_INCLUDED
