#include "J_profesional.h"
#include "string.h"

//Carga los datos de un jugador profesional

void cargarProfesional(profesional &p)
{

    printf ("\nIngrese su club:");
    scan(p.nombreClub);
    printf ("\nIngrese su cantidad de partidas ganadas:");
    scanf ("%d", &p.cantPartGanadas);
}
//Muestra los datos de un jugador  Profesional
void mostrarProfesional(profesional p)
{
    printf ("Club de origen del jugador Profesional:%s \n", p.nombreClub);
    printf ("Cantidad de partidas ganadas por el jugador:%d \n", p.cantPartGanadas);
}

//Retorna el nombre del club de origen del jugador porfesional
void darNombreClubOrigen(profesional p,String &s)
{

    strcop (s,p.nombreClub);

}

//Retorna la cantidad de partidas ganadas por el jugador de tipo profesional.
int darCantPartidasGanadas(profesional p)
{
    return p.cantPartGanadas;
}


void sumarPartidaGanada(profesional &p) {

    p.cantPartGanadas = p.cantPartGanadas + 1;

    /* o p.cantPartGanadas++; */
}
