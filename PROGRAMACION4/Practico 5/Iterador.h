#ifndef ITERADOR_H_INCLUDED
#define ITERADOR_H_INCLUDED
#include "Duenio.h"



class Iterador{


private:

        struct Nodo {
                Duenio * info;
                Nodo *sig;
        };

        Nodo * prim;
        Nodo * ulti;
        Nodo * actual;


public:

    Iterador();
    ~Iterador();


    void insertar(Duenio *);
    bool hayMasDuenios();
    Duenio * proximoDuenio();








};







#endif // ITERADOR_H_INCLUDED
