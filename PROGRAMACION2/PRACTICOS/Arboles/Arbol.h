#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include "boolean.h"

typedef struct nodoa{ int info;
                      nodoa * hizq;
                      nodoa * hder;
                    }nodo;

typedef nodo * Arbol;

void Crear(Arbol &a);

boolean EsVacio(Arbol a);

int DarRaiz(Arbol a);

Arbol HijoIzq(Arbol a);

Arbol HijoDere(Arbol a);

Arbol Cons (int r, Arbol i, Arbol d);


#endif // ARBOL_H_INCLUDED
