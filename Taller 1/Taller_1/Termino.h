#ifndef TERMINO_H_INCLUDED
#define TERMINO_H_INCLUDED
#include "TipoTermino.h"

typedef struct {TipoTermino discriminante;
                union{ int valor;
                       char variables;
                       char operador;
                       char parentesis;
                       }dato;
                    } Termino;
//reducir a un cabezal.dato de entrada siempre un string, analizar con if

typedef union {
    int  valor;
    char ch;
} DatoTermino;

Termino TER_Crear(TipoTermino tipo, DatoTermino dato);

#endif // TERMINO_H_INCLUDED
