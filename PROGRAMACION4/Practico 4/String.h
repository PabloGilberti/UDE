#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED


#include <cstring>      // strlen, strcpy

class String
{
private:
    char * cadena;      // arreglo dinámico de caracteres terminado en '\0'

public:
    // Constructores
    String();                               // por defecto: cadena vacía
    String( char * cad);               // común: a partir de un texto
    String(const String &otro);             // de copia (copia profunda)

    // Destructor
    ~String();

    // Sobrecarga del operador de asignación
    String  operator=(const String &otro);

    // Otros métodos
    bool mismoLargo(String otro);           // ¿las dos cadenas tienen el mismo largo?
};


#endif // STRING_H_INCLUDED
