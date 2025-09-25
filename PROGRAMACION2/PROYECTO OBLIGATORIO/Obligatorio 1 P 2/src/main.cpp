#include <stdio.h>
#include "menu.h"
#include "Torneo.h"


int main() {
    Torneo t;
    t.tope = 0;
    int opcion;
    do {
        MenuPrincipal(opcion);

        switch (opcion) {
        case 1: { /* ALTAS Y BAJAS */
            int opAB;
            do {
                MenuAltasBajas(opAB);
                switch (opAB) {
                case 1: { /* Inscripcion de jugador */
                    jugador j;
                     cargarJugador(j);
                     agregarJugador(t, j);
                } break;
                case 2: { /* Baja por CI */
                    long int ci;
                    printf("CI a dar de baja: ");
                    scanf("%ld", &ci);
                    elimJugCed(t,ci);

                } break;
                case 3: { /* Registrar partida ganada (profesional) */
                    long int ci;
                    printf("CI del profesional: ");
                    scanf("%ld", &ci);
                    incrementarPartProfesional(t,ci);

                } break;
                }
            } while (opAB != 0);
        } break;

        case 2: { /* CONSULTAS */
            int opC;
            do {
                MenuConsultas(opC);
                switch (opC) {
                case 1: {
                    int am, in, pr;
                    devolverCantJugadoresPorTipo(t,am,in,pr);
                    printf("Amateur: %d  Intermedio: %d  Profesional: %d\n", am, in, pr);
                } break;
                case 2: {
                    Fecha f;
                    cargarFecha(f);
                    int cant;
                    cantJugadoresNacidosFecha(t, f, cant);
                    printf("Nacidos en esa fecha: %d\n", cant);
                } break;
                case 3: {
                    int solo, pareja;
                    jugInterSolosYParejas(t, solo, pareja);
                    printf("Intermedios solos: %d, en pareja: %d\n", solo, pareja);
                } break;
                case 4: {
                    int meses,cantidad;
                    printf("Ingrese X (meses): ");
                    scanf("%d", &meses);
                    cantMesesJugAmat(t, meses,cantidad);
                    if (cantidad>0)
                        printf("SI hay %d jugadores ",cantidad);
                    else
                        printf("NO hay.\n");
                } break;
                case 5: {
                    int cantidad;
                    printf("Ingrese cantidad (partidas ganadas): ");
                    scanf("%d", &cantidad);
                    if (profesionalMasPartidas(t, cantidad))
                        printf("SI hay.\n");
                    else
                        printf("NO hay.\n");
                } break;
                }
            } while (opC != 0);
        } break;

        case 3: { /* LISTADOS */
            int opL;
            do {
                MenuListados(opL);
                switch (opL) {
                case 1:
                    listarJugadoresXordenInscripcion(t);
                    break;
                case 2: {
                    Fecha f;
                    cargarFecha(f);
                    listarJugadoresLuegoDeFecha(t, f);
                } break;
                case 3: {
                    String club;
                    printf("Nombre del club: ");
                    scan(club);
                    listarJugadoresDeClub(t, club);
                } break;
                case 4: {
                    long int ci; int existe;
                    printf("CI: ");
                    scanf("%ld", &ci);
                    listarJugadorPorCedula(t, ci);
                } break;
                case 5:
                    listarJugadorMasPartidas(t);
                    break;
                }
            } while (opL != 0);
        } break;
        }
    } while (opcion != 0);

    printf("Fin del programa.\n");
    return 0;
}
