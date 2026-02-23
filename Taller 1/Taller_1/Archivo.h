#ifndef ARCHIVO_H_INCLUDED
#define ARCHIVO_H_INCLUDED
#include "String.h"
#include "Booleano.h"

void Agregar(String nomarch, String expresion);

Boolean Existe (String nomArch);

Boolean Vacio (String nomArch);

Boolean Pertenece (String nomArch, int entero);

int Largo (String nomArch);

int K_esimo (String nomArch, int k);

void Desplegar (String nomArch);

#endif // ARCHIVO_H_INCLUDED
