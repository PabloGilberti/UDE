#include "Mascota.h"


Mascota::Mascota():apodo(){

    numero=0;
    peso=0;

}

Mascota :: Mascota (int num, String apo, float pes) : apodo(apo)
{
    numero = num;
    peso = pes;
}



Mascota :: ~Mascota ()
{
}
int Mascota::getNumero(){


    return numero;


}

String Mascota :: getApodo(){

    return apodo;

}

float Mascota::getPeso(){


    return peso;

}
