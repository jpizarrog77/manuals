#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "blackjacj.h"

// HAY QUE MOSTRAR LOS HEADERS DE LAS FUNCIONES PRIMERO
void menu();
int generarCarta();
int puntosCarta(const char* carta);
int menuSecundario ();
void mostrarGanador (int n_jugadores);
void jugarPartida ();
void guardarPartida (int n_jugadores)

//////////////////////////////////////
// IMPLEMENTACION DE LAS FUNCIONES //
////////////////////////////////////

// para poder generar una carta hay que hacer 2 arrays
// array 1 --> tipos de cartas
// de tipo puntero a cadena
const char *tipo_carta[] = ("trebol", "corazones", "diamante", "pica");
// array 2 --> el numero de las cartas
// de tipo puntero a cadena
const char *num_carta[] = ("2","3","4","5","6","7","8","9","10","J","Q","K","A",)

// // FUNCIONES LOCALES PARA JUGAR PARTIDA // //

// funcion para el menu
 void menu() {
        printf("============================= \n");
        printf("|| BIENVENIDO AL BLACKJACK || \n");
        printf("============================= \n");
        printf("[1] Juego Nuevo \n");
        printf("[2] Cargar partidas \n");
        printf("[0] Salir \n");
        printf("============================= \n");
        printf("Ingrese la opcion deseada (digitar el numero correspondiente) \n");
    }

// funcion para generar una carta --> funciona localmente dentro de jugarPartida
int generarCarta () {
    // hay q obtener dos aleatorios
    // uno entre 0 y 3 -- palo
    // uno entre 0 y 12 -- numero
    // funcion RAND para obtener numeros aleatorios en C
    int n_tipo_carta = rand() % 4; // siempre es 1 mas de lo q necesito en el resto
    int n_num_carta = rand() % 13;
    // mostrar la carta en pantalla
    printf("--------------------------------------- \n");
    printf("%s\n\n", num_carta(n_num_carta));
    printf("\t %s\n\n", tipo_carta(n_tipo_carta));
    printf("\t\t %s\n\n", num_carta(n_num_carta));
    printf("--------------------------------------- \n");
    // se hace llamada a funcion puntosCarta para saber puntos del jugador
    char *carta = n_num_carta;
    int valor = puntosCarta(carta);

    return valor;
}

// funcion que muestra los puntos de las cartas
    // devuelve un entero con el valor de la carta
    // como parametro se pasa un puntero de una carta -- contiene el numero de la carta

int puntosCarta (char* carta) {
    // variable para inicializar el valor de la carta
    int valor = 0;
    if (strcmp(carta,"2") == 0) {
        valor = 2;
    } else if (strcmp(carta,"3") == 0) {
        valor = 3;
    } else if (strcmp(carta,"4") == 0) {
        valor = 4;
    } else if (strcmp(carta,"5") == 0) {
        valor = 5;
    } else if (strcmp(carta,"6") == 0) {
        valor = 6;
    } else if (strcmp(carta,"7") == 0) {
        valor = 7;
    } else if (strcmp(carta,"8") == 0) {
        valor = 8;
    } else if (strcmp(carta,"9") == 0) {
        valor = 9;
    } else if (strcmp(carta,"10") == 0) {
        valor = 10;
    } else if (strcmp(carta,"J") == 0) {
        valor = 10;
    } else if (strcmp(carta,"Q") == 0) {
        valor = 10;
    } else if (strcmp(carta,"K") == 0) {
        valor = 10;
    } else if (strcmp(carta,"A") == 0) {
        valor = 11;
    }
    return valor;
}

// funcion para menu secundario de querer mas cartas
int menuSecundario () {
    printf("Seleccione una opcion digitando el numero \n");
    printf("[1] Dame carta \n");
    printf("[2] Me planto \n");
}

// funcion que muestra al jugador ganador
void mostrarGanador (int n_jugadores) {
    // variable que almacena puntuacion maxima del jugador que ha ganado
    int punt_max = 0;
    // variable que almacena el indice donde se encuentra el jugador que ha hecho mas puntos
    int index_max;
    // se recorre el array para ver cual es el jugador que mas puntos ha hecho
    for (int i = 0; i < n_jugadores; i++) {
        if (jugadores[i].puntos > punt_max) {
            index_max = i;
            punt_max = jugadores[i].puntos;
        }
    }
    // Los mostramos por pantalla
    printf("El gandor es: %s, con una puntuacion de: %d", jugadores[index_max].nombre, jugadores[index_max].puntos);
    printf("******************************************************************************************************* \n\n");
}

// // FUNCION PRINCIPAL PARA JUGAR PARTIDA // //

void jugarPartida () {

    //PARTE 1: n jugadores
    // variable que almacena el numero de jugadores
    int n_jugadores; 
    // se limpia buffer
    fflush(stdin);
    // se pide al usuario que introduzca el numero de jugadores
    printf("Digite la cantidad de jugadores que participaran en la partida (2-4) \n");
    scanf("%d", &n_jugadores);

    // comprobamos que ese numero de jugadores es válido
    while (n_jugadores <= 1 || n_jugadores > 4) {
        fflush(stdin);
        printf("Ingrese un numero de jugadores valido (2-4) \n");
        scanf("%d", &n_jugadores);
    }

    //PARTE 2: nombre jugadores
    // se pide al usuario los datos de los jugadores
    // para almacenar los datos se usa el struct jugador antes creado y el array de tipo jugador
    for (int i = 0; i < n_jugadores; i++) {
        // para cada iteracion del bucle se crea un struct de tipo jugador llamado j
        struct jugador j;
        // se limpia el buffer
        fflush(stdin);
        // se pide al usuario el nombre del jugador
        printf("Introduce el nombre del jugador: %d \n", i);
        gets(j.nombre);
        // se guarda el struct en el array de jugadores
        jugadores[i-1] = j;
    }

    //PARTE 3: cartas jugadores
    // llamada a funcion generar carta en un bucle para q de cartas a cada jugador
    for (int i = 0; i < n_jugadores; i++) {
        printf("Turno de: %s", jugadores[i].nombre);
        // variable para guardar puntuacion de cada jugador
        int puntuacion = 0;
        // hay q dar 2 cartas a la funcion, pues se llama dos veces a esa funcion
        puntuacion = puntuacion + generarCarta();
        puntuacion = puntuacion + generarCarta();
        // se muestran los puntos que ahora mismo tiene el jugador
        printf("Puntos totales: %d \n", puntuacion);
        // se muestra un submenu para que usuario decida si quiere mas cartas
        int opcion;
        fflush(stdin);
        menuSecundario ();
        scanf("%d", &opcion);
        // bucle siempre q opcion usuario sea otra carta
        while (opcion != 2 && puntuacion != 0) {
            if (opcion == 1) {
                puntuacion = puntuacion + generarCarta();
                if (puntuacion > 21) {
                    puntuacion = 0;
                    printf ("TE HAS PASADO")
                }
                printf("Puntos totales %d \n", puntuacion);
            }
            if (puntuacion != 0 ) {
                fflush(stdin);
                menuSecundario ();
                scanf("%d", &opcion);
            }
        }
        // guardamos puntuacion del usuario
        jugadores[i].puntos = puntuacion;
    }

    //PARTE 4: se muestra al ganador
    mostrarGanador(n_jugadores);
    guardarPartida (int n_jugadores);
}


// funcion para añadir datos de los jugadores al archivo
void guardarPartida (int n_jugadores) {
    // recorre el array de jugadores para tener los datos de los jugadores y almacenarlos en el fichero
    FILE *f;
    f = fopen("partidas.txt", "a");
    char *fecha = obtenerFecha();

    fprintf(f,"\nFecha: %s--",&fecha);
    for (int i = 0; i < n_jugadores -1; i++) {
        fprintf(f,"Nombre: %s - Puntos: %d;", jugadores[i].nombre, jugadores[i].puntos);
    }
    // el ultimo jugador no lleva ; al final
    fprintf(f,"Nombre: %s - Puntos: %d", jugadores[i].nombre, jugadores[i].puntos);
    fclose(f);
}

// funcion para tener la fecha
char* obtenerFecha () {
    time_t t;
    struct tm *tm;
    char formateada[100]; // donde se va a generar la fecha

    t = time(NULL);
    tm = localtime(&t);
    strftime(formateada, 100, "%d/%m/%Y %H:%M:%S", tm); // donde se guarda fecha, tamaño y formato de esta
    char *fecha = malloc(sizeof(char)* 100);
    strcpy(fecha, formateada);

    return fecha;
}

// // FUNCION PARA CARGAR PARTIDA // //

void cargarPartidas () {
    // leer el fichero y mostrar las lineas de ese fichero
    FILE *f;
    f= fopen("partidas.txt", "r");
    char cadena[255] // donde se almacenan lineas que se van leyendo del fichero

    while (feof(f) == 0) { // mientras no se llegue al final del fichero
        fgets(caena,255,f);
        printf("%s",cadena);
    }
    printf("\n\n");
    fclose(f);
}
