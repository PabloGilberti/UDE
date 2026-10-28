#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha
{
private:
    int dia;
    int mes;
    int anio;

    // Métodos que son privados
    void diaSiguiente();                      //  la fecha actual le voy a sumar un dia mas
    bool esBisiesto(int a);            // me va a retornar  true  si el año a es bisiesto
    int diasDelMes(int m, int a);      // calcula la cantidad de dias en el mes de un año dado

public:
    // Constructores
    Fecha();                                  // por defecto
    Fecha(int d, int m, int a);               // común
    Fecha(const Fecha &otra);                 // de copia

    // Selectoras
    int getDia();
    int getMes();
    int getAnio();

    // Oñperadores para sobre carga
    bool  operator== ( Fecha &otra);   //(determina si ambas fechas son iguales)
    bool  operator<  ( Fecha &otra);   //(determina si la primer fecha es anterior a la segunda)
    Fecha operator++ ();               //(suma un día a una fecha dada)Prefijo
    Fecha operator++ (int);            //(suma un día a una fecha dada))Postfijo
    Fecha operator+  (int dias);       //(suma una cantidad dada de días a una fecha dada)
    int   operator-  (Fecha &otra);   // que va hacer la resta, en este caso dias de diferencia

    bool esValida(); //verificar que sea valida la fecha en el calendario
    void sumar1dia();
};




#endif // FECHA_H_INCLUDED
