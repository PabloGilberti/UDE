#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "TipoJugador.h"
#include "fecha.h"


typedef struct {long int cedula;
				 String nombre;
				 String apellido;
				 fecha  nacimiento;
				 TipoJugador discriminante
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
fecha darFechaNac(jugador j);
TipoJugador darTipoJugador(jugador j);
long int darCedula(jugador j);

#endif // JUGADOR_H_INCLUDED
