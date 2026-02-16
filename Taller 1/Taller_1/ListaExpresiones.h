#ifndef LISTAEXPRESIONES_H_INCLUDED
#define LISTAEXPRESIONES_H_INCLUDED


typedef struct NodoLis{ Expresion info;
                        NodoLis *& sig;
                        }nodoL;

typedef nodoL * ListaExpresiones;



#endif // LISTAEXPRESIONES_H_INCLUDED
