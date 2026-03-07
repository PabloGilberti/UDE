#ifndef COMANDO_H_INCLUDED
#define COMANDO_H_INCLUDED
#include "String.h"

typedef enum {
    CMD_SIMPLE,
    CMD_COMPUESTA,
    CMD_CALCULAR,
    CMD_IGUALES,
    CMD_MOSTRAR,
    CMD_GUARDAR,
    CMD_RECUPERAR,
    CMD_SALIR,
    CMD_INVALIDO
} TipoComando;

TipoComando reconocerComando(String palabra);

#endif


