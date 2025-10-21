//ACA SE DEFINEN LAS CONSTANTES SIMBOLICAS y SE DEFINEN EN MAYUSCULA

const float IVA = 1.22;

int main()//va en todos los programas de c++
{
    //instrucciones en c++ terminan en ;
    //variable entera numero;
    int numero;
    float real;

    numero = 0;
    real = 2.50;
    letra = 'a';

    int numA, numB, numC;

    char letraMay='B';

//Estructuras de Control SI

    Si COndicion entonces
        secuencia1
    sino
        secuencia2
    fin

    if(condicion)
    {

    }
    else
    {

    }
    //Estructura de Control Switch
    Segun expresion sea
        caso1: Secuencia1
        Caso2: Secuencia2
        ...
//Estructura de Control Mientras

    Mientras condicion sea verdadera

    While(condicion)
          {
              secuencia

          }

//estructura de control repetir
    Repetir
        secuencia
    Mientras conmdicion sea verdadera
    do
    {

        }

}#include <stdio.h>

//comentarios de una sola linea

/*
Este es un comentario
de varias
lineas
*/

//defino una constante simbolica
const float IVA = 0.22;

//bloque principal
int main()
{

    //instruccion en c++ terminan en ;
    //variable entera numero;
    //declaracion de variables
    float precio;

    //salida estandar
    printf("Ingrese un valor para el precio: ");

    //entrada estandar
    scanf("%f", &precio);
    //entrada de enteros: %d
    //entrada de reales: %f
    //entrada de caracteres: %c

    printf("El valor ingresado es: %f, se corresponde a %.1f pesos uruguayos", precio, precio);

    precio = precio+(precio*IVA);

    printf("\nEl precio final es: %f", precio);


}
