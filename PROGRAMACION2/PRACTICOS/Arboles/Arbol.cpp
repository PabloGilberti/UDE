#include <iostream>
#include "Arbol.h"


/*Crear un Arbol Vacio*/
void Crear(Arbol &a){

    a = NULL;
}
/*Saber si el arbol es vacio*/

boolean EsVacio(Arbol a){

boolean es=FALSE;

if (a==NULL){

    es=TRUE;
}
    return es;

}
/*Devolver la raiz del arbol*/
//precondicion el arbol no debe estar vacio
int DarRaiz(Arbol a){

    return a->info;

}
/*Obtener el subarbol Izquierdo, Precondicion arbol no vacio*/

Arbol HijoIzq(Arbol a){

    return a->hizq;

}

Arbol HijoDere(Arbol a){

    return a->hder;
}


Arbol Cons (int r, Arbol i, Arbol d)
{
    Arbol a = new nodo;
    a -> info = r;
    a -> hizq = i;
    a -> hder = d;
    return a;
}
