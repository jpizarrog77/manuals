#ifndef BLACKJACK_H
#define BLACKJACK_H

// definimos una constante para almacenar el tamaño máximo que puede tener una constante
#define MAX 100
// definimos una constante para almacenar el numero maximo de jugadores
#define MAX_JUGADORES 4
// struct que permite almacenar los datos de un jugador
struct jugador {
    char nombre[MAX];
    int puntos;
};
// array de tip struct jugador que permite almacenar todos los jugadores que hay
struct jugador jugadores[]

// header de la funcion que contiene el menu del juego
void menu();
// header funcion para iniciar una nueva partida
void jugarPartida ();

// para cargar las partidas hace falta un fichero

#endif