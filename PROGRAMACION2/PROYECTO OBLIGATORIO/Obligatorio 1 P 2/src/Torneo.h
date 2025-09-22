#ifndef TORNEO_H_INCLUDED
#define TORNEO_H_INCLUDED
#include "jugador.h"
//#include "j_profesional.h"
//#include "string.h"

// Constante
const int MAXINSC = 40;

// Definición del struct
typedef struct {
    jugador inscripcion[MAXINSC];
    int tope;
} Torneo;

int buscarPorCedula(Torneo t, long int cedula);
//Verifica si no hay nadie inscripto
booleano estaVacia(Torneo t);
//verifica si esta lleno el torneo
booleano estaLlena(Torneo t);
//obtener un jugador inscripto segun la cedula
booleano existeJugador(Torneo t,int long cedula);
//agrega un jugador al torneo quedando ingresado por ordenm de inscripcion.
void agregarJugador(Torneo &t, jugador j);
//Eliinar Jugador por cedula y reacomodar jugadores
void elimJugCed(Torneo &t, long int  cedula);
//incrementar en 1 la partida ganada del profesional.
void incrementarPartProfesional(Torneo &t, long int cedula);
//devuleve la cantidad de jugadores por tipo.
void devolverCantJugadoresPorTipo(Torneo t,int &amateur,int &intermedio,int &profesional);
//Saber cuantos Jugadores nacieron en esa fecha
void cantJugadoresNacidosFecha(Torneo t,Fecha f,int &cantJug);
//saber la cantidad de jugadores intermedios que juegan solos o en parejas.
void jugInterSolosyParejas(Torneo t, int &solo,int &pareja);
//nos retorna si existen jugadores con mas de X meses jugando
void cantMesesJugAmat(Torneo t,int &meses,int &cantMesesJugando);
//Devuelve si hay jugadores que tiene mas partidas jugadas de las que se les pasa
booleano profesionalMasPartidas(Torneo t, int cantPartidas);
//Lista los jugadores por orden de inscripcion.
void listarJugadoresXordenInscripcion(Torneo t);
//listar los jugadores que nacieron despues de la fecha solicitada
void listarJugadoresDespuesDeFecha(Torneo t,Fecha f);
//Dado el nombre de un club listar los jugadores proveninete del mismo.
void listarJugadoresDeUnClub(Torneo t,String club);
//Dada una cedula listar en detalles los datos del jugador
void listarJugadorPorCedula(Torneo t, long int cedula);
//listar en detalle todos los datos dell jugador profesional con la mayor cantidad de partidas ganadas
void listarJugadorMasPartidas(Torneo t);


int CantidadInscritos(Torneo i);

#endif // TORNEO_H_INCLUDED
