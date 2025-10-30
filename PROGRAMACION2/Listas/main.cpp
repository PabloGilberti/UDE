#include <iostream>

using namespace std;

typedef struct nodoL{ int info;
                      nodoL * sig;
                       } nodo;

typedef nodo * Lista;



int main()
{

Lista L;//Aca contiene basura
L = new nodo;//pido memoria y lko apunbto a nodo
//El new  es a lo que apunta y la lista apunta a un nodo.
//Aca L queda apuntanod al nuevo nodo ylos campos tiene basura

L -> info = 3;
L -> sig = new nodo;//estoy generando un nuevo nodo y el puntero queda en sig(los campos del nuevo nodo tienen basura)
L -> sig -> info = 5;//Le asigno 5 a la componente info del nuevo nodo(sig contien basura)
L -> sig -> sig = NULL; // le asigno null a la componente sigo del segundo nodo.


printf("la direccion de memoria de la lista es:%X",&L);

}
