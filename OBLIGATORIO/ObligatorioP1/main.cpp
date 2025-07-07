#include <iostream>
#include <stdlib.h>
using namespace std;
const char MAX=40;
const int MAX_HEROES=5;
const int MAX_PODERES=4;

typedef  char superHeroes[MAX_HEROES];
typedef  char superPoderes[MAX_PODERES];
typedef  char String[MAX];
typedef enum {FALSE,TRUE} boolean;

int main()
{


    String heroe,nombre,universo,poder;
    char letra;
    int i=0,j=0,k=0;
    superHeroes nombreHeroes[MAX_HEROES];
    boolean esMarvel, esDC;
//CARGAR JUGADOR
    printf("\nIngrese su nombre: ");
    fflush(stdin);
    scanf ("\n%c", &letra);
    while (letra != '\n' && i < MAX-1){
               nombre[i]=letra;
               i++;
               scanf ("%c", &letra);
    }
    nombre[i]='\0';

//CARGAR EL UNIVERSO
    i=0;
    printf("\nIngrese el universo MARVEL o DC: ");
    fflush(stdin);
    scanf ("%c", &letra);
    while (letra != '\n' && i < MAX-1){
               universo[i]=letra;
               i++;
               scanf ("%c", &letra);
    }
    universo[i]='\0';
//verificar que se ingreso el universo correcto.
    esMarvel=FALSE;
    esDC=FALSE;

         if(i == 6 &&
        (universo[0] == 'M' || universo[0] == 'm') &&
        (universo[1] == 'A' || universo[1] == 'a') &&
        (universo[2] == 'R' || universo[2] == 'r') &&
        (universo[3] == 'V' || universo[3] == 'v') &&
        (universo[4] == 'E' || universo[4] == 'e') &&
        (universo[5] == 'L' || universo[5] == 'l')){

        esMarvel=TRUE;

        }

        if(i == 2 &&
        (universo[0] == 'D' || universo[0] == 'd') &&
        (universo[1] == 'C' || universo[1] == 'c')){
            esDC=TRUE;
        }

    if (esMarvel) {
        printf("El universo es MARVEL\n");
    } else if (esDC) {
        printf("El universo es DC\n");
    } else {
        printf("Universo no reconocido\n");
        return 0;
    }

//CARGAR EL SUPER HEROE



    for (i=0;i<MAX_HEROES;i++){
        printf("Ingrese nombre del superhéroe %d (ENTER para finalizar): ", i + 1);
        j=0;
        do{
            scanf ("%c", &letra);
            if(letra != '\n' ){
               nombreHeroes[i][j]=letra;
               j++;
            }
        }while (letra != '\n' && j < MAX-1);
        nombreHeroes[i][j]='\0';
        //k=0;
        //while (heroe[k] != '\0') {
          //  nombreHeroes[j][k] = heroe[k];
            //k++;
        //}
       // nombreHeroes[j][k] = '\0';

    }




//IMPRIMIR LO CARGADO
    i = 0;
    printf ("\nEl Jugador ingresado es: ");
    while (nombre[i] != '\0') {
           printf ("%c", nombre[i]);
           i++;
    }
    i = 0;
    printf ("\nEl Universo ingresado es: ");
    while (universo[i] != '\0') {
           printf ("%c", universo[i]);
           i++;
    }

  printf("\nSuperhéroes:\n");
for (i = 0; i < MAX_HEROES; i++) {
    printf("  [%d] ", i);
    j = 0;
    while (nombreHeroes[i][j] != '\0') {
        printf("%c", nombreHeroes[i][j]);
        j++;
    }
    printf("\n");
}

    /*scanf("\n%c",&nombre);

    printf("\nIngrese Universo MARVEL o DC: ");
    fflush(stdin);
    scanf("\n%c",&universo);

    printf("\nIngrese 5 Superheroes del universo elegido");

    for (i=0;i<MAX_HEROES;i++){
            printf("\nHeroe Numero:%d",i+1);
            fflush(stdin);
            scanf("%c",&nombreHeroe[i]);


    }

    for (i=0;i<MAX_HEROES;i++){
            printf("\nUsted ingreso los siguientes Super Heroes:%c");
            fflush(stdin);
            scanf("%c",&nombreHeroe[i]);


    }


*/
}
