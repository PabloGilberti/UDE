#include "ListaString.h"


void   LS_Crear(ListaString &L){


            L = NULL;

};

Boolean   LS_EsVacia(ListaString L){

            Boolean es = FALSE;

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

    int cant = LS_Cantidad(L);
    int i=1;
    NodoS * aux = L;
    if (pos>cant ){
         return NULL;

    }else{
        while( i <= pos){
        aux = aux->sig;
        i++;
        }
        return aux->palabra;
    }
};

void   LS_AgregarFinal(ListaString &L, const char* s){ // copia dinámica
 // Crear nodo nuevo
    NodoS * nuevo = new NodoS;

    // Reservar memoria para el string
    nuevo->palabra = new char[strlar(s) + 1];

/*
    strlar(s) devuelve el largo de la cadena (sin contar '\0').

    + 1 reserva espacio para el '\0' final.

    new char[...] crea un array dinámico de caracteres.

    nuevo->palabra ahora apunta a un bloque de memoria propio donde se guardará la copia.

*/
    strcop(nuevo->palabra, s);
    //Copia el texto al nuevo nodo

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

void LS_Split(const char* linea, ListaString &L){//Cortar el string
    // Inicializar lista vacía
    L = NULL;

    int i = 0; //indice qu voy recorriendo
    int largo = strlar(linea);//cantidad de carcteres

    while (i < largo)
    {
        // 1) Saltear espacios
        //Ejemplo si tenés " simple 5":
        //avanza i hasta la primera letra de simple.
        while (i < largo && linea[i] == ' ')
        {
            i++;
        }

        //Si llego al final, corto
        if (i >= largo)
            break;

        //Empezar a armar la palabra
        //Guardo el indice donde comienza la palabra
        int inicio = i;

        //Voy a ir avanzando mientras sea una palabra (NO ESPACIOS)
        while (i < largo && linea[i] != ' ')
        {
            i++;
        }

        int fin = i;

        //Calcular tamaño palabra
        //Si la Palabra es "compuesta" inicio apunta a la C y Fin a la ultima letra (seria 9)
        int tamano = fin - inicio;

        //Crear un especie de  buffer temporal para copiar el split
        char* palabra = new char[tamano + 1];
        //copia caracter por caracter
        for (int j = 0; j < tamano; j++)
        {
            palabra[j] = linea[inicio + j];
        }
        //finaliza el string
        palabra[tamano] = '\0';

        //Agregar a la lista
        LS_AgregarFinal(L, palabra);

        //Liberar buffer temporal
        delete[] palabra;
    }
}

void   LS_Liberar(ListaString &L)
{

    //No podemos mover directamente L porque perderíamos referencia.
    NodoS * aux = L;

        //voy a recorre toda la lista mintra tenga nodos
    while (aux != NULL)
    {
        NodoS * borrar = aux;   // guardo nodo actual
        aux = aux->sig;        // avanzo antes de borrar

        delete[] borrar->palabra;  // liberar string
        delete borrar;             // liberar nodo
    }

    L = NULL;  // dejar lista vacía
}
