#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <stdio.h>
#include "booleano.h"
typedef struct {int dia;
                int mes;
                int anio;}Fecha;

void CargarFecha(Fecha &f);
void MostrarFecha(Fecha f);
int DarDia(Fecha f);
int DarMes(Fecha f);
int DarAnio (Fecha f);
// Validaciones
booleano EsBisiesto(int anio);
booleano EsFechaValida(Fecha f);

#endif // FECHA_H_INCLUDED
