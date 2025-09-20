#ifndef BOOLEANO_H_INCLUDED
#define BOOLEANO_H_INCLUDED

#include <stdio.h>

//definición de tipo de datos
 typedef enum {FALSE, TRUE} booleano;

//Carga el boolreano
 void cargar (booleano & b);

 /* muestra en pantalla el valor de la variable */
 void mostrar (booleano b);


#endif // BOOLEANO_H_INCLUDED
