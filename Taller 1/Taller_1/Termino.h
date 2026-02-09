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



#endif // TERMINO_H_INCLUDED
