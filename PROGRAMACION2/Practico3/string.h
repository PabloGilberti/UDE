#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
//*****************************************************
#include "boolean.h"
const int StringMAX=80;
typedef char String[StringMAX];

//*****************************************************

void cargarArregloString(String &arr);

int strlar(String arr);

void strcon(String &arre1,String arre2);

void strcop (String &arre1,String arre2);

void imprimirArrString(String arre);

booleano strmen(String arre1,String arre2);

booleano streq(String arre1,String arre2);

#endif // STRING_H_INCLUDED
