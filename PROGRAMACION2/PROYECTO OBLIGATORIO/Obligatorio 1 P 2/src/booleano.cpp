#include "booleano.h"
//Carga el boolreano
void cargar (booleano & b)
{
    int valor;
    printf ("ingrese 0 si es falso y 1 si es verdadero: ");
    scanf ("%d",& valor);
    if (valor == 0)
    b = FALSE;
    else
    b = TRUE;
}
 /* muestra en pantalla el valor de la variable */
void mostrar(booleano b)
{
    if (b)
        printf ("verdadero");
    else
        printf ("falso");
}
