#include "Fecha.h"

// ---------------------------------------------------------------- auxiliares privados

bool Fecha::esBisiesto(int a)
{
    return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
}

int Fecha::diasDelMes(int m, int a)
{
    int dias;
    switch (m)
    {
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            dias = esBisiesto(a) ? 29 : 28;
            break;
        default:
            dias = 31;
    }
    return dias;
}

// Transforma el objeto implícito en el día siguiente.
// Ej: 30/11/2000 -> 1/12/2000 ; 31/12/2000 -> 1/1/2001 ; 28/2/2000 -> 29/2/2000
void Fecha::diaSiguiente()
{
    if (dia < diasDelMes(mes, anio))
        dia++;
    else
    {
        dia = 1;
        if (mes < 12)
            mes++;
        else
        {
            mes = 1;
            anio++;
        }
    }
}

// ---------------------------------------------------------------- constructores

Fecha::Fecha()
{
    dia = 1;
    mes = 1;
    anio = 2000;
}

Fecha::Fecha(int d, int m, int a)
{
    dia = d;
    mes = m;
    anio = a;
}

Fecha::Fecha(const Fecha &otra)
{
    dia = otra.dia;
    mes = otra.mes;
    anio = otra.anio;
}

// ---------------------------------------------------------------- selectoras

int Fecha::getDia()
{
     return dia;
}

int Fecha::getMes()
{
    return mes;
}

int Fecha::getAnio()
{
   return anio;
}

// ---------------------------------------------------------------- operadores

bool Fecha::operator== ( Fecha &otra)
{
    return dia == otra.dia && mes == otra.mes && anio == otra.anio;
}

bool Fecha::operator< ( Fecha &otra)
{
    bool es;
    if (anio != otra.anio)
        es = anio < otra.anio;
    else if (mes != otra.mes)
        es = mes < otra.mes;
    else
        es = dia < otra.dia;
    return es;
}

// Prefija (++f): primero incrementa, luego devuelve la fecha YA incrementada
Fecha Fecha::operator++ ()
{
    diaSiguiente();
    return *this;
}

// Postfija (f++): guarda una copia, incrementa, devuelve la fecha ANTERIOR.
// El parámetro int no se usa: solo sirve para distinguirla de la prefija.
Fecha Fecha::operator++ (int)
{
    Fecha anterior(*this);      // constructor de copia
    diaSiguiente();
    return anterior;
}

// f + n: no modifica el objeto implícito, devuelve una fecha nueva
Fecha Fecha::operator+ (int dias)
{
    Fecha resultado(*this);
    for (int i = 0; i < dias; i++)
        resultado.diaSiguiente();
    return resultado;
}

// f1 - f2: cantidad de días de diferencia (siempre >= 0).
// Avanza la fecha menor día a día hasta alcanzar la mayor, contando.
int Fecha::operator- ( Fecha &otra)
{
    bool thisEsMenor = *this < otra;
    Fecha menor(thisEsMenor ? *this : otra);    // constructor de copia
    Fecha mayor(thisEsMenor ? otra : *this);

    int cont = 0;
    while (!(menor == mayor))
    {
        menor.diaSiguiente();
        cont++;
    }
    return cont;
}

// ---------------------------------------------------------------- validación

bool Fecha::esValida()
{
    bool valida = false;
    if (anio >= 1 && mes >= 1 && mes <= 12)
        if (dia >= 1 && dia <= diasDelMes(mes, anio))
            valida = true;
    return valida;
}

void Fecha::sumar1dia(){

    diaSiguiente();


}
