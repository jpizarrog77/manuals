//////////////////////
// PRÁCTICA GENERAL //
//////////////////////

/*
Invertir un array
5 números, guárdalos en un array e inviértelos.
*/

int main () {
    int listNum[5]={1,2,3,4,5};
    for (int i = 4; i >= 0; i--) {
        printf("%d \n", listnum[i]);
    }
    return 0;
}

/*
Invertir un array
Pide al usuario 5 números, guárdalos en un array e inviértelos.
*/

int main () {
    int listNum2[5];
    for (int i = 0; i <= 4; i++) {
        printf("Por favor, introduce un número \n");
        scanf("%d", &listNum2[i]);
    }
    printf("Array invertido: \n");
    for(int i=4; i >= 0; i--) {
        printf("%d \n", listNum2[i]);
    }
    return 0;
}

/*
Búsqueda en un array
Permite al usuario buscar un número dentro de un array fijo de 10 elementos.
*/

#include <stdio.h>

int main() {
    int num;
    int listNum3[10] = {1,2,3,4,5,6,7,8,9,10};
    /*
    La variable encontrado que usamos en ese código es lo que en programación se conoce como 
    una flag (o bandera). Es una técnica muy común para indicar 
    si ha ocurrido algo durante la ejecución de un bucle o una función.
    */
    int encontrado = 0; // // Inicialmente asumimos que NO se ha encontrado

    printf("Por favor, introduce un número para comprobar si pertenece al array:\n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        if (num == listNum3[i]) { 
            encontrado = 1; // al ser 1 se indica que se ha encontrado
            break; // Ya no hace falta seguir buscando
        }
    }

    if (encontrado) {
        printf("El número introducido pertenece al array.\n");
    } else {
        printf("Lo siento, el número introducido no pertenece al array.\n");
    }

    return 0;
}

/*
Calculadora con funciones
Implementa una calculadora que use funciones para operar: 
suma, resta, multiplicación y división.
*/

#include <stdio.h>

// Función para sumar
float f_sumar(float num1, float num2) {
    float resultado = num1 + num2;
    printf("El resultado de la suma es: %.2f\n", resultado);
    return resultado;
}

// Función para restar
float f_restar(float num1, float num2) {
    float resultado = num1 - num2;
    printf("El resultado de la resta es: %.2f\n", resultado);
    return resultado;
}

// Función para multiplicar
float f_multiplicar(float num1, float num2) {
    float resultado = num1 * num2;
    printf("El resultado de la multiplicación es: %.2f\n", resultado);
    return resultado;
}

// Función para dividir
float f_dividir(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: No se puede dividir entre 0.\n");
        return 0;
    }
    float resultado = num1 / num2;
    printf("El resultado de la división es: %.2f\n", resultado);
    return resultado;
}

// Función principal con menú interactivo
int main() {
    int opcion;
    float num1, num2;

    do {
        printf("\n--- Calculadora ---\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Introduce el primer número: ");
            scanf("%f", &num1);
            printf("Introduce el segundo número: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                f_sumar(num1, num2);
                break;
            case 2:
                f_restar(num1, num2);
                break;
            case 3:
                f_multiplicar(num1, num2);
                break;
            case 4:
                f_dividir(num1, num2);
                break;
            case 5:
                printf("Saliendo de la calculadora.... \n");
                break;
            default:
                printf("Opción inválida. Intenta de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}


/*
Máximo de tres números
Escribe un programa que:
    - Solicite al usuario tres números enteros.
    - Determine cuál de los tres es el mayor.
    - Imprima el número mayor.
*/


#include <stdio.h>

int main() {
    int listnum[3]; // declaración de un array que contendrá 3 números q indique el usuario
    int mayor_num; // variable donde se guarda el mayor número entero

    // Solicitar los tres números
    for (int i = 0; i < 3; i++) { // bucle para rellenar las 3 posiciones del array
        printf("Por favor, introduce un número %d: \n");
        scanf("%d", &listnum[i]);
    }

    // Inicializar el mayor con el primer número (primera posicion del array)
    mayor_num = listnum[0]; 

    // Comparar con los demás
    for (int i = 1; i < 3; i++) {
        if (listnum[i] > mayor_num) { // si el número de las otras posiciones del array 
            mayor_num = listnum[i];  // es mayor q las anteriores este pasa a ser 
                                    // el valor de mayor num
        }
    }

    // Imprimir el número mayor
    printf("El número mayor es: %d\n", mayor_num);

    return 0;
}

