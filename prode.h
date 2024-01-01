#ifndef PRODE_H_INCLUDED
#define PRODE_H_INCLUDED
#define FECHAS 27
#define PARTIDOS 14
#define EQUIPOS_EN_PARTIDO 2
#define DATOS_JUGADOR 2


///Cargar
int pedirCantidadJugadores();
void cargarNombresEquipos(char* nombresEquipos[], int cantidadEquipos);
int generarAleatorio(int minimo, int maximo);
void cargarResultadosOficiales(int resultadosOFiciales[][PARTIDOS][EQUIPOS_EN_PARTIDO]);
///PRE: el usuario debe ingresar enteros positivos cuando se le pida
///POST: genera el pronóstico de cada partido para cada jugador
void cargarPronosticos(int pronosticos[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cantidadJugadores, char* nombresEquipos[], int cantidadEquipos);
void inicializarTablaPosiciones(int tabla[][DATOS_JUGADOR], int cantidadJugadores);
void cargarTablaPosicionesPorJugador(int resultadosOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int pronosticos[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cantidadJugadores, int tabla[][DATOS_JUGADOR], int numeroJugador, int numeroFecha);
void cargarTablaPosiciones(int resultadosOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int pronosticos[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cantidadJugadores, int tabla[][DATOS_JUGADOR], int numeroFecha);

///Ordenar
void ordenarTablaPosiciones(int tabla[][DATOS_JUGADOR], int cantidadJugadores);

///Resultados
///PRE: ninguna
///POST: devuelve un entero mayor a 0
void mostrarResultadosOficialesPorFecha(int resultadosOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int numeroFecha, char* nombresEquipos[], int cantidadEquipos);
void decirPartido(int fechaPartido, int numeroPartido, char* nombreEquipos[], int cantidadEquipos);
void mostrarPronosticosPorFecha(int pronosticos[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cantidadJugadores, int numeroFecha, char* nombresEquipos[], int cantidadEquipos);
int devolverResultado(int golesLocal, int golesVisitante);
int contarPuntosObtenidosPorFecha(int resultadosOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int pronosticos[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int numeroJugador, int numeroFecha);
void mostrarTablaPosiciones(int tabla[][DATOS_JUGADOR], int cantidadJugadores, int numeroFecha);
void mostrarInformacionPorFecha(int resultadosOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], char* nombresEquipos[], int cantidadEquipos, int pronosticos[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cantidadJugadores, int tabla[][DATOS_JUGADOR]);

#endif // PRODE_H_INCLUDED
