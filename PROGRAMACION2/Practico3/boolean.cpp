#include "boolean.h"





void cargarBooleano(booleano &b){

    int valor;
    printf ("ingrese 0 si es falso y 1 si es verdadero: ");
    scanf ("%d",& valor);

    if (valor == 0)
        b = FALSE;
    else
        b = TRUE;



}
void desplegarBooleano(booleano b){


    if (b)
        printf ("VERDADERO");
    else
        printf ("FALSO");



}
