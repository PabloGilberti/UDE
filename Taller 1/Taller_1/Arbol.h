#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include "Termino.h"

typedef struct NodoArb{ Termino info;
                        int numeroNodo;
                        NodoArb * hizq;
                        NodoArb * hder;
                        }nodoA;

 typedef nodoA * Arbol;

// Retorna árbol vacío (NULL)
Arbol ARB_CrearVacio();

// Devuelve true si a == NULL
Boolean  ARB_EsVacio(Arbol a);

// Crea un nodo con "info" y sus hijos (reserva memoria)
Arbol ARB_CrearNodo(Termino info, Arbol izq, Arbol der);


/* ============================
   Gestión de memoria
   ============================ */

// Copia profunda del árbol (se usa en comando compuesta)
Arbol ARB_Copiar(Arbol a);

// Libera todo el árbol (postorden) y deja a = NULL
void  ARB_Liberar(Arbol& a);


/* ============================
   Mostrar (impresión)
   ============================ */

// Imprime el árbol como expresión (con paréntesis para reflejar estructura)
// Ej: ( (12 - x) * x )
void  ARB_Mostrar(Arbol a);


/* ============================
   Evaluación (calcular)
   ============================ */

// Evalúa el árbol con un valor para x.
// Devuelve OK o error (por ejemplo división entre 0).
TipoError ARB_Evaluar(Arbol a, int valorX, int& resultado);


/* ============================
   Comparación (iguales)
   ============================ */

// Devuelve true si dos árboles son sintácticamente iguales:
// misma estructura y mismo contenido en cada nodo.
Boolean  ARB_Iguales(Arbol a, Arbol b);


/* ============================
   Persistencia (guardar / recuperar)
   ============================ */

// Guarda el árbol en un archivo (serialización).
// - Debe devolver ERR_ARCHIVO_EXISTE si ya existe (si esa es tu regla).
TipoError ARB_GuardarEnArchivo(Arbol a, const char* nombreArchivo);

// Carga un árbol desde un archivo (deserialización).
// - Debe devolver ERR_ARCHIVO_NO_EXISTE si no existe.
TipoError ARB_CargarDesdeArchivo(Arbol& a, const char* nombreArchivo);

//evaluar arbol(calcular expresion del arbol)puede  devolver un double float

//modulo archivo

//modulo de arbol evaluar un arbol devuelve float o double y lo que entra el punbtero al arbol o el indice llamara evaluar arbol, en lista de expresion necesito ingresar el numero entero del indice
//Deberes:

#endif // ARBOL_H_INCLUDED
