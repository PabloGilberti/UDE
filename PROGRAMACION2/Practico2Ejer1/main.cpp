



#include <iostream>
#include <stdio.h>
#include "string.h"
#include "entero.h"
//const int MAX=6;


















int main()

{


    //� Cargar un arreglo de enteros con valores le�dos por teclado y Mostrar el arreglo por pantalla.
    arreglo arre;

    //cargarArreglo(arre);
    //imprimirArreglo(arre);

    //Dado un valor, saber si pertenece o no al arreglo.

   // booleano existente=existe(arre,14);

//        if (existente){

  //          printf("\nExiste el valor buscado");
    //    }else{
      //      printf("\nNo existe el valor buscado");
        //}



        //Devolver la suma y el producto de todos los valores del arreglo.
       // int suma=0, producto=1;
       // suma_producto(arre,suma,producto);

//        printf("\nEl valor de la suma es:%d y el valor del producto es: %d",suma, producto);

        //Dado un entero m, contar cu�ntos m�ltiplos de m hay en el arreglo.
        //int retorno=retMultiplos(arre,3);

       // printf("\nElresultado de cantidad de multiplos es:%d",retMultiplos(arre,2));


        //Invertir el arreglo sobre s� mismo (intercambiar 1� con �ltima celda, 2� con pen�ltima, etc.).

//    invertirArray(arre);


 /*   Ejercicio 3
    Se desea escribir una operaci�n llamada swap, que intercambie los valores de dos variables
    enteras. Debe recibir como par�metros los dos enteros y devolverlos con los valores
    intercambiados. Determine si corresponde realizar funci�n o procedimiento, as� como la manera en
    la que deben pasarse los par�metros (por valor o por referencia). Luego implem�ntelo en C++ e
    inv�quelo desde el main.*/

    int num1=23, num2=80;
    suap(num1,num2);

    printf("\nNum1= %d y Num2= %d",num1,num2);


    /*Ejercicio 4
    Dada la siguiente definici�n del tipo string, implementar las operaciones que se piden en la pr�xima
    p�gina, decidiendo en cada caso si corresponde realizar funci�n o procedimiento, as� como la
    manera en la que hay que pasar los par�metros (por valor o por referencia). Luego invoque a cada
    una de ellas desde el main. */

    /*a) Escribir una operaci�n strlar que devuelva el largo de un string. Se entiende por largo, la
         cantidad de caracteres antes del car�cter nulo (�\0�). */

    String arreglito, arreglote;
//    cargarArregloString(arreglito);
  //  strlar(arreglito);
   // imprimirArrString(arreglito);


    /*d) Escribir una operaci�n strmen que reciba dos strings y devuelva TRUE si el primero de ellos es
    menor (en orden alfab�tico) que el segundo, o FALSE en caso contrario*/
    //cargarArregloString(arreglito);
    //cargarArregloString(arreglote);

    //booleano verdadero=strmen(arreglito,arreglote);

    //if (verdadero)
    //  printf("ES TRUE");
    //else
    //    printf("ES FALSE");


        /* e) Escribir una operaci�n streq que reciba dos strings y devuelva TRUE si ambos strings son
        iguales o FALSE en caso contrario. */


    /*cargarArregloString(arreglito);
    cargarArregloString(arreglote);

    booleano igual=streq(arreglito,arreglote);

    if (igual)
        printf("ES IGUAL");
    else
        printf("NO ES IGUAL");

*/

   /*f) Escribir una operaci�n strcop que reciba dos strings y copie el segundo en el primero*/

////    cargarArregloString(arreglito);
//    cargarArregloString(arreglote);
//    strcop(arreglito,arreglote);
//    imprimirArrString(arreglito);


/*g)Escribir una operaci�n strcon que reciba dos strings y concatene el segundo string al final del
primero, la concatenaci�n deber� quedar sobre el primero de los dos. En caso de que el largo de
los strings exceda los 79 caracteres, no se tomar�n los caracteres excedentes del segundo
string.*/



    cargarArregloString(arreglito);
    cargarArregloString(arreglote);
    strcon(arreglito,arreglote);
    imprimirArrString(arreglito);
}
