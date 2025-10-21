#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    /*
   int n1,n2;
        printf("ingrese numero 1:");
        scanf("%d",&n1);
        printf("ingrese numero 2:");
        scanf("%d",&n2);
        if (n2 == 0)
            printf("divisor no puede ser igual a 0");
        else
        {
            printf("el resultado de la division es: %d \n",n1/n2);
            printf("el MODULO de la division es: %d",n1%n2);
        }

        int nota;
     printf("ingrese nota:");
     scanf("%d",&nota);
     if(nota>= 0 && nota<=3)
        printf("REPROBADO");
        else if(nota>= 4 && nota<=7)
                printf("ACEPTABLE");
                else if (nota>= 8 && nota<=11)
                    printf("BUENO");
                    else if(nota == 12)
                        printf("EXCELENTE");
                        else
                            printf("NOTA DEBE ESTAR ENTRE 0 y 12");

    int nota;
    printf("Ingrese la nota: ");
    scanf("%d",&nota);


    switch (nota) {
        case 0:
        case 1:
        case 2:
        case 3:
            printf("Reprobado");
            break;
        case 4:
        case 5:
        case 6:
        case 7:
          printf( "Aceptable");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
             printf( "Bueno");
            break;
        case 12:
             printf( "Excelente");
            break;
        default:
            printf("Nota fuera de rango");
            break;
    }


float capacidad;
    printf("ingrese capacidad:");
    scanf("%f",&capacidad);
    if(capacidad>= 0 && capacidad<=0.3)
        printf("VACIA");
        else if(capacidad> 0.3 && capacidad<=0.7)
                printf("MEDIA");
                else if (capacidad > 0.7 && capacidad<=1)
                    printf("LLENA");
                    else
                        printf("NO ESTA DENTRO DEL RANGO");
    }*/

/*
//Ejercicio 8
    const int INICIO=32;
    const int FIN = 256;
    const int LINEAS_A_MOSTRAR=20;
    int contador=0;
    int i=0;
    char c;
    for (i=INICIO;i<FIN;i++){
        c=i;//conversion implicita
        printf("%d - %c\n",i,c);
        contador++;

        if(contador==LINEAS_A_MOSTRAR){

            printf("\n Presione ENTER para continuar");
           // cin.get();//Espera que se precione enter es compatible con todos los S.O
            getchar();
            contador=0;

        }


    }*/
    //Ejercicio 9

//Conjunto puede estar vacio A)

/*    char c;
    int contvocales=0;

    printf("Ingrese caracteres uno por uno (finalizar con *):\n");
    fflush(stdin);
    scanf("%c",&c);
    //c=getchar();


    while (c!='*'){

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'|| c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            contvocales++;

        fflush(stdin);
        scanf("%c",&c);




    }
    printf("Cantidad de Vocales ingresadas: %d",contvocales);

    *//*
//PARTE B

     char c;
     int contadorVocales = 0;

    printf("Ingrese al menos un carácter (finalice con *):");

    do {
       scanf("%c",&c);

        if (c != '*') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                contadorVocales++;
            }
        }

    } while (c != '*');

    printf( "Cantidad de vocales ingresadas:%d", contadorVocales);
*/
//Ejercicio 10
//Escribir un programa en C++ que lea como entrada un número entero n desde teclado. El
//programa debe calcular la suma de todos los números enteros que hay desde 1 hasta n y mostrar
//dicha suma como salida en pantalla.
/*

    int numero,i,suma=0;
    printf("Ingresar un numero:\n");
    scanf("%d",&numero);

    for (i=1;i<numero;i++){

        suma=suma + i;
        printf("\nEl resultado es:%d:",suma);
    }


*/

//Ejercicio 11
//Escribir un programa en C++ que pida diez números enteros al usuario como dato de entrada. El
//programa debe sumar los pares por un lado y los impares por otro. Como salida, debe escribir en la
//pantalla ambos resultados.
  /*  int numero,i;
    int sumaPares = 0;
    int sumaImpares = 0;

    for (i = 1; i <= 10; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            sumaPares += numero;
        } else {
            sumaImpares += numero;
        }
    }

    printf("Suma de números pares: %d\n", sumaPares);
    printf("Suma de números impares: %d\n", sumaImpares);
*/

    int a, b;
    int resultado = 1;

    // Leer a
    printf("Ingrese la base (a): ");
    scanf("%d", &a);

    // Leer b y validar que sea mayor o igual a 0
    do {
        printf("Ingrese el exponente (b, b >= 0): ");
        scanf("%d", &b);
        if (b < 0) {
            printf("Error: el exponente no puede ser negativo.\n");
        }
    } while (b < 0);

    // Calcular a^b manualmente (sin pow)
    for (int i = 0; i < b; i++) {
        resultado *= a;
    }

    printf("El resultado de %d elevado a la %d es: %d\n", a, b, resultado);


}
