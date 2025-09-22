#ifndef J_PROFESIONAL_H_INCLUDED
#define J_PROFESIONAL_H_INCLUDED
#include "string.h"

#include <stdio.h>

typedef struct{String nombreClub;
			    int cantPartGanadas;
			   }profesional;





//Carga los datos de un jugador profesional
void cargarProfesional(profesional &p);
//Muestra los datos de un jugador  Profesional
void mostrarProfesional(profesional p);
//Retorna el nombre del club de origen del jugador porfesional
void darNombreClubOrigen(profesional p,String &NombreClub);
//sumar las partidas ganadas al profesional
void sumarPartidaGanada(profesional &p);

//Retorna la cantidad de partidas ganadas por el jugador de tipo profesional.
int darCantPartidasGanadas(profesional p);












#endif // J_PROFESIONAL_H_INCLUDED
