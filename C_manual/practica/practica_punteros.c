/*
Array de 5 números reales introducidos por el usuario
Declarar puntero al array y calcular la media de sus elementos usando el puntero
*/

#include <stdio.h>

int main () {
    // declaro array
    float array[5];
    // con loop for recorro todas las posiciones del array para que usuario lo rellene
    for (int i = 0; i < 5; i++) {
        printf("Introduce un número: \n");
        scanf("%f", &array[i]);
    }
    // declaracion puntero
    float *punt_array = &array[0]; // apunta a la primera posición
    // calcular media de valores del array
    /*
    SIN USAR PUNTERO
    float suma = 0;
    float promedio;
    for (int i = 0; i < 5; i++) {
        suma += array[i];
    }
    promedio = suma / 5;
    printf("La media de los valores introducidos para el array es: %f \n", promedio);
    */
    // Calcular la media usando el puntero
    float suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += *(punt_array + i);  // Acceso mediante el puntero
    }

    float promedio = suma / 5;
    printf("La media de los valores introducidos es: %.2f\n", promedio);
}



