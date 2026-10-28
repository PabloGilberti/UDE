#include "Duenio.h"

Duenio::Duenio(): nombre(){

    cedula=0;
    masc=NULL;

}

Duenio::Duenio(long ced, String nom):nombre(nom)
{
    ced=0;
    masc=NULL;

}
Duenio :: Duenio (const Duenio &otro) : nombre(otro.nombre)
{
    cedula = otro.cedula;
    masc = NULL;
}

Duenio :: ~Duenio()
{
     if (masc!=NULL)
        delete  masc;
}

Duenio Duenio :: operator= (const Duenio &otro)
{
    if (this != &otro)
    {
        cedula = otro.cedula;
        nombre = otro.nombre;

            delete masc;
            masc = NULL;
    }
    return *this;
}

//selectoras
long Duenio :: getCedula ()
{
    return cedula;
}

String Duenio :: getNombre ()
{
    return nombre;
}
Mascota * Duenio :: getMascota (){

    return masc;
}

void Duenio :: setMascota (Mascota * m)
{
    if (m != masc)                  // evita borrar la misma mascota que se está asignando
    {
        delete masc;
        masc = m;
    }
}
bool Duenio :: tieneMascota ()
{
    return (masc != NULL);
}
