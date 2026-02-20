#include "ListaString.h"


void   LS_Crear(ListaString &L){


            L = NULL;

};

Boolean   LS_EsVacia(ListaString L){

            boolean es = FALSE;

            if (L == NULL)
                es = TRUE;

            return es;

};

int    LS_Cantidad(ListaString L){

        int contador=0;
        NodoS * aux = L;
        while(aux!=NULL){

            contador ++;
            aux=aux->sig;

        }
        return contador;
};

//leer lo ue viene en la posicion
String LS_EnPos(ListaString L, int pos){

    int cant = LS_Cantidad(L)
    int i=1;
    NodoS * aux = L;
    if (pos>cant ){
         return NULL;

    }else{
        while( i <= pos){
        aux = aux->sig;
        i++:
        }
        return aux->palabra;
    }
};

void   LS_AgregarFinal(ListaString& L, const char* s){ // copia dinámica
 // Crear nodo nuevo
    NodoS * nuevo = new NodoS;

    // Reservar memoria para el string
    nuevo->palabra = s;
    nuevo->sig = NULL;

    if (L == NULL)
    {
        L = nuevo;
    }
    else
    {
        NodoS* aux = L;
        while (aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }

}

void   LS_Split(const char* linea, ListaString& L);//Cortar un string

void   LS_Liberar(ListaString& L);
