#ifndef J_INTERMEDIO_H_INCLUDED
#define J_INTERMEDIO_H_INCLUDED
#include "booleano.h"

typedef struct {int cantAnios;
				booleano enPareja;}intermedio;


//Carga los datos de un jugador intermedio
void cargarIntermedio(intermedio &i);
//Muestra los datos de un jugador  intermedio
void mostrarIntermedio(intermedio i);
// retorna la cantidad de años de un jugador interm,edio
int darCantAnios(intermedio i);
//Retorna si un jugador intermedio juega en pareja
booleano juegaEnPareja(intermedio i);












#endif // J_INTERMEDIO_H_INCLUDED
