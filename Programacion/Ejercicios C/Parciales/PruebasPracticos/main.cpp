#include <iostream>
#include<stdio.h>

using namespace std;
typedef enum {cerveza,ron,cana,espinillar} bebidas;

const float PI=3.14;
int main()
{/*
    bebidas tomar=espinillar;
    printf("%c",tomar);
    cout << "Hello world!" << endl;

    switch(tomar){

    case cerveza:
        printf("La Bebida a tomar es cerveza");
        break;
    case ron:
        printf("La bebida a tomar es ron");
        break;
    case cana:
        printf("La bebida a tomar es cana");
    case espinillar:
        printf("La bebida a tomar es espinillar");
        break;
    default:
        printf("La bebida es desconicida");
    }


    int a=10;
    int b=15;
    int resultado = (a>0)&&(b<20);

    if (resultado){

        printf("\nLa expresion booleana es verdadera");

    }else{
        printf("\nLa expresion booleana es falsa");
    }


    char hay,buenestado,malestado;
    int piezasMalas=0,piezasBuenas=0;

    printf("\nExisten piezas para procesar?");
    scanf(" %c",&hay);
    while(hay =='s'|| hay == 'S'){
        printf("\nLa pieza esta en buen estado?");
        scanf(" %c",&buenestado);
        if(buenestado=='s'|| buenestado=='S'){
            piezasBuenas = piezasBuenas + 1 ;
            printf("buena");
        }else{
            piezasMalas = piezasMalas + 1;
            printf("mala");
        }

    printf("\nExisten piezas para procesar?");
    scanf(" %c",&hay);


    }
    printf("\nEl total de piezas en buen estado es: %d",piezasBuenas);
    printf("\nEl total de piezas en mal estado es : %d",piezasMalas);

*/
/*
float valor1,valor2,resultado;
int opcion;

printf("Vamos a calcular el area de algunas figuras geometricas\n");
printf("\n**********MENU**********\n ");
printf("\n1 - Triangulo.\n2 - Cuadrado.\n3 - Rectangulo.\n4 - Rombo.\n5 - Circulo\n");
printf("\n************************\n");
printf("\nIngrese una opcion:");
scanf(" %d",&opcion);
    switch(opcion){
    case 1:
        printf("\nIngrese el valor de la base:");
        scanf(" %f",&valor1);
        printf("\nIngrese el calor de altura:");
        scanf(" %f",&valor2);
        resultado=valor1*valor2/2;
        printf("\nEl valor del area del triangulo es %.2f",resultado);
        break;
    case 2:
        printf("\nVamos a calcular el area de un cuadradro, ingresa el valor de un lado: ");
        scanf("\n%f",&valor1);
        printf("\nIngresa el valor del otro lado: ");
        scanf("\n %f",&valor2);
        resultado = valor1*valor2;
        printf("\nEl valor del area del cuadrado es %.2f",resultado);
        break;
    case 3:
        printf("\nVamos a calcular el area de un rectangulo, ingresa el valor del largo: ");
        scanf("\n%f",&valor1);
        printf("\nIngresa el valor del ancho: ");
        scanf("\n %f",&valor2);
        resultado = valor1*valor2;
        printf("\nEl valor del area del rectangulo es %.2f",resultado);
        break;
    case 4:
        printf("\nVamos a calcular el area de un rombo, ingresa el valor de la diagonal mayor: ");
        scanf("\n%f",&valor1);
        printf("\nIngresa el valor de la diagonal menor: ");
        scanf("\n %f",&valor2);
        resultado = valor1*valor2/2;
        printf("\nEl valor del area del rombo es %.2f",resultado);
        break;
    case 5:
        printf("\nVamos a calcular el area de un circulo, ingresa el valor del radio: ");
        scanf("\n%f",&valor1);
        resultado = PI*(valor1*valor1);
        printf("\nEl valor del area del circulo es %.2f",resultado);
        break;
    default:
            printf("El Valor ingresado no es correcto");

    }*/
    int i,b=2,e=5,res=1;
    for(i=1;i<=3;i++)
        res=res*b;

        printf("el resultado es: %d",res);


}
