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
Termino TER_CrearValor(int v);
Termino TER_CrearVariable(char v);     // 'x'
Termino TER_CrearOperador(char op);    // '+','-','*','/'
Termino TER_CrearParentesis(char p);   // '(' o ')'

#endif // TERMINO_H_INCLUDED
