#ifndef COMANDO_H_INCLUDED
#define COMANDO_H_INCLUDED

typedef enum {
    CMD_INGRESAR,
    CMD_CALCULAR,
    CMD_MOSTRAR,
    CMD_SALIR,
    CMD_INVALIDO
} TipoComando;

TipoComando reconocerComando(char * palabra);

#endif


