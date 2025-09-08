#include "fecha.h"
int diasEnMes(int mes, int anio) {
   booleano bisiesto = EsBisiesto(anio);

    switch (mes) {
        case 1:
            return 31;
        case 2:

            if (bisiesto == TRUE)
                 return  29;
            else
            return  28;

        case 3:
            return 31;
            break;
        case 4:
            return 30;
            break;
        case 5:
            return 31;
            break;
        case 6:
            return 30;
            break;
        case 7:
            return 31;
            break;
        case 8:
            return 31;
            break;
        case 9:
            return 30;
            break;
        case 10:
            return 31;
            break;
        case 11:
            return 30;
            break;
        case 12:
            return 31;
            break;
        default:
            return -1;
    }
}

booleano EsBisiesto(int anio) {
    if (anio % 4 == 0)
        return TRUE;
    else
        return FALSE;
}


booleano FechaValida(Fecha f){


    if(f.mes<1||f.mes>12)
        return FALSE;

    int maxDia = diasEnMes(f.mes, f.anio);
    if (maxDia < 0)
        return FALSE;

    if (f.dia < 1 || f.dia > maxDia)
        return FALSE;

    return TRUE;
}


void CargarFecha(Fecha &f){
    booleano validado;
do{
printf("Ingrese el dia: ");
scanf("%d",&f.dia);

printf("Ingrese el mes: ");
scanf("%d",&f.mes);

printf("Ingrese el año: ");
scanf("%d",&f.anio);

    if (FechaValida(f) == TRUE) {
            validado = TRUE;
        } else {
            printf("Fecha invalida. Intente nuevamente.\n");
        }

}while (validado==FALSE);

}


void MostrarFecha(Fecha f){

printf("%02d/%02d/%04d",f.dia,f.mes,f.anio);

}
//selectoras
int DarDia(Fecha f){

    return f.dia;

}
int DarMes(Fecha f){

    return f.mes;

}
int DarAnio (Fecha f){

    return f.anio;

}
