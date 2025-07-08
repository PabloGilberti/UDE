#include <iostream>
#include <stdlib.h>
using namespace std;
const char MAX=40;
const int MAX_HEROES=5;
const int MAX_PODERES=4;
typedef  char String[MAX];

typedef  String superHeroes[MAX_HEROES];
typedef  String superPoderes[MAX_PODERES];
typedef enum {FALSE,TRUE} boolean;
typedef int Matriz[MAX_HEROES][MAX_PODERES];


int main()
{


    String nombre,universo;
    char letra;
    int i=0,j=0,k=0;
    superHeroes nombreHeroes;
    superPoderes descPoderes;
    boolean esMarvel, esDC;
    Matriz opinionUser,matrizRandom, matrizPuntos;
    int sumaUsuario[MAX_HEROES];
    int sumaPublico[MAX_HEROES];
    int puntosTotalesUsuario = 0;


/************************************************************************************
**************************  CARGAR NOMBRE JUGADOR  **********************************
************************************************************************************/

    printf("\nIngrese su nombre: ");
    fflush(stdin);
    scanf ("%c", &letra);
    while (letra != '\n' && i < MAX-1){
               nombre[i]=letra;
               i++;
               scanf ("%c", &letra);
    }
    nombre[i]='\0';

/************************************************************************************
****************************  CARGAR UNIVERSO  **************************************
************************************************************************************/
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

/************************************************************************************
**************************  CARGAR SUPER HEROE  *************************************
************************************************************************************/

    for (i=0;i<MAX_HEROES;i++){
        printf("Ingrese nombre del superhéroe %d (ENTER para finalizar): ", i + 1);
        j=0;

        do{
            scanf("%c",&letra);
            if(letra != '\n' ){
               nombreHeroes[i][j]=letra;
               j++;
               }
        }while (letra != '\n' && j < MAX-1);
        nombreHeroes[i][j]='\0';

    }



/************************************************************************************
**************************  CARGAR SUPER PODER  *************************************
************************************************************************************/

    for (i=0;i<MAX_PODERES;i++){
        printf("Ingrese 4 Super poderes d (ENTER para finalizar): ", i + 1);
        j=0;
        fflush(stdin);
        do{
            scanf ("%c", &letra);
            if(letra != '\n' ){
               descPoderes[i][j]=letra;
               j++;
            }
        }while (letra != '\n' && j < MAX-1);
        descPoderes[i][j]='\0';
    }
       printf("Super Poderes:\n");

/************************************************************************************
******************************  CARGAR LA JUGADA  ***********************************
************************************************************************************/


  for (i = 0; i < MAX_HEROES; i++) {
    for (j = 0; j < MAX_PODERES; j++) {
        printf("Ingrese la puntuación del superhéroe: ");

        //mostrar el super heroe
        k = 0;
        fflush(stdin);
        while (nombreHeroes[i][k] != '\0') {
            printf("%c", nombreHeroes[i][k]);
            k++;
        }

        printf(" con el poder ");

        // mostrar el superpoder
        k = 0;
        fflush(stdin);
        while (descPoderes[j][k] != '\0') {
            printf("%c", descPoderes[j][k]);
            k++;
        }

        printf(" (0 a 5): ");
        scanf("%d", &opinionUser[i][j]);

        // valido la opinion del user de 0 a 5
        while (opinionUser[i][j] < 0 || opinionUser[i][j] > 5) {
            printf("Valor inválido. Debe estar entre 0 y 5. Intente nuevamente: ");
            scanf("%d", &opinionUser[i][j]);
        }
    }
}


/************************************************************************************
********************************  MATRIZ RANDOM  ************************************
************************************************************************************/

for (i = 0; i < MAX_HEROES; i++) {
    for (j = 0; j < MAX_PODERES; j++) {
        matrizRandom[i][j] = rand() % 6;
    }
}



//calculos





// Inicializar sumas
for (i = 0; i < MAX_HEROES; i++) {
    sumaUsuario[i] = 0;
    sumaPublico[i] = 0;
}

// Calcular sumas por fila
for (i = 0; i < MAX_HEROES; i++) {
    for (j = 0; j < MAX_PODERES; j++) {
        sumaUsuario[i] += opinionUser[i][j];
        sumaPublico[i] += matrizRandom[i][j];
    }
}

// Calcular puntos comparando celda por celda
for (i = 0; i < MAX_HEROES; i++) {
    for (j = 0; j < MAX_PODERES; j++) {
        if (opinionUser[i][j] == matrizRandom[i][j]) {
            matrizPuntos[i][j] = 2;
        } else if (sumaUsuario[i] == sumaPublico[i]) {
            matrizPuntos[i][j] = 1;
        } else {
            matrizPuntos[i][j] = 0;
        }

        puntosTotalesUsuario += matrizPuntos[i][j];
    }
}




//LISTADO

// Encabezado
printf("\n************************************************************\n");
printf(" Competición superhéroes ");
i = 0;
while (universo[i] != '\0') {
    printf("%c", universo[i]);
    i++;
}
printf(" – UDE - 2025\n");
printf("************************************************************\n");

printf("\nApuesta de ");
i = 0;
while (nombre[i] != '\0') {
    printf("%c", nombre[i]);
    i++;
}
printf("\n=============================================\n\n");

printf("SUPERHEROE - SUPERPODER – OPINION USUARIO – OPINION PUBLICO - PUNTOS\n\n");

for (i = 0; i < MAX_HEROES; i++) {
    int puntosPorHeroe = 0;

    for (j = 0; j < MAX_PODERES; j++) {

        // Imprimir nombre del superhéroe
        for (int k = 0; nombreHeroes[i][k] != '\0'; k++) {
            printf("%c", nombreHeroes[i][k]);
        }

        printf(" - ");

        // Imprimir nombre del superpoder
        for (int k = 0; descPoderes[j][k] != '\0'; k++) {
            printf("%c", descPoderes[j][k]);
        }

        printf(" - %d - %d - %d\n", opinionUser[i][j], matrizRandom[i][j], matrizPuntos[i][j]);

        puntosPorHeroe += matrizPuntos[i][j];
    }

    printf("Total puntos ");
    for (int k = 0; nombreHeroes[i][k] != '\0'; k++) {
        printf("%c", nombreHeroes[i][k]);
    }

    printf(": %d (usuario), %d (publico), %d (aciertos)\n\n",
           sumaUsuario[i], sumaPublico[i], puntosPorHeroe);
}

printf("TOTAL GENERAL DE PUNTOS OBTENIDOS POR ");
i = 0;
while (nombre[i] != '\0') {
    printf("%c", nombre[i]);
    i++;
}
printf(": %d\n", puntosTotalesUsuario);

/************************************************************************************
**********************  VERIFICACIONES DE LO CARGADO  *******************************
************************************************************************************

//USUARIO
    i = 0;
    printf ("\nEl Jugador ingresado es: ");
    while (nombre[i] != '\0') {
           printf ("%c", nombre[i]);
           i++;
    }

//UNIVERSO
    i = 0;
    printf ("\nEl Universo ingresado es: ");
    while (universo[i] != '\0') {
           printf ("%c", universo[i]);
           i++;
    }


//SUPERHEROE
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

 //SUPER PODERES
    printf("\nSuper Poderes:\n");
    for (i = 0; i < MAX_PODERES; i++) {
        printf("  [%d] ", i);
        j = 0;
        while (descPoderes[i][j] != '\0') {
            printf("%c", descPoderes[i][j]);
            j++;
        }
    printf("\n");
    }
*/
}
