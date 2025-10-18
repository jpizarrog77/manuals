/*
Declarar un struct llamado producto con estos campos:
    - codigo --> tipo entero
    - descripcion --> array de caracteres
    - precio --> tipo real
Definir puntero de tipo producto y reservar espacio en memoria para almacenar una variable de tipo producto
Inicializar campos de registro creado dinamicamente
Imprimir campos del registro
Liberar espacio dinámico reservado
*/

#include <stdio.h>
#include <stdlib.h>

struct produto {
    int codigo;
    char descripcion[50];
    float precio;
};

int main () {
    // puntero de tipo struct
    struct producto *prod;

    // funcion malloc para realizar reserva de memoria del struct
    prod = malloc(sizeof(struct producto)); // el puntero prod apunta a ese especio de memoria reservado

    // inicializar datos del struct del espacio de memoria reservado

    // introducción del codigo
    printf("Intoduce el código \n");
    // se almacena el código q es de tipo entero en la posición de memoria a la que apunta el puntero prod 
    scanf("%d", prod->codigo); // en el campo correspondiente del struct

    // introducción de la descripción
    printf("Intoduce la descripcion \n");
    // se almacena la descripcion q es de tipo char en la posición de memoria a la que apunta el puntero prod
    scanf("%s", prod->descripcion); // en el campo correspondiente del struct

    // introducción del precio
    printf("Intoduce el precio \n");
    // se almacena el precio q es de tipo float en la posición de memoria a la que apunta el puntero prod
    scanf("%f", prod->precio); // en el campo correspondiente del struct

    // salida por pantalla de los valores
    printf("Codigo del articulo: %d \n", prod->codigo);
    printf("Descripcion del articulo: %s \n", prod->descripcion);
    printf("Precio del articulo: %f \n", prod->precio);

    // Liberar espacio de memoria reservado
    free(prod);
    prod = NULL;
}