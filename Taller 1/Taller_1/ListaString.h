#ifndef LISTASTRING_H_INCLUDED
#define LISTASTRING_H_INCLUDED
#include "String.h"
#include "Booleano.h"

typedef struct nodoS{String palabra;
                      nodoS * sig;} NodoS;

typedef NodoS * ListaString;


// operaciones base
void   LS_Crear(ListaString& L);

Boolean   LS_EsVacia(ListaString L);

int    LS_Cantidad(ListaString L);

String LS_EnPos(ListaString L, int pos);//leer lo ue viene en la posicion

void   LS_AgregarFinal(ListaString& L, String s); // copia dinámica

void   LS_Split(String linea, ListaString& L);//Cortar un string

void   LS_Liberar(ListaString &L);


#endif // LISTASTRING_H_INCLUDED
