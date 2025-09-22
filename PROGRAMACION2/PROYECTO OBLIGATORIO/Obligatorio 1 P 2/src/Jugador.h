#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include <stdio.h>
#include "TipoJugador.h"
#include "fecha.h"
#include "string.h"
#include "J_intermedio.h"
#include "J_profesional.h"
typedef struct {long int cedula;
				 String nombre;
				 String apellido;
				 Fecha  nacimiento;
				 TipoJugador discriminante;
                 union{
                       int meses_jugando;
                       intermedio jugIntermedio;
                       profesional jugProfesional;
					  }uTipoJugador;
				}jugador;

void cargarJugador (jugador &j);
void mostrarJugado (jugador j);
void darNombre(jugador j, String &s);
void darApellido(jugador j,String &s);
Fecha darFechaNac(jugador j);
//TipoJugador darTipoJugador(jugador j);
long int darCedula(jugador j);

#endif // JUGADOR_H_INCLUDED
