#ifndef EXPRESION_H_INCLUDED
#define EXPRESION_H_INCLUDED
#include "Arbol.h"

typedef struct {int indice;
                Arbol terminos;
                }Expresion;



// Crear
Expresion EXP_Crear(int indice, Arbol a);

// Liberar memoria
void EXP_Liberar(Expresion& e);

// Mostrar por pantalla
void EXP_Mostrar(Expresion e);

// Evaluar con valor de x
TipoError EXP_Evaluar(Expresion e, int valorX, int& resultado);

// Comparar igualdad sintáctica
booleano EXP_Iguales(Expresion e1, Expresion e2);


#endif // EXPRESION_H_INCLUDED
