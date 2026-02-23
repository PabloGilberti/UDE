#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "Booleano.h"
 const int MAX =80;
 typedef char * String;


//Devuelve la longitud de la cadena.
int strlar( const char * s);

//Imprime la cadena por pantalla.
void print(String &s);

//Carga la cadena por teclado.
void scan(String &s);

//Devuelve TRUE si s1 es menor que s2, FALSE en caso contrario.
Boolean strmen(String s1, String s2);

//Devuelve TRUE si s1 es igual a s2, FALSE en caso contrario.
Boolean streq(String s1, String s2);

//Copia s1 en s2.
void strcop(char* destino, const char* origen);

//Concatena s1 y s2 en s3.
void strcon(String &s1, String s2);

//Intercambia s1 y s2.
void strswp(String &s1, String &s2);

#endif // STRING_H_INCLUDED
