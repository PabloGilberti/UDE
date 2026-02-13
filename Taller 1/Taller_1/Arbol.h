#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include "Termino.h"

typedef struct NodoArb{ Termino info;
                        int numeroNodo;
                        NodoArb * hizq;
                        NodoArb * hder;
                        }nodoA;

 typedef nodoA * Arbol;

Arbol   ARB_CrearVacio();
Booleaneano ARB_EsVacio(Arbol a);

Arbol  ARB_CrearNodo(Termino t, Arbol izq, Arbol der);
Arbol  ARB_Copiar(Arbol a);
void   ARB_Liberar(Arbol& a);
//evaluar arbol(calcular expresion del arbol)puede  devolver un double float

//modulo archivo

//modulo de arbol evaluar un arbol devuelve float o double y lo que entra el punbtero al arbol o el indice llamara evaluar arbol, en lista de expresion necesito ingresar el numero entero del indice
//Deberes:

#endif // ARBOL_H_INCLUDED
