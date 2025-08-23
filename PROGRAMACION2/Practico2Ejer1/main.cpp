#include <iostream>
#include <stdio.h>
const int MAX=6;
typedef int arreglo[MAX];
typedef enum {FALSE,TRUE} booleano;
const int TAM = 80;
typedef char String[TAM];

void imprimirArreglo(arreglo arr){


    for(int i = 0;i<MAX;i++){

        printf("\nEl valor en la posicion %d del arreglo es: %d",i,arr[i]);

    }
}
void cargarArreglo(arreglo &arr){
    int numero;

   // printf("Favor cargar valores:");
  //  scanf("%d",&numero);

    for(int i=0;i<MAX;i++){
        printf("\nFavor cargar valores:");
        scanf("%d",&numero);
        arr[i]=numero;
    }

}
booleano existe(arreglo arre, int numero){

    booleano existe=FALSE;
    int i=0;
    while(!existe && i < MAX){

        if(arre[i]== numero){

            existe=TRUE;
        }else{
            i++;
        }

    }

    return existe;

}
void suma_producto(arreglo arre, int &suma,int &producto){

    for (int i=0;i<MAX;i++){

        suma = suma+arre[i];
        producto = producto * arre[i];

    }




}
int retMultiplos(arreglo arre, int numero){

    int contador=0;

    for(int i=0; i<MAX;i++){

        if(arre[i]%numero==0){
            contador++;

        }
    }
        return contador;





}
void invertirArray(arreglo &arr){

    int aux=0,j;

    for(int i=0;i<MAX/2;i++){

        aux=arr[MAX-1-i];
        arr[MAX-1-i]=arr[i];
        arr[i]=aux;

    }
    printf("Imprimir el arreglo ");
    imprimirArreglo(arr);






}
void suap(int &num1, int &num2){
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}
int strlar(String arr){
    int i=0;

    while(arr[i]!='\0'){

        i++;
    }
        return i;
}
void cargarArregloString(String &arr){

    int i=0;
    char c;
    printf("\nCargar su String[ENTER para terminar]");
    scanf("%c",&c);
    while (c!='\n' && i<TAM-1){
        arr[i]=c;
        scanf("%c",&c);
        i++;
    }
    arr[i]='\0';
}
void imprimirArrString(String arre){
    int i=0;

    while(arre[i]!='\0'){
        printf("%c",arre[i]);
        i++;
    }
}
booleano strmen(String arre1,String arre2){
    int i=0;
    booleano menor = TRUE;

    while(arre1[i]!='\0' && arre2[i]!='\0' && menor==TRUE){
        if(arre1[i]>arre2[i]){
            menor=FALSE;
        }
        i++;
    }
    if (arre1[i]!='\0' && arre2[i]=='\0'&& menor==TRUE){

        menor=FALSE;

    }

    return menor;




}
booleano streq(String arre1,String arre2){
    int i=0;
    booleano igual = TRUE;

    while(arre1[i]!='\0' && arre2[i]!='\0' && igual==TRUE){
        if(arre1[i]!=arre2[i]){
            igual=FALSE;
        }
        i++;
    }
    if (((arre1[i]!='\0' && arre2[i] =='\0')||(arre2[i]!='\0' && arre1[i] =='\0'))&& igual==TRUE){
        igual=FALSE;
    }

    return igual;




}
void strcop (String &arre1,String arre2){
    int i=0;
    while (arre2[i]!='\0'){
        arre1[i]=arre2[i];
        i++;
    }
    arre1[i]='\0';
}
void strcon(String &arre1,String arre2){


int i=strlar(arre1);
printf("\nmel indice es:%d",i);
int j = 0;

    while (arre2[j]!='\0' && i < MAX-1){

        arre1[i]=arre2[j];
            i++;
            j++;

    }
    arre1[i]='\0';






}

int main()

{


    //• Cargar un arreglo de enteros con valores leídos por teclado y Mostrar el arreglo por pantalla.
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
        int suma=0, producto=1;
        suma_producto(arre,suma,producto);

        printf("\nEl valor de la suma es:%d y el valor del producto es: %d",suma, producto);

        //Dado un entero m, contar cuántos múltiplos de m hay en el arreglo.
        //int retorno=retMultiplos(arre,3);

        printf("\nElresultado de cantidad de multiplos es:%d",retMultiplos(arre,2));


        //Invertir el arreglo sobre sí mismo (intercambiar 1º con última celda, 2º con penúltima, etc.).

    invertirArray(arre);


 /*   Ejercicio 3
    Se desea escribir una operación llamada swap, que intercambie los valores de dos variables
    enteras. Debe recibir como parámetros los dos enteros y devolverlos con los valores
    intercambiados. Determine si corresponde realizar función o procedimiento, así como la manera en
    la que deben pasarse los parámetros (por valor o por referencia). Luego impleméntelo en C++ e
    invóquelo desde el main.*/

    int num1=23, num2=80;
    suap(num1,num2);

    printf("\nNum1= %d y Num2= %d",num1,num2);


    /*Ejercicio 4
    Dada la siguiente definición del tipo string, implementar las operaciones que se piden en la próxima
    página, decidiendo en cada caso si corresponde realizar función o procedimiento, así como la
    manera en la que hay que pasar los parámetros (por valor o por referencia). Luego invoque a cada
    una de ellas desde el main. */

    /*a) Escribir una operación strlar que devuelva el largo de un string. Se entiende por largo, la
         cantidad de caracteres antes del carácter nulo (‘\0’). */

    String arreglito, arreglote;
//    cargarArregloString(arreglito);
  //  strlar(arreglito);
   // imprimirArrString(arreglito);


    /*d) Escribir una operación strmen que reciba dos strings y devuelva TRUE si el primero de ellos es
    menor (en orden alfabético) que el segundo, o FALSE en caso contrario*/
    //cargarArregloString(arreglito);
    //cargarArregloString(arreglote);

    //booleano verdadero=strmen(arreglito,arreglote);

    //if (verdadero)
    //  printf("ES TRUE");
    //else
    //    printf("ES FALSE");


        /* e) Escribir una operación streq que reciba dos strings y devuelva TRUE si ambos strings son
        iguales o FALSE en caso contrario. */


    /*cargarArregloString(arreglito);
    cargarArregloString(arreglote);

    booleano igual=streq(arreglito,arreglote);

    if (igual)
        printf("ES IGUAL");
    else
        printf("NO ES IGUAL");

*/

   /*f) Escribir una operación strcop que reciba dos strings y copie el segundo en el primero*/

////    cargarArregloString(arreglito);
//    cargarArregloString(arreglote);
//    strcop(arreglito,arreglote);
//    imprimirArrString(arreglito);


/*g)Escribir una operación strcon que reciba dos strings y concatene el segundo string al final del
primero, la concatenación deberá quedar sobre el primero de los dos. En caso de que el largo de
los strings exceda los 79 caracteres, no se tomarán los caracteres excedentes del segundo
string.*/



    cargarArregloString(arreglito);
    cargarArregloString(arreglote);
    strcon(arreglito,arreglote);
    imprimirArrString(arreglito);
}
