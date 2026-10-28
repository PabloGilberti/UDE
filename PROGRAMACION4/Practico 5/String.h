#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <cstring>
#include <iostream>

const int MAX = 80;
class String{
private:
    char * cadena;
public:
    String();   //costructor por defecto
    String(char *); //constructor comun
    String(const String &otro); //constructor de copia
    ~String();  //destructor
    String operator=(const String &otro);   //sobrecarga del operador
    bool operator== (const String &otro);
    bool operator< (const String &otro);
    String operator+ (const String &otro);  //concatenar
    void scan();
    void print();

};


#endif // STRING_H_INCLUDED
