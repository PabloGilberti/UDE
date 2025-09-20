#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include "booleano.h"


typedef struct {int dia;
				int mes;
				int anio;
				}Fecha;

//Carga una fecha
void cargarFecha(Fecha &f);
//Imprime en pantalla la fecha
void mostrarFecha(Fecha f);
//devuelve el dia de la fecha
int darDia(Fecha f);
//devuelve el mes de la fecha
int darMes(Fecha f);
//devuelve el año de la fecha
int darAnio(Fecha f);
//verifica que sea una fecha valida
booleano fechaValida(Fecha f);



#endif // FECHA_H_INCLUDED
