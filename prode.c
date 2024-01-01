#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "prode.h"

int pedirCantidadJugadores()
{
    int cJugadores;
    do
    {
        printf("\n Ingrese la cantidad de jugadores que participaran del PRODE: ");
        scanf("%d", &cJugadores);
    }
    while(cJugadores < 0);
    return cJugadores;
}

void cargarNombresEquipos(char* nomEquipos[], int cEquipos)
{
    nomEquipos[0] = "River Plate";
    nomEquipos[1] = "Boca Juniors";
    nomEquipos[2] = "San Lorenzo";
    nomEquipos[3] = "Racing";
    nomEquipos[4] = "Independiente";
    nomEquipos[5] = "Velez";
    nomEquipos[6] = "Lanus";
    nomEquipos[7] = "Banfield";
    nomEquipos[8] = "Rosario Central";
    nomEquipos[9] = "Newell's Old Boys";
    nomEquipos[10] = "Belgrano";
    nomEquipos[11] = "Talleres";
    nomEquipos[12] = "Instituto";
    nomEquipos[13] = "Tigre";
    nomEquipos[14] = "Argentinos Juniors";
    nomEquipos[15] = "Barracas Central";
    nomEquipos[16] = "Platense";
    nomEquipos[17] = "Huracan";
    nomEquipos[18] = "Sarmiento";
    nomEquipos[19] = "Godoy Cruz";
    nomEquipos[20] = "Colon";
    nomEquipos[21] = "Union";
    nomEquipos[22] = "Central Cordoba";
    nomEquipos[23] = "Atletico Tucuman";
    nomEquipos[24] = "Estudiantes";
    nomEquipos[25] = "Gimnasia";
    nomEquipos[26] = "Defensa y Justicia";
    nomEquipos[27] = "Arsenal";
}

int generarAleatorio(int min, int max)
{
    return min + rand () % (max - min + 1);
}

void cargarResultadosOficiales(int reOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO])
{
    for (int i = 0; i < FECHAS; i++)
    {
        for (int j = 0; j < PARTIDOS; j++)
        {
            for (int k = 0; k < EQUIPOS_EN_PARTIDO; k++)
            {
                reOficiales[i][j][k] = generarAleatorio(0, 5); //Guardamos los goles de cada equipo en el partido formando el resultado
            }
        }
    }
}

void mostrarResultadosOficialesPorFecha(int reOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int nFecha, char* nomEquipos[], int cEquipos)
{
    for (int i = 0; i < PARTIDOS; i++)
    {
        decirPartido(nFecha, i, nomEquipos, cEquipos);
        printf("%d - %d\n", reOficiales[nFecha][i][0], reOficiales[nFecha][i][1]);
    }
}

void decirPartido(int fPartido, int nPartido, char* nomEquipos[], int cEquipos)
{
    switch(fPartido)
    {
        case 0:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[14]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[17]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[27]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[4]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[13]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[0]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[9]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[6]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[18]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[10]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[23]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[19]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[21]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[25]);
                }
            }
        }
        break;
        case 1:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[8]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[5]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[15]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[24]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[0]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[3]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[2]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[16]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[22]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[11]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[20]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[12]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[26]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[7]);
                }
            }
        }
        break;
        case 2:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[10]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[18]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[19]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[9]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[23]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[4]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[1]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[25]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[27]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[14]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[17]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[13]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[21]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[6]);
                }
            }
        }
        break;
        case 3:
        {
          switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[12]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[15]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[3]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[8]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[0]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[10]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[24]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[7]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[20]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[16]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[26]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[22]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[2]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[5]);
                }
            }
        }
        break;
        case 4:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[13]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[19]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[21]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[18]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[11]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[1]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[23]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[17]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[27]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[4]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[9]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[25]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[6]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[14]);
                }
            }
        }
        break;
        case 5:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[24]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[8]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[22]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[20]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[0]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[7]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[15]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[12]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[2]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[5]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[14]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[10]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[3]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[26]);
                }
            }
        }
        break;
        case 6:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[4]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[27]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[23]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[25]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[11]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[13]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[6]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[18]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[17]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[19]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[21]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[0]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[9]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[16]);
                }
            }
        }
        break;
        case 7:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[3]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[20]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[26]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[15]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[10]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[24]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[13]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[12]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[0]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[2]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[7]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[8]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[14]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[22]);
                }
            }
        }
        break;
        case 8:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[1]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[17]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[27]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[6]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[9]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[25]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[4]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[19]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[23]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[21]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[11]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[16]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[18]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[5]);
                }
            }
        }
        break;
        case 9:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[15]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[22]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[13]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[10]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[24]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[2]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[12]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[3]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[7]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[8]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[0]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[14]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[20]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[27]);
                }
            }
        }
        break;
        case 10:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[17]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[11]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[19]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[21]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[5]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[9]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[18]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[16]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[6]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[25]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[23]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[1]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[4]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[26]);
                }
            }
        }
        break;
        case 11:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[22]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[27]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[15]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[3]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[20]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[2]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[13]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[6]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[14]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[0]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[8]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[12]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[10]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[24]);
                }
            }
        }
        break;
        case 12:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[5]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[23]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[16]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[26]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[9]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[21]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[7]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[4]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[18]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[11]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[19]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[1]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[25]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[17]);
                }
            }
        }
        break;
        case 13:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[6]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[0]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[20]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[19]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[15]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[14]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[24]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[8]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[2]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[22]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[13]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[27]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[10]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[3]);
                }
            }
        }
        break;
        case 14:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[12]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[1]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[7]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[25]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[11]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[18]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[9]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[16]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[21]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[17]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[23]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[26]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[5]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[4]);
                }
            }
        }
        break;
        case 15:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[2]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[27]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[22]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[24]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[3]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[6]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[19]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[14]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[20]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[8]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[18]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[0]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[13]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[10]);
                }
            }
        }
        break;
        case 16:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[17]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[12]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[26]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[4]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[16]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[7]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[21]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[9]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[11]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[5]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[15]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[1]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[23]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[25]);
                }
            }
        }
        break;
        case 17:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[0]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[24]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[13]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[19]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[27]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[2]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[22]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[3]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[10]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[18]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[14]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[21]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[6]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[8]);
                }
            }
        }
        break;
        case 18:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[5]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[12]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[25]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[23]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[7]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[9]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[26]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[11]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[4]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[15]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[17]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[16]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[0]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[20]);
                }
            }
        }
        break;
        case 19:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[3]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[14]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[13]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[8]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[17]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[21]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[24]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[22]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[10]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[18]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[27]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[19]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[0]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[6]);
                }
            }
        }
        break;
        case 20:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[0]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[16]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[7]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[4]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[15]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[23]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[12]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[9]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[20]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[2]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[25]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[26]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[11]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[5]);
                }
            }
        }
        break;
        case 21:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[8]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[3]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[6]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[18]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[21]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[0]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[25]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[27]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[10]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[14]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[17]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[13]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[22]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[19]);
                }
            }
        }
        break;
        case 22:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[11]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[16]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[2]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[4]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[24]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[1]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[12]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[23]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[7]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[5]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[15]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[26]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[9]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[20]);
                }
            }
        }
        break;
        case 23:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[17]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[21]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[18]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[22]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[3]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[27]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[19]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[0]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[9]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[10]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[6]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[25]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[13]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[14]);
                }
            }
        }
        break;
        case 24:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[8]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[16]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[1]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[5]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[20]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[11]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[7]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[24]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[15]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[26]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[2]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[12]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[23]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[4]);
                }
            }
        }
        break;
        case 25:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[1], nomEquipos[9]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[20], nomEquipos[13]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[5], nomEquipos[21]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[8], nomEquipos[0]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[23], nomEquipos[4]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[3], nomEquipos[22]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[12], nomEquipos[6]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[11], nomEquipos[25]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[26], nomEquipos[18]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[15], nomEquipos[27]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[2], nomEquipos[14]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[7], nomEquipos[19]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[24], nomEquipos[10]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[16], nomEquipos[17]);
                }
            }
        }
        break;
        case 26:
        {
            switch(nPartido)
            {
                case 0:
                {
                    printf("\n %s vs %s: ", nomEquipos[14], nomEquipos[24]);
                }
                break;
                case 1:
                {
                    printf("\n %s vs %s: ", nomEquipos[13], nomEquipos[2]);
                }
                break;
                case 2:
                {
                    printf("\n %s vs %s: ", nomEquipos[6], nomEquipos[15]);
                }
                break;
                case 3:
                {
                    printf("\n %s vs %s: ", nomEquipos[9], nomEquipos[11]);
                }
                break;
                case 4:
                {
                    printf("\n %s vs %s: ", nomEquipos[17], nomEquipos[5]);
                }
                break;
                case 5:
                {
                    printf("\n %s vs %s: ", nomEquipos[10], nomEquipos[8]);
                }
                break;
                case 6:
                {
                    printf("\n %s vs %s: ", nomEquipos[22], nomEquipos[23]);
                }
                break;
                case 7:
                {
                    printf("\n %s vs %s: ", nomEquipos[21], nomEquipos[26]);
                }
                break;
                case 8:
                {
                    printf("\n %s vs %s: ", nomEquipos[27], nomEquipos[20]);
                }
                break;
                case 9:
                {
                    printf("\n %s vs %s: ", nomEquipos[0], nomEquipos[3]);
                }
                break;
                case 10:
                {
                    printf("\n %s vs %s: ", nomEquipos[4], nomEquipos[1]);
                }
                break;
                case 11:
                {
                    printf("\n %s vs %s: ", nomEquipos[19], nomEquipos[12]);
                }
                break;
                case 12:
                {
                    printf("\n %s vs %s: ", nomEquipos[25], nomEquipos[16]);
                }
                break;
                case 13:
                {
                    printf("\n %s vs %s: ", nomEquipos[18], nomEquipos[7]);
                }
            }
        }
    }
}

void cargarPronosticos(int pro[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cJugadores, char* nomEquipos[], int cEquipos)
{
    int golesLocal;
    int golesVisitante;
    for (int i = 0; i < cJugadores; i++)
    {
        printf("\n ---------- Pronosticos Jugador %d ----------\n", i + 1);
        for (int j = 0; j < FECHAS; j++)
        {
            printf("\n ***************** Fecha %d *****************\n", j + 1);
            for (int k = 0; k < PARTIDOS; k++)
            {
                decirPartido(j, k, nomEquipos, cEquipos); //Mostramos los equipos del partido
                printf("\n");
                do
                {
                    printf(" Goles del local: ");
                    scanf("%d", &golesLocal);
                }
                while(golesLocal < 0);
                do
                {
                    printf(" Goles del visitante: ");
                    scanf("%d", &golesVisitante);
                }
                while(golesVisitante < 0);
                pro[i][j][k][0] = golesLocal; //Guardamos los goles del local ingresados por un jugador
                pro[i][j][k][1] = golesVisitante; //Guardamos los goles del visitante ingresados por un jugador
            }
        }
    }
}

void mostrarPronosticosPorFecha(int pro[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cJugadores, int nFecha, char* nomEquipos[], int cEquipos)
{
    for (int i = 0; i < cJugadores; i++)
    {
        printf("\n ----------- Pronosticos jugador %d ----------\n", i + 1);
        for (int j = 0; j < PARTIDOS; j++)
        {
            decirPartido(nFecha, j, nomEquipos, cEquipos); //Muestra por pantalla los equipos del partido
            printf("%d - %d\n", pro[i][nFecha][j][0], pro[i][nFecha][j][1]); //Mostramos al lado de los equipos el resultado de cada jugador
        }
    }
}

int devolverResultado(int gLocal, int gVisitante)
{
    if (gLocal > gVisitante)
    {
        return 1; //Devuelve 1 si ganó el local
    }
    else if (gVisitante > gLocal)
    {
        return 2; //Devuelve 2 si ganó el local
    }
    else
    {
        return 0; //Devuelve 0 si hay empate
    }
}

int contarPuntosObtenidosPorFecha(int reOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int pro[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int nJugador, int nFecha)
{
    int acumulador = 0; //Acumula los puntos obtenidos
    int golesLocalOficial;
    int golesVisitanteOficial;
    int golesLocalPronostico;
    int golesVisitantePronostico;
    int diferenciaDeGolesOficial;
    int diferenciaDeGolesPronostico;
    int resultadoOficial;
    int resultadoPronostico;
    for (int j = 0; j < PARTIDOS; j++)
    {
        golesLocalOficial = reOficiales[nFecha][j][0];
        golesVisitanteOficial = reOficiales[nFecha][j][1];
        golesLocalPronostico = pro[nJugador][nFecha][j][0];
        golesVisitantePronostico = pro[nJugador][nFecha][j][1];
        if ((golesLocalOficial == golesLocalPronostico) && (golesVisitanteOficial == golesVisitantePronostico)) //El resultado es exactamente igual
        {
            acumulador+= 90;
        }
        else //Como no es exactamente igual analizamos parte por parte
        {
            if(golesLocalOficial == golesLocalPronostico) //La cantidad de goles del equipo local es igual
            {
                acumulador+= 15;
            }
            if(golesVisitanteOficial == golesVisitantePronostico) //La cantidad de goles del equipo visitante es igual
            {
                acumulador+= 15;
            }
            diferenciaDeGolesOficial = abs((golesLocalOficial - golesVisitanteOficial));
            diferenciaDeGolesPronostico = abs((golesLocalPronostico - golesVisitantePronostico));
            if (diferenciaDeGolesOficial == diferenciaDeGolesPronostico) //Ambas diferencias de goles son iguales
            {
                acumulador+= 15;
            }
            resultadoOficial = devolverResultado(golesLocalOficial, golesVisitanteOficial);
            resultadoPronostico = devolverResultado(golesLocalPronostico, golesVisitantePronostico);
            if (resultadoOficial == resultadoPronostico) //Coincidencia en quién ganó o si hubo empate
            {
                acumulador+= 45;
            }
        }
    }
    return acumulador;
}

void inicializarTablaPosiciones(int ta[][DATOS_JUGADOR], int cJugadores)
{
    for (int i = 0; i < cJugadores; i++)
    {
        ta[i][0] = i + 1; //Numero de jugador
        ta[i][1] = 0; //Puntos obtenidos
    }
}

void cargarTablaPosicionesPorJugador(int reOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int pro[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cJugadores, int ta[][DATOS_JUGADOR], int nJugador, int nFecha)
{
    for (int i = 0; i < cJugadores; i++) //Recorro todos los jugadores
    {
        if (ta[i][0] == nJugador + 1) //Busco quién tiene el número de jugador que llega, y a ese le sumo sus puntos en la fecha
        {
            ta[i][1] += contarPuntosObtenidosPorFecha(reOficiales, pro, nJugador, nFecha); //Guardamos los puntos obtenidos por ese jugador
        }
    }
}

void cargarTablaPosiciones(int reOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], int pro[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cJugadores, int ta[][DATOS_JUGADOR], int nFecha)
{
    for (int i = 0; i < cJugadores; i++) //Repito el proceso para todos los jugadores
    {
        cargarTablaPosicionesPorJugador(reOficiales, pro, cJugadores, ta, i, nFecha);
    }
}

void ordenarTablaPosiciones(int ta[][DATOS_JUGADOR], int cJugadores)
{
    int auxNumeroJugador;
    int auxPuntos;
    for (int i = 0; i < cJugadores; i++)
    {
        for (int j = 0; j < cJugadores - 1; j++)
        {
            if (ta[j + 1][1] > ta[j][1])
            {
                auxNumeroJugador = ta[j + 1][0];
                ta[j + 1][0] = ta[j][0];
                ta[j][0] = auxNumeroJugador;
                auxPuntos = ta[j + 1][1];
                ta[j + 1][1] = ta[j][1];
                ta[j][1] = auxPuntos;
            }
        }
    }
}

void mostrarTablaPosiciones(int ta[][DATOS_JUGADOR], int cJugadores, int nFecha)
{
    printf("\n ----------- Tabla de posiciones ------------\n");
    for (int i = 0; i < cJugadores; i++)
    {
        printf(" %d- Jugador %d - %d punto/s\n", i + 1, ta[i][0], ta[i][1]); //Posición en tabla - Número jugador - Puntos
    }
}

void mostrarInformacionPorFecha(int reOficiales[][PARTIDOS][EQUIPOS_EN_PARTIDO], char* nomEquipos[], int cEquipos, int pro[][FECHAS][PARTIDOS][EQUIPOS_EN_PARTIDO], int cJugadores, int ta[][DATOS_JUGADOR])
{
    for (int i = 0; i < FECHAS; i++)
    {
        printf("\n ****************** Fecha %d *****************\n", i + 1);
        printf("\n ----------- Resultados oficiales -----------\n");
        mostrarResultadosOficialesPorFecha(reOficiales, i, nomEquipos, cEquipos);
        mostrarPronosticosPorFecha(pro, cJugadores, i, nomEquipos, cEquipos);
        cargarTablaPosiciones(reOficiales, pro, cJugadores, ta, i);
        ordenarTablaPosiciones(ta, cJugadores);
        mostrarTablaPosiciones(ta, cJugadores, i);
        system("pause");
    }
}
