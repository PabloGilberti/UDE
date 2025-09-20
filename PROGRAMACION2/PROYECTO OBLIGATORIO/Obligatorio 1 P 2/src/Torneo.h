#ifndef TORNEO_H_INCLUDED
#define TORNEO_H_INCLUDED
#include "jugador.h"

// Constante
const int MAXINSC = 40;

// Definición del struct
typedef struct {
    Jugador inscripcion[MAXINSC];
    int tope;
} Torne


//Verifica si no hay nadie inscripto
booleano estaVacia(Torneo t);
//verifica si esta lleno el torneo
booleano estaLlena(Torneo t);
//obtener un jugador segun la cedula
booleano obtenerJugador(Torneo t,int long cedula);
//agrega un jugador al torneo quedando ingresado por ordenm de inscripcion.
void agregarJugador(Torneo &t, Jugador j);
//Eliinar Jugador por cedula y reacomodar jugadores
void elimJugCed(Torneo &t, long int  cedula);
//incrementar en 1 la partida ganada del profesional.
void incremPartProfesional(Torneo &t, long int cedula);

int CantidadInscritos(Torneo i);

#endif // TORNEO_H_INCLUDED
