/*
Objetivo:
Escribe un programa en lenguaje C que:
- Solicite al usuario que introduzca un número entero.
- Determine si el número es par o impar.
- Muestre un mensaje indicando el resultado.
*/

#include <stdio.h>

const char* par_o_impar(int number){
    if (number % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }

}

int main (){
    char nombre[25];
    int number;
    const char* result;
    printf("Introduce tu nombre por favor \n");
    scanf("%24s", &nombre);
    printf("Vamos a determinar si un número es par o impar \n");
    printf("Por favor, introduce un número entero \n");
    scanf("%d", &number);
    result = par_o_impar(number);
    printf("Hola %s, el numero %d es: %s", nombre, number, result);
    return 0;
}