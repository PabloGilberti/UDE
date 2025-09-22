#include"TipoJugador.h"
// Carga un tipo de jugador desde teclado
void cargarTipoJugador(TipoJugador &t) {
    int opcion;
    printf("Seleccione el tipo de jugador:\n");
    printf("0 - Amateur\n");
    printf("1 - Intermedio\n");
    printf("2 - Profesional\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    while (opcion < 0 || opcion > 2) {
        printf("Opcion invalida. Intente nuevamente: ");
        scanf("%d", &opcion);
    }

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
