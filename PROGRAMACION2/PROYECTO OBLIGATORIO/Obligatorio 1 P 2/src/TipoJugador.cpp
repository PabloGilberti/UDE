#include"TipoJugador.h"
// Carga un tipo de jugador desde teclado
void cargarTipoJugador(TipoJugador &t) {
int opcion;
    do {

        printf("Seleccione el tipo de jugador:\n");
        printf("0 - Amateur\n");
        printf("1 - Intermedio\n");
        printf("2 - Profesional\n");
        printf("Opcion: ");
        scanf(" %d", &opcion);
        switch (opcion){
            case 0:{
                        t=AMATEUR;
                }break;
            case 1:{
                        t=INTERMEDIO;
                }break;
            case 2:{
                        t=PROFESIONAL;
                }break;
            default:
                printf("Opcion invalida. Intente nuevamente: \n");
                break;
         }
    }while (opcion < 0 || opcion > 3);
}
// Muestra el tipo de jugador
void darTipoJugador(TipoJugador t) {
    switch(t) {
        case AMATEUR:
            printf("Amateur\n");
            break;
        case INTERMEDIO:
            printf("Intermedio\n");
            break;
        case PROFESIONAL:
            printf("Profesional\n");
            break;
        default:
            printf("Tipo desconocido\n");
    }
}
