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
//Carga el tipo jugador
void cargarJugador (jugador &j);
//Muestra un jugador
void mostrarJugado (jugador j);
//Devuelve el nombre del jugador
void darNombre(jugador j, String &s);
//Devuelve el apellido del jugador
void darApellido(jugador j,String &s);
//Devuelve la fecha de nacimiento
Fecha darFechaNac(jugador j);
//TipoJugador darTipoJugador(jugador j);
long int darCedula(jugador j);
//retorna la cantidad de meses  quw un jugador esta jugando
int darMesesJugando(jugador j);
//Retorna el jugador intermedio
intermedio darJugIntermedio(jugador j);
//retorna el jugador profesional
profesional darJugProfesional(jugador j);
#endif // JUGADOR_H_INCLUDED
