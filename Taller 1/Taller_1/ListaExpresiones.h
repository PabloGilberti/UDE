#ifndef LISTAEXPRESIONES_H_INCLUDED
#define LISTAEXPRESIONES_H_INCLUDED
#include "Booleano.h"

typedef struct NodoLis{ Expresion info;
                        NodoLis *& sig;
                        }nodoL;

typedef nodoL * ListaExpresiones;

void crearLista(ListaExpresiones &l);

boolean listavacia(ListaExpresiones l);

void insertarExpresion(ListaExpresiones &l, Arbol a);

Arbol obtenerExpresion(ListaExpresiones l, int indice);

Boolean existeIndice(ListaExpresiones l, int indice);

void mostrarExpresiones(ListaExpresiones l);

void liberarLista(ListaExpresiones &l);

int obtenerProximoIndice(ListaExpresiones l);



#endif // LISTAEXPRESIONES_H_INCLUDED
