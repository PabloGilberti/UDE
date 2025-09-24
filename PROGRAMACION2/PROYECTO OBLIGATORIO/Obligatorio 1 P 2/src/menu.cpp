#include "menu.h"
#include <cstdlib>


void MenuPrincipal(int &opcion) {
    system("CLS");
    printf("\n=== MENU PRINCIPAL ===\n");
    printf("1- Altas y bajas\n");
    printf("2- Consultas\n");
    printf("3- Listados\n");
    printf("0- Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    system("CLS");
}

void MenuAltasBajas(int &opcion) {
    system("CLS");
    printf("\n--- ALTAS Y BAJAS ---\n");
    printf("1- Inscripcion de jugador\n");
    printf("2- Salida de jugador (por CI)\n");
    printf("3- Registrar partida GANADA (profesional)\n");
    printf("0- Volver\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    system("CLS");
}

void MenuConsultas(int &opcion) {

    printf("\n--- CONSULTAS ---\n");
    printf("1- Total de jugadores de cada tipo inscriptos\n");
    printf("2- Total de jugadores nacidos en una fecha especificas\n");
    printf("3- Total de jugadores intermedios que juegan solos y en parejas\n");
    printf("4- Saber si algun jugador amateur lleva jugando más de una cantidad dada de meses\n");
    printf("5- Saber si algun jugador profesional lleva ganadas más de cierta cantidad de partidas\n");
    printf("0- Volver\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    system("CLS");
}


void MenuListados(int &opcion) {

    printf("\n--- LISTADOS ---\n");
    printf("1- Listado básico de jugadores ingresados\n");
    printf("2- Listado básico de jugadores nacidos luego de una fecha determinada\n");
    printf("3- Listado básico de jugadores profesionales provenientes de un club determinado\n");
    printf("4- Listado detallado de un jugador, dada su cédula\n");
    printf("5- Listado detallado del jugador profesional con mayor cantidad de partidas ganadas\n");
    printf("0- Volver\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    system("CLS");

}
