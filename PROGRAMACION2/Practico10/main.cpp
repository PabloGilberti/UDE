#include <iostream>

using namespace std;

typedef struct { int x; int y; } Pareja;

typedef struct nodoL {
    Pareja info;
    struct nodoL *sig;
} Nodo;

typedef Nodo * Lista;


int main(){

    //A)
    //Creo Las listas y las hago apuntar a null
    Lista L1=NULL,L2=NULL;
    Pareja P = {9,3};
    // crear primer nodo (6,4)
    L1 = new Nodo;
    L1->info.x = 6;
    L1->info.y = 4;

    // enlazar con segundo nodo (9,3)
    L1->sig = new Nodo;
    L1->sig->info = P;
    L1->sig->sig = NULL;

    // L2 apunta al segundo nodo, le paso la posicion de memoria que esta en sig de L1 por lo que va a puntar al segundo nodo
    L2 = L1->sig;

    //B)
    //Voy a trabajar sobre los nodos

    Nodo N1,N2;
    //Cargo cada componente del nodo N1 a mano.
    N1.info.x=6;
    N1.info.y=4;
    N1.sig = &N2;
    //Cargar N2 desde una pareja.
    Pareja P1 = {9,3};
    N2.info=P1;
    N2.sig=NULL;

    //c)

     Lista L;
     Nodo N;
     Pareja P2 = {6,4};

     L = new Nodo;
     L -> info = P2;
     L -> sig = new Nodo;
     L -> sig -> info.x=5;
     L -> sig -> info.y=1;
     L -> sig -> sig=NULL;

     printf("\nEl valor en X del PRIMER modulo es:%d",L->info.x);
     printf("\nEl valor en Y del PRIMER modulo es:%d",L->info.y);
     printf("\nLa direccion de memoria correspondiente al modulo M1 es:%X",L);
     printf("\nLa direccion de memoria a la que apunta el modulo M1 HACIA el M2 es:%X",L->sig);
     printf("\n");
     printf("\nEl valor en X del segundo modulo es:%d",L->sig->info.x);
     printf("\nEl valor en Y del segundo modulo es:%d",L->sig->info.y);
     printf("\nLa direccion de memoria correspondiente al modulo M2 es:%X",L->sig);
     printf("\nLa direccion de memoria a la que apunta el modulo M2 HACIA el siguiente modulo es:%X",L->sig->sig);






}
