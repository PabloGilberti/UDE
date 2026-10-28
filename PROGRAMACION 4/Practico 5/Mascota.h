#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED
#include "string.h"

const int B=50;

class Mascota{

private:
    int numero;
    String apodo;
    float peso;
    struct Nodo {
        Mascota * info;
        Nodo * sig;
    };

    Nodo * hash[B];

public:
    Mascota();
    Mascota(int,String,float);
    //Mascota(const Mascota &otro);no es necesario el alias se genera solo por los string
    ~Mascota();

    //Selectoras;

        int getNumero();
        String getApodo();
        float getPeso();


};






#endif // MASCOTA_H_INCLUDED
