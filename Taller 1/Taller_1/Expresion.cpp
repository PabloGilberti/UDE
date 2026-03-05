#include <cstdio>
#include "Expresion.h"
#include "Arbol.h"
#include "Booleano.h"
#include "TipoError.h"

// Crear expresión con COPIA profunda del árbol
Expresion EXP_Crear(int indice, Arbol a)
{
    Expresion e;
    e.indice = indice;
    e.terminos = ARB_Copiar(a);   // copia profunda
    return e;
}

// Liberar memoria del árbol interno
void EXP_Liberar(Expresion &e)
{
    ARB_Liberar(e.terminos);
    e.indice = 0;
}

// Mostrar: "#indice: <arbol>"
void EXP_Mostrar(Expresion e)
{
    printf("#%d: ", e.indice);
    ARB_Mostrar(e.terminos);
    printf("\n");
}

// Evaluar delegando al árbol
TipoError EXP_Evaluar(Expresion e, int valorX, int &resultado)
{
    // ARB_Evaluar debe devolver OK o ERR_DIV_CERO (según tu Arbol.cpp)
    return ARB_Evaluar(e.terminos, valorX, resultado);
}

// Igualdad sintáctica: mismo arbol
Boolean EXP_Iguales(Expresion e1, Expresion e2)
{
    return ARB_Iguales(e1.terminos, e2.terminos);
}

// Crea una expresión compuesta: (e1 operador e2) con nuevoIndice
TipoError EXP_Compuesta(Expresion e1, char operador, Expresion e2, int nuevoIndice, Expresion &resultado)
{
    if (operador != '+' && operador != '-' && operador != '*' && operador != '/')
        return ERR_OPERADOR;

    // Crear término operador
    DatoTermino d;
    d.ch = operador;
    Termino top = TER_Crear(TERMINO_OPERADOR, d);

    // Copiar árboles de e1 y e2 para no compartir memoria
    Arbol izq = ARB_Copiar(e1.terminos);
    Arbol der = ARB_Copiar(e2.terminos);

    Arbol nuevo = ARB_CrearNodo(top, izq, der);

    // Si operador es '/', no chequeamos div cero acá: eso se chequea al evaluar.
    // Crear Expresion resultado (copia profunda dentro de EXP_Crear)
    resultado = EXP_Crear(nuevoIndice, nuevo);

    // liberar el árbol temporal, porque EXP_Crear copió
    ARB_Liberar(nuevo);

    return OK;
}
