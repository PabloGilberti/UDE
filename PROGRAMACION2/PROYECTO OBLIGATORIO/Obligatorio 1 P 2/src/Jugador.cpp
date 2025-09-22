#include "Jugador.h"
// Operación de carga de un jugdor

void cargarJugador(jugador &j){
    printf("\n Ingrese la cedula del jugador: ");
    scanf("%ld", &j.cedula);
    printf("\n Ingrese el  nombre del jugador: ");
    scan (j.nombre);
    printf ("\n Ingrese el  apellido del jugador: ");
    scan (j.apellido);
    printf ("\n Ingrese la fecha de nacimiento del jugador: ");
    cargarFecha (j.nacimiento);
    printf ("\n Ingrese el tipo de jugador: ");
    cargarTipoJugador(j.discriminante);

        switch (j.discriminante)
        {
            case AMATEUR:
                printf ("\n Indique cantidad  de meses jugando: ");
                scanf("%d", &j.uTipoJugador.meses_jugando);
                break;
            case INTERMEDIO:
                printf ("\n Ingrese cantidad de años : ");
                void cargarIntermedio(intermedio &i);
                break;
            case PROFESIONAL:
                printf ("\n Ingrese el nombre de club que pertenece  ");
                void cargarProfesional(profesional &p);
                break;
        }
}


void mostrarJugado (jugador j)
{
    printf ("\n Cedula: ");
    printf ("%ld", j.cedula);
    printf ("\n nombre: ");
    printf (j.nombre);
    printf ("\n apellido: ");
    printf (j.nombre);
    printf ("\n Fecha de Nacimiento: ");
    void mostrarFecha(Fecha j);
    printf ("\n Tipo de jugador: ");
    void darTipoJugador (TipoJugador j);
}


void darNombre(jugador j, String &s)
{
 strcop (j.nombre, s);
}


void darApellido(jugador j, String &s)
{
strcop (j.apellido, s);
}


void mostrarFechaNacimiento(jugador j)
{
    printf("\n Fecha de Nacimiento: ");
    mostrarFecha(j.nacimiento);
}




void mostrarCedula(jugador j)
{
    printf("\n Cedula: %ld", j.cedula);
}

