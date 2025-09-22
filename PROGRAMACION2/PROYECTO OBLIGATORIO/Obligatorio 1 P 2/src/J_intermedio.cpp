#include "J_intermedio.h"

//Carga los datos de un jugador intermedio
void cargarIntermedio(intermedio &i)
{
    printf ("Ingrese su edad: \n");
    scanf ("%d", &i.cantAnios);

    char pareja;
    printf("Juega en pareja(s/n): \n");
    scanf (" %c", &pareja);

    if (pareja == 's' || pareja || 'S')
        i.enPareja = TRUE;
    else
        i.enPareja = FALSE;
}

//Muestra los datos de un jugador  intermedio
void mostrarIntermedio(intermedio i)
{
printf ("Anios del Jugador Intermedio:%d \n", i.cantAnios);
printf ("El jugador Intermedio juega en pareja: %s \n", i.enPareja? "si" : "no");
}
// retorna la cantidad de años de un jugador intermedio
int darCantAnios(intermedio i)
{
    return i.cantAnios;
}

//Retorna si un jugador intermedio juega en pareja
booleano juegaEnPareja(intermedio i)
{
    return i.enPareja;
}
