#ifndef STRINGDINAMICO_H_INCLUDED
#define STRINGDINAMICO_H_INCLUDED
#include "boolean.h"

const int MAX = 80;
typedef char * String;

// Devuelve longitud de la cadena
int strlar(String s);

// Imprime la cadena
void print(String &s);

// Carga la cadena por teclado
void scan(String &s);

// Devuelve TRUE si s1 < s2
boolean strmen(String s1, String s2);

// Devuelve TRUE si s1 == s2
boolean streq(String s1, String s2);

// Copia s2 en s1
void strcop(String &s1, String s2);

// Concatena s1 y s2
void strcon(String &s1, String s2);

// Intercambia s1 y s2
void strswp(String &s1, String &s2);

//Crea un string vacío (solo con el carácter ?\0?)
void strcrear(String &s);

//Libera la memoria ocupada por el string y lo deja nulo
void strDestruir(String &s);

#endif // STRINGDINAMICO_H_INCLUDED
