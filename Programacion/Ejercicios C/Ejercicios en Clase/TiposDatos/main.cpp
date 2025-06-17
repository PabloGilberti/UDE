#include <stdio.h>

using namespace std;
//eJERCICIO 1
const int DIAS = 7;
const float PI = 3.1416;
const float DISTANCIA = 194.6;
const int MESES =12;
const float IVA=0.22;


int main()
{
    //Ejercicio 2
    //a)
    printf("Este es un mensaje\n");

    //b)
    printf("Esta es la primera linea\n");
    printf("Esta es la segunda linea\n");
    //C)
    int valor=0;
    printf("Ingrese un valor:");
    scanf("%d",&valor);
    printf("El valor ingresado es:");
    printf("%d" ,valor);
    //d)
    float precio=0.0;
    float total=0.0;
    printf("\n");
    printf("Ingrese el precio del articulo:");

    scanf("%f",&precio);

    printf("El iva del precio ingresado es: %.2f", precio*IVA);
    printf("\n");
    printf("El precio total con IVA inc. es:%.2f", precio+precio*IVA);

//e)
    int num1,num2, resultado;
    printf("\n");
    printf("Ingrese primer valor:");
    scanf("%d",&num1);
    printf("\n");
    printf("ingrese segundo valor:");
    scanf("%d",&num2);
    printf("\n");
    printf("El resultado es; %d",num1+num2);
    //con variable auxiliar
    resultado=num1+num2;
    printf("El resultado es; %d",resultado);

//f)
    float radio;
    printf("\n");
    printf("Ingrese el radio: ");
    scanf("%f",&radio);
    printf("El area del circulo es %.2f", radio*radio*PI);
//g)

    int var1=22, var2= 34, aux=var1;
    printf("valores iniciales de var1: %d,var2: %d\n", var1, var2);
    var1=var2;
    var2=aux;
    printf("valores finales de var1: %d,var2: %d\n", var1, var2);
}

