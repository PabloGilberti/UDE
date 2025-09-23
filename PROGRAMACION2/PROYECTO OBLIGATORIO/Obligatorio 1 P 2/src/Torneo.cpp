#include "Torneo.h"

int buscarPorCedula(Torneo t, long int cedula) {


    for (int i = 0; i < t.tope; i++) {
        if (t.inscripcion[i].cedula == cedula) {
            return i;
        }
    }
    return -1;
}

booleano estaVacia(Torneo t) {

    booleano vacia=FALSE;

    if (t.tope == 0)
        vacia = TRUE;

    return vacia;
}

booleano estaLlena(Torneo t) {
    booleano lleno=FALSE;

    if (t.tope == MAXINSC)
        lleno=TRUE;

    return lleno;
}

booleano existeJugador(Torneo t, long int cedula) {
    booleano inscripto=FALSE;
    for (int i = 0; i < t.tope; i++) {
        if (t.inscripcion[i].cedula == cedula) {
            inscripto=TRUE;
        }
    }
    return inscripto;
}

void agregarJugador(Torneo &t, jugador j) {
    if (estaLlena(t)) {
        printf("No se puede inscribir: torneo lleno (MAX=%d)\n", MAXINSC);
        return;
    }
    if (existeJugador(t, j.cedula)) {
        printf("No se puede inscribir: El jugador  %ld ya existe\n", j.cedula);
        return;
    }
    t.inscripcion[t.tope] = j;   // copia el jugador
    t.tope = t.tope + 1;
}

void elimJugCed(Torneo &t, long int cedula) {
   int indice = buscarPorCedula(t, cedula);
    if (indice == -1) {
        printf("No existe jugador con CI %ld\n", cedula);
        return;
    }
    // Reordenar manteniendo el orden de inscriopcion
    int i;
    for (i = indice; i < t.tope - 1; i++) {
        t.inscripcion[i] = t.inscripcion[i + 1];
    }
    t.tope = t.tope - 1;
}

void incrementarPartProfesional(Torneo &t, long int cedula) {
    int indice = buscarPorCedula(t, cedula);

    if (indice == -1) {
        printf("No existe jugador con CI %ld\n", cedula);
    }else{
       sumarPartidaGanada(t.inscripcion[indice].uTipoJugador.jugProfesional);
    }

}
void devolverCantJugadoresPorTipo(Torneo t, int &amateur, int &intermedio, int &profesional) {

    amateur = 0;
    intermedio = 0;
    profesional = 0;

    for (int i = 0; i < t.tope; i++) {
        if (t.inscripcion[i].discriminante == AMATEUR) {
            amateur = amateur + 1;
        } else if (t.inscripcion[i].discriminante == INTERMEDIO) {
            intermedio = intermedio + 1;
        } else if (t.inscripcion[i].discriminante == PROFESIONAL) {
            profesional = profesional + 1;
        }
    }
}
void cantJugadoresNacidosFecha(Torneo t, Fecha f, int &cantJug) {

    int c = 0;
    for (int i = 0; i < t.tope; i++) {
        if (compararFechas(t.inscripcion[i].nacimiento, f) == 0) {
            c = c + 1;
        }
    }
    cantJug = c;
}
void jugInterSolosYParejas(Torneo t, int &solo, int &pareja) {

    solo = 0;
    pareja = 0;

    for (int i = 0; i < t.tope; i++) {
        if (t.inscripcion[i].discriminante == INTERMEDIO) {
            if (t.inscripcion[i].uTipoJugador.jugIntermedio.enPareja) {
                pareja = pareja + 1;
            } else {
                solo = solo + 1;
            }
        }
    }
}

void cantMesesJugAmat(Torneo t, int meses,int &cantJugadores) {
    int i;
    cantJugadores=0;
    for (i = 0; i < t.tope; i++) {
        if (t.inscripcion[i].discriminante == AMATEUR) {
            if (t.inscripcion[i].uTipoJugador.meses_jugando > meses) {
                cantJugadores++;
            }
        }
    }
}

booleano profesionalMasPartidas(Torneo t, int cantPartidas) {

    for (int i = 0; i < t.tope; i++) {
        if (t.inscripcion[i].discriminante == PROFESIONAL) {
            if (t.inscripcion[i].uTipoJugador.jugProfesional.cantPartGanadas > cantPartidas) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

//LISTADOS
void listarJugadoresXordenInscripcion(Torneo t) {

    printf("CI           Nombre        Apellido      Fecha Nac.   Tipo\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < t.tope; i++) {
        jugador j = t.inscripcion[i];
        printf("%-12ld", j.cedula);
        print(j.nombre);
        print(j.apellido);
        mostrarFecha(j.nacimiento);
        printf("  ");
        if (j.discriminante == AMATEUR) {
            printf("AMATEUR");
        } else if (j.discriminante == INTERMEDIO) {
            printf("INTERMEDIO");
        } else {
            printf("PROFESIONAL");
        }
        printf("\n");
    }
}

void listarJugadoresDespuesDeFecha(Torneo t, Fecha f) {

    printf("Jugadores nacidos luego de "); mostrarFecha(f); printf(":\n");
    for (int i = 0; i < t.tope; i++) {
        jugador j = t.inscripcion[i];
        if (compararFechas(j.nacimiento, f) > 0) {
            printf("%-12ld", j.cedula);
            print(j.nombre);
            print(j.apellido);
            mostrarFecha(j.nacimiento);
            printf("\n");
        }
    }
}

void listarJugadoresDeUnClub(Torneo t, String club) {

    printf("Profesionales del club '%s':\n", club);
    for (int i = 0; i < t.tope; i++) {
        jugador j = t.inscripcion[i];
             if (j.uTipoJugador.jugProfesional.nombreClub == club) {
                printf("%-12ld", j.cedula);
                print(j.nombre);
                print(j.apellido);
                mostrarFecha(j.nacimiento);
                printf("\n");
            }

    }
}

void listarJugadorPorCedula(Torneo t, long int cedula) {
    int indice = buscarPorCedula(t, cedula);
    if (indice == -1) {
        printf("No existe jugador con CI %ld\n", cedula);
        return;
    }

     jugador j = t.inscripcion[indice];
     printf("%-12ld", j.cedula);
     print(j.nombre);
     print(j.apellido);
     mostrarFecha(j.nacimiento);
     printf("\n");

    if (j.discriminante == AMATEUR) {
        printf("  Tipo: AMATEUR\n");
        printf("  Meses jugando: %d\n", j.uTipoJugador.meses_jugando);
    } else if (j.discriminante == INTERMEDIO) {
        printf("  Tipo: INTERMEDIO\n");
        printf("  Anios de experiencia: %d\n", j.uTipoJugador.jugIntermedio.cantAnios);
        if (j.uTipoJugador.jugIntermedio.enPareja) printf("  Modalidad: Pareja\n");
        else printf("  Modalidad: Solo\n");
    } else {
        printf("  Tipo: PROFESIONAL\n");
        printf("  Club: %s\n", j.uTipoJugador.jugProfesional.nombreClub);
        printf("  Partidas ganadas: %d\n", j.uTipoJugador.jugProfesional.cantPartGanadas);
    }
}


void listarJugadorMasPartidas(Torneo t) {

    int mejorIdx = -1;
    int mejor = -1;

    for (int i = 0; i < t.tope; i++) {
        if (t.inscripcion[i].discriminante == PROFESIONAL) {
            if (t.inscripcion[i].uTipoJugador.jugProfesional.cantPartGanadas > mejor) {
                mejor = t.inscripcion[i].uTipoJugador.jugProfesional.cantPartGanadas;
                mejorIdx = i;
            }
        }
    }

    if (mejorIdx == -1) {
        printf("No hay profesionales inscriptos.\n");
        return;
    }else{
        listarJugadorPorCedula(t,t.inscripcion[mejorIdx].cedula);
    }



}
