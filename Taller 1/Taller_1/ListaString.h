#ifndef LISTASTRING_H_INCLUDED
#define LISTASTRING_H_INCLUDED
#include "String.h"

typedef struct nodoS{ string palabra;
                      nodoS * sig;} NodoS;

typedef NodoS * ListaString;


#endif // LISTASTRING_H_INCLUDED
