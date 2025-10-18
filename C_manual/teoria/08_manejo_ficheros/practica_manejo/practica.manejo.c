#include <stdio.h>
#include <stdlib.h>

int main () {
    // crear variable en un puntero de tipo file
    FILE *f

    // se abre el fichero PARA LECTURA

    f = fopen("prueba.txt","r"); // indico el fichero y le indico como quiero tratar el fichero
                          // para leer su contenido
    // crear variable puntero de cadenas para ir almacenando cada una de las líneas
    char *linea;
    // con bucle while y usando función especifica devuelve 1 si ha terminado leer el fichero
                                                            // 0 si no
    while (feof(f)==0) {
        // ir obteniendo las lineas del fichero
        fscanf(f,"%s", linea); // parámetros: fichero, como se trata la línea del fichero (como cadena)
        // almacen de lo leido -- en el puntero de antes
        // se imprime cada línea
        printf("%s \n", linea);
    }
    // por ultimo hay que cerrar el fichero
    fclose(f); // se le pasa la variable en la que se almacena el fichero

    // se abre el fichero PARA ESCRIBIR
    // elimina todo lo que hubiera y lo sustituye por lo nuevo
    // crear variable en un puntero de tipo file
    FILE *f2;
    f2 = fopen("prueba.txt","w"); // el nombre del fichero o su ruta
    char *cadena = "esta es una cadena de prueba" // puntero de cadena, inicializado con una cadena
    // en el fichero se escribe la cadena que contiene el puntero
    fprintf(f2,"%s \n", cadena); // parametros: variable q contiene fichero, 
                // tipo dato q se escribe, lo que escribo
    // lo ultimo es cerrar el fichero
    fclose(f2);

    // se abre el fichero PARA AÑADIR CONTENIDO AL FINAL
    // crear variable en un puntero de tipo file
    FILE *f3
    f3 = fopen("prueba.txt","a");
    char *cadenaa = "Esta es otra cadena añadida de prueba";
    fprintf(f3,"%s \n", cadenaa);
    fclase(f3);
}
