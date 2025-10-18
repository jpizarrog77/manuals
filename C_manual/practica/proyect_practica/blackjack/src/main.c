
#include <stdlib.h>
#include <stdio.h>

#include "blackjack.h"

int main () {
    int opcion;
    void menu();
    scanf("%d",opcion);

    while (option != 0) {
        if (opcion == 1) {
            printf("Jugar Partida \n");
            jugarPartida();
        } else if (opcion == 2) {
            printff("Cargar las partidas \n");
            guardarPartida ();
        } 
        fflush(stdin);
        menu();
        scanf("%d",opcion);
    } 
    printf("BYE BLACKJACK!");
}