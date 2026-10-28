#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED


#include <cstring>      // strlen, strcpy, strncpy, strcmp, strcat
#include <iostream>     // cout, cin

using namespace std;

const int MAX = 80;     // cantidad máxima de caracteres de un String

class String
{
private:
    char * cadena;      // arreglo dinámico de caracteres terminado en '\0'
                        // (a lo sumo MAX caracteres + el '\0')

public:
    // Constructores
    String();                               // por defecto: cadena vacía
    String( char * cad);               // común: si cad supera MAX, se trunca
    String(const String &otro);             // de copia (copia profunda: evita alias)

    // Destructor
    ~String();

    // Sobrecarga del operador de asignación (evita alias)
    String  operator=(const String &otro);

    // Operaciones pedidas
    bool operator==(const String &otro) ;      // ¿mismo texto?
    bool operator<(const String &otro) ;       // comparación alfabética
    String operator+(const String &otro) ;     // concatenación (se trunca a MAX)

    // Entrada / salida
    void scan();                            // lee un string del teclado (hasta MAX caracteres)
    void print();                     // muestra el string por pantalla

    // Otros métodos
    int largo() const;                      // cantidad de caracteres
    bool mismoLargo(String otro);           // ¿las dos cadenas tienen el mismo largo?
};


#endif // STRING_H_INCLUDED
