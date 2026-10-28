#include "Iterador.h"


//Constructor inicialiso en null los punteros
Iterador::Iterador()
{

    prim = NULL;
    ulti = NULL;
    actual = NULL;

}


//Destructor



Iterador::~Iterador()
{


    Nodo * aux;

    while (prim != NULL){


        aux = prim;

        prim = prim->sig;

        delete aux;


    }



}


void Iterador::insertar(Duenio * d)

{

    Nodo * nuevo = new Nodo; //vreo el nuevo nodo
    nuevo->info = d;//le asigno la info de d
    nuevo->sig = NULL;//lo apunto a null por que va ser el ultimos

    if(prim==NULL){

        prim = nuevo;//como esta vacio prim y ulti van a ser lo mismo
        ulti = nuevo;
        actual = prim;
    }
    else{

        ulti->sig=nuevo;//si no esta vacio lo engancho como ultimo y es el nuevo ultimo
        ulti = nuevo;
    }

}

bool Iterador:: hayMasDuenios()
{
    return (actual != NULL);


}

//devuelve el dueño de la posicion actual
Duenio * Iterador::proximoDuenio()
{
    //precondicion que tenga duenios
    Duenio * d = actual->info;
    actual=actual->sig;
    return d;

}












