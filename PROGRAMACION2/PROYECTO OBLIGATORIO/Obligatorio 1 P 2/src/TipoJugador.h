#ifndef TIPOJUGADOR_H_INCLUDED
#define TIPOJUGADOR_H_INCLUDED
#include <stdio.h>

typedef enum {AMATEUR, INTERMEDIO, PROFESIONAL} TipoJugador;


//Cargas un tipo de jugador
void cargarTipoJugador(TipoJugador &t);
//muestra el tipo de jugador.
void darTipoJugador (TipoJugador t);



#endif // TIPOJUGADOR_H_INCLUDED
