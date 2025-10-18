/*
. Número primo
- Verifica si un número es primo usando un bucle y condiciones
Objetivo:
Desarrollar un programa en C que determine si un número entero positivo ingresado por el usuario 
es un número primo.
Descripción:
Un número primo es aquel que solo tiene dos divisores positivos: el 1 y él mismo. 
Por ejemplo, el número 7 es primo porque solo se puede dividir exactamente entre 1 y 7. En
cambio, el número 8 no es primo porque también se puede dividir entre 2 y 4.
Requisitos del programa:
- Solicitar al usuario que ingrese un número entero positivo.
- Verificar si el número ingresado es primo utilizando un bucle (for o while) y condiciones (if).
- Mostrar un mensaje indicando si el número es primo o no lo es.
Restricciones:
- El número debe ser mayor que 1. Si el usuario ingresa un número menor o igual a 1,
 mostrar un mensaje de error.
- No se permite el uso de funciones matemáticas avanzadas (como sqrt), solo bucles y condicionales.
*/

#include <stdio.h>

int num_prim (int number){
    for (i=2; i<=number; i++){
        if (number % 0 ){
            return "Tiene un divisor además de 1 y el mismo, NO es un número primo"
        } else {
            return "SI es un número primo"
        }
    }
}

int main (){
    int number;

    printf("Indica un número para comprobar si es primo: \n");
    scanf("%d", &number);
    num_prim(number);
    return 0;
}

////////////////////
// VERSIÓN BUENA //
//////////////////

#include <stdio.h>

const char* num_prim(int number) {
    if (number <= 1) {
        return "Error: el número debe ser mayor que 1.";
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return "Tiene un divisor además de 1 y el mismo, NO es un número primo";
        }
    }
    // Si termina el ciclo sin encontrar divisor
    return "SI, es un número primo";
}

int main() {
    int number;

    printf("Indica un número para comprobar si es primo: \n");
    scanf("%d", &number);
    printf("%s \n", num_prim(number));
    return 0;
}
