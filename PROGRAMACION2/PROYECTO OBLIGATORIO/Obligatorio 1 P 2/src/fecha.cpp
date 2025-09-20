# include "fecha.h"
//Carga una fecha
void cargarFecha (Fecha &f)
{
printf ("Ingrese día, mes y año: ");
scanf ("%d%d%d", &f.dia, &f.mes,&f.anio);
}
//Imprime en pantalla la fecha
void mostrarFecha (Fecha f)
{
printf ("%d/%d/%d", f.dia, f.mes, f.anio);
}
//devuelve el dia de la fecha
int darDia (Fecha f)
{
return f.dia;
}
//devuelve el mes de la fecha
int darMes (Fecha f)
{
return f.mes;
}
//devuelve el año de la fecha
int darAnio (Fecha f)
{
return f.anio;
}
//verifica que sea una fecha valida
booleano fechaValida (Fecha f)
{
booleano es = FALSE;
switch (f.mes)
{
case 1: case 3: case 5: case 7:
case 8: case 10: case 12:
if (f.dia >=1 && f.dia <=31)
es = TRUE;
break;
case 4: case 6: case 9: case 11:
if (f.dia >=1 && f.dia <=30)
es = TRUE;
break;
case 2: if (f.anio % 4 == 0)
{ if (f.dia >=1 && f.dia <=29)
es = TRUE;
}
else
{ if (f.dia >=1 && f.dia <=28)
es = TRUE;
}
}
return es;
}
