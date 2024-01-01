#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "prode.h"

int main()
{
    srand(time(0));
    int cantJugadores = pedirCantidadJugadores();
    int cantEquipos = 28;
    char* nombrEquipos[cantEquipos];
    cargarNombresEquipos(nombrEquipos, cantEquipos);
    int resulOficiales[FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO];
    cargarResultadosOficiales(resulOficiales);
    int pronos[cantJugadores][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO];
    cargarPronosticos(pronos, cantJugadores, nombrEquipos, cantEquipos);
    int tab[cantJugadores][DATOS_JUGADOR];
    inicializarTablaPosiciones(tab, cantJugadores);
    mostrarInformacionPorFecha(resulOficiales, nombrEquipos, cantEquipos, pronos, cantJugadores, tab);
    return 0;
}

