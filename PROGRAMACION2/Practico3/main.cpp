#include <iostream>
#include "string.h"
#include "arreglo.h"
using namespace std;

int main()
{

    /*
        Ejercicio 1
        a) Defina el m�dulo boolean. El archivo boolean.h debe contener la definici�n del tipo de
           datos junto con los encabezados de los siguientes procedimientos: carga de un booleano por
           teclado y despliegue de un booleano por pantalla, mientras que el archivo boolean.cpp debe
           contener la implementaci�n de dichas operaciones.
        b) Cree otro m�dulo que contenga el programa principal (main) que permita probar las
           operaciones del m�dulo anterior.
    */

        //Defino un booleano que esta definido el tipo
        //booleano b;
        //cargarBooleano(b);
        //desplegarBooleano(b);

    /*
        Ejercicio 2
        a) Utilizando la definici�n de tipo y las operaciones implementadas en el ejercicio 4 del pr�ctico
           2, defina el m�dulo string. El archivo string.h debe contener la definici�n del tipo de datos
           junto con los mismos encabezados del ejercicio 4 del pr�ctico 2, mientras que el archivo
           string.cpp debe contener la implementaci�n de dichas operaciones. Incluya el m�dulo
           boolean definido en el ejercicio 1.
        b) Cree otro m�dulo que contenga el programa principal (main) que permita probar las
           operaciones del m�dulo anterior.
    */

        //Cargar String
     //   String arreString;
     //   cargarArregloString(arreString);
     //   imprimirArrString(arreString);




   /*
        Ejercicio 3
        Dado el siguiente tipo de datos:
            const int TAM = 50;
            typedef int arreglo [TAM];
        Defina un m�dulo (con los correspondientes archivos .h y .cpp) que incluya la definici�n del tipo e
        implemente las siguientes operaciones. Para cada operaci�n determine si debe ser funci�n o
        procedimiento y justifique su elecci�n. Especifique toda precondici�n necesaria junto al cabezal
        correspondiente. Incluya el m�dulo boolean definido en el ejercicio 1. Luego cree otro m�dulo que
        contenga el programa principal (main) que permita probar las operaciones del m�dulo anterior.
        � Carga del arreglo por teclado.
        � Suma de los elementos del arreglo.
        � Promedio de dichos elementos.
        � Desplegar el arreglo por pantalla.
        � Dado un entero determinar si pertenece o no al arreglo.
        � Dado un entero positivo, contar cu�ntos m�ltiplos de dicho entero hay en el arreglo.
        � Determinar cu�l es el elemento mayor y devolverlo as� como la posici�n que el mismo
          ocupa en el arreglo.
        � Dado un arreglo devolver otro arreglo con los valores del anterior invertidos.
        � Devolver el primero y el �ltimo elemento del arreglo.

    */
        arreglo arre;
        int suma;
        cargarArreglo(arre);
        sumaElementos(arre, suma);
        printf("la suma del array es: %d",suma);





}
