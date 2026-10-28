#ifndef DUENIO_H_INCLUDED
#define DUENIO_H_INCLUDED
#include "string.h"
#include "Mascota.h"

class Duenio{


private:
    long cedula;
    String nombre;
    Mascota * masc;

public:
    Duenio();
    Duenio(long,String);
    Duenio(const Duenio &);
    ~Duenio();
    Duenio  operator= (const Duenio &otro);

     long getCedula();
     String getNombre();
     Mascota * getMascota();
    //Modificadoras
    void setMascota(Mascota *);
        // Consulta
    bool tieneMascota();



};













#endif // DUENIO_H_INCLUDED
