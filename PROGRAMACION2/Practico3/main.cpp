#include <iostream>
#include "string.h"
#include "arreglo.h"
using namespace std;

int main()
{

    /*
        Ejercicio 1
        a) Defina el módulo boolean. El archivo boolean.h debe contener la definición del tipo de
           datos junto con los encabezados de los siguientes procedimientos: carga de un booleano por
           teclado y despliegue de un booleano por pantalla, mientras que el archivo boolean.cpp debe
           contener la implementación de dichas operaciones.
        b) Cree otro módulo que contenga el programa principal (main) que permita probar las
           operaciones del módulo anterior.
    */

        //Defino un booleano que esta definido el tipo
        //booleano b;
        //cargarBooleano(b);
        //desplegarBooleano(b);

    /*
        Ejercicio 2
        a) Utilizando la definición de tipo y las operaciones implementadas en el ejercicio 4 del práctico
           2, defina el módulo string. El archivo string.h debe contener la definición del tipo de datos
           junto con los mismos encabezados del ejercicio 4 del práctico 2, mientras que el archivo
           string.cpp debe contener la implementación de dichas operaciones. Incluya el módulo
           boolean definido en el ejercicio 1.
        b) Cree otro módulo que contenga el programa principal (main) que permita probar las
           operaciones del módulo anterior.
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
        Defina un módulo (con los correspondientes archivos .h y .cpp) que incluya la definición del tipo e
        implemente las siguientes operaciones. Para cada operación determine si debe ser función o
        procedimiento y justifique su elección. Especifique toda precondición necesaria junto al cabezal
        correspondiente. Incluya el módulo boolean definido en el ejercicio 1. Luego cree otro módulo que
        contenga el programa principal (main) que permita probar las operaciones del módulo anterior.
        · Carga del arreglo por teclado.
        · Suma de los elementos del arreglo.
        · Promedio de dichos elementos.
        · Desplegar el arreglo por pantalla.
        · Dado un entero determinar si pertenece o no al arreglo.
        · Dado un entero positivo, contar cuántos múltiplos de dicho entero hay en el arreglo.
        · Determinar cuál es el elemento mayor y devolverlo así como la posición que el mismo
          ocupa en el arreglo.
        · Dado un arreglo devolver otro arreglo con los valores del anterior invertidos.
        · Devolver el primero y el último elemento del arreglo.

    */
        arreglo arre;
        int suma;
        cargarArreglo(arre);
        sumaElementos(arre, suma);
        printf("la suma del array es: %d",suma);





}
