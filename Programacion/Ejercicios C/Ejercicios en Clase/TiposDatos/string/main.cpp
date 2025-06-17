#include <iostream>





/*2. Tengo necesidad de poder guardar cadenas de caracteres de largo variable. Por Ejemplo:
�Buenos d�as� (largo 11)
�Esta es una prueba� (largo 18)
Una cadena vac�a �� (largo 0).
a) De acuerdo con el material te�rico �Qu� car�cter especial debo colocar para indicar que
la tira lleg� a su fin?
R: '\0'
 �En qu� posici�n del string debo colocarlo?
 R: al final del ultimo caracter valido
b) Dibuja c�mo lucen en memoria los strings correspondientes a los tres ejemplos dados

B_u_e_n_o_s d_i_a_s_\0_ _ _ _ _ _ _ _ _ _ _ _ _ _ _80_
E_s_t_a e_s u_n_a p_r_u_e_b_a\0_ _ _ _ _ _ _ _ _ _ 80_
\0_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _80_


Deseo escribir un fragmento de programa que cargue por teclado una cadena de caracteres
 ingresada por el usuario y almacenarla en un string. El usuario ingresar� los caracteres por
 teclado y dar� ENTER para marcar la finalizaci�n de la cadena de caracteres. �Es posible
 utilizar for para realizar la carga del string? Justifica tu respuesta.

 R: no, debido a que no sabemos cuantos caracteres se van a cargar o si se carga alguno, por eso nos declinmos por un while.

Vamos a escribir ahora el fragmento de programa que realiza la carga del string mencionada
 en el punto anterior. La cantidad de caracteres puede ser cualquiera, incluso podr�a pasar que
 no sea ninguno (cadena vac�a) Asumamos ya declarada la variable string cadena;
a) Considerando lo anterior, �qu� tipo de iteraci�n debemos usar?
b) Debemos ir leyendo caracteres de a uno hasta que el usuario ingrese ENTER o hasta que
se hayan leido 79 caracteres como mucho (lo que pase primero). Piensa c�mo debe ser la
condici�n que controle ambas cosas en la iteraci�n a realizar.
c) Cuando terminemos de cargar el string �qu� car�cter debemos colocarle al final?
d) Tomando en cuenta todo lo anterior, escribe el correspondiente fragmento de programa
*/
#include <stdio.h>
const int MAX=80;
typedef char String[MAX];


int main (){



    String cadena;
    char caracter;
    int i=0, j=0;



    printf("Ingrese caracteres:");
    scanf("%c",&caracter);

    while (caracter!='\n' && i < MAX-1){

        cadena[i]=caracter;
        i++;

        scanf("%c",&caracter);

    }
    cadena[i]='\0';
    printf("Se Termino");




        /* code */
     while (cadena[j]!='\0'){


        printf("%c",cadena[j]);
        j++;

     }
}


