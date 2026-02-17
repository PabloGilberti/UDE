#ifndef EXPRESION_H_INCLUDED
#define EXPRESION_H_INCLUDED
#include "Arbol.h"

typedef struct {int indice;
                Arbol terminos;
                }Expresion;



// Crear
Expresion EXP_Crear(int indice, Arbol a);

// Liberar memoria
void EXP_Liberar(Expresion &e);

// Mostrar por pantalla
void EXP_Mostrar(Expresion e);

// Evaluar con valor de x, aca se realiza el calculo
TipoError EXP_Evaluar(Expresion e, int valorX, int &resultado);

// Comparar igualdad sintáctica
booleano EXP_Iguales(Expresion e1, Expresion e2);

TipoError EXP_Compuesta( Expresion e1, char operador, Expresion e2, int nuevoIndice, Expresion &resultado);


#endif // EXPRESION_H_INCLUDED
