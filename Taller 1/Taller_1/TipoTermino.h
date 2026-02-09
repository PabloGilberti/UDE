#ifndef TIPOTERMINO_H_INCLUDED
#define TIPOTERMINO_H_INCLUDED
typedef enum {
                TERMINO_VALOR,      // usa dato.valor
                TERMINO_VARIABLE,   // usa dato.variable
                TERMINO_OPERADOR,   // usa dato.operador
                TERMINO_PARENTESIS  // usa dato.parentesis
                } TipoTermino;


#endif // TIPOTERMINO_H_INCLUDED
