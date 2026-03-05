#include <cstdio>
#include "ListaExpresiones.h"
#include "Expresion.h"
#include "Arbol.h"

// Crear lista vacía
void crearLista(ListaExpresiones &l)
{
    l = NULL;
}

// Devuelve TRUE si está vacía
Boolean listavacia(ListaExpresiones l)
{
    return (l == NULL) ? TRUE : FALSE;
}

// Próximo índice correlativo
int obtenerProximoIndice(ListaExpresiones l)
{
    if (l == NULL)
        return 1;

    nodoL* aux = l;
    while (aux->sig != NULL)
        aux = aux->sig;

    return aux->info.indice + 1;
}

// Insertar nueva expresión (copia el árbol)
void insertarExpresion(ListaExpresiones &l, Arbol a)
{
    nodoL* nuevo = new nodoL;

    int idx = obtenerProximoIndice(l);

    // Crear expresión usando tu constructor
    nuevo->info = EXP_Crear(idx, a);

    nuevo->sig = NULL;

    if (l == NULL)
    {
        l = nuevo;
    }
    else
    {
        nodoL* aux = l;
        while (aux->sig != NULL)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

// Verifica existencia de índice
Boolean existeIndice(ListaExpresiones l, int indice)
{
    nodoL* aux = l;
    while (aux != NULL)
    {
        if (aux->info.indice == indice)
            return TRUE;
        aux = aux->sig;
    }
    return FALSE;
}

// Obtiene el árbol guardado
Arbol obtenerExpresion(ListaExpresiones l, int indice)
{
    nodoL* aux = l;
    while (aux != NULL)
    {
        if (aux->info.indice == indice)
            return aux->info.terminos;

        aux = aux->sig;
    }
    return NULL;
}

// Mostrar todas las expresiones
void mostrarExpresiones(ListaExpresiones l)
{
    nodoL* aux = l;

    while (aux != NULL)
    {
        EXP_Mostrar(aux->info);
        aux = aux->sig;
    }
}

// Liberar lista completa
void liberarLista(ListaExpresiones &l)
{
    nodoL* aux = l;

    while (aux != NULL)
    {
        nodoL* borrar = aux;
        aux = aux->sig;

        EXP_Liberar(borrar->info);
        delete borrar;
    }

    l = NULL;
}
