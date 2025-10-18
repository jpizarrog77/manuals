/*
Programa que lee fichero llamado numeros.txt que contiene una lista de números(uno en cada fila)
y devuelve la suma de esos numeros
*/

#include <stdio.h>
#include <stlib.h>

int main () {
    // crear variable en un puntero de tipo file
    FILE *f;
    // leer los números del archivo
    f = fopen("numeros.txt","r");
    // bucle para ir leyendo cada numero e ir sumando
    int num; // variable que almacena cada numero leido
    int suma = 0; // variable para iniciar la suma en 0
    while(feof(f) == 0) {
        fscanf(f,"%d", &num);
        suma += num;
    }
    printf("La suma de todos los numeros del fichero es: %d \n", suma);
    return 0;
    fclose(f);
}
