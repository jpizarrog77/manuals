/*
Progrma que pida un número entero entre 1 y 10
se escriba la tabla del número en un fichero de texto
*/

#include <stdio.h>
#include <stdlib.h>

int multiple_num (int num, int i) {
    return num * i;
}

int main () {
    // solcitar el numero
    int num;
    printf("Indique un número entre el 1 y el 10 \n");
    scanf("%d", &num);

    // crear variable en un puntero de tipo file
    FILE *f;
    // abrir el fichero para escribir
    f = fopen("tabla.txt", "w"); // si no esta creado, se crea automaticamente
    // bucle para generar la tabla de multiplicar
    int result;
    for (int i = 0; i<=10; i++) {
        result = multiple_num(num,i);
        fprintf(f,"%d x %d = %d \n", num, i, result);
    }
    fclose(f);
    printf("Tabla de multiplicar de %d guardada en 'tabla.txt'.\n", num);
}

/// FORMA UDEMY
int main () {
    // solcitar el numero
    int num;
    printf("Indique un número entre el 1 y el 10 \n");
    scanf("%d", &num);

    // crear variable en un puntero de tipo file
    FILE *f;
    // abrir el fichero para escribir
    f = fopen("tabla.txt", "w"); // si no esta creado, se crea automaticamente
    // bucle para generar la tabla de multiplicar
    for (int i = 0; i<=10; i++) {
        fprintf(f,"%d \n", i*num);
    }
    fclose(f);
    printf("Tabla de multiplicar de %d guardada en 'tabla.txt'.\n", num);
}
