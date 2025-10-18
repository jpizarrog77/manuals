/*
Ejercicio 4: Comparar tipos
Objetivo: Declarar variables con short, long, unsigned int, y mostrar sus rangos.
Tareas:
- Imprimir el tamaño en bytes con sizeof.
- Mostrar el valor máximo y mínimo que pueden almacenar.
*/

#include <stdio.h>
#include <limits.h> // necesario incluir este headers
 
int main () {
    short int num1;
    long int num2;
    unsigned int num3;
    // Tamaño en bytes
    printf("Mostrar rangos de las variables con sizeof \n");
    printf("Tamaño de short int (num1): %lu bytes \n", sizeof(num1)); // - sizeof(variable) devuelve el tamaño en bytes de la variable.
    printf("Tamaño de long int (num2): %lu bytes \n", sixeof(num2));
    printf("Tamaño de unsigned int (num3): %lu bytes \n", sizeof(num3));
    // Rangos de valores
    /*
    - SHRT_MIN, SHRT_MAX, LONG_MIN, LONG_MAX, y UINT_MAX son macros definidas en <limits.h> que representan los rangos de cada tipo
    */
    printf("Rango de short int: %d a %d\n", SHRT_MIN, SHRT_MAX);
    printf("Rango de long int: %ld a %ld\n", LONG_MIN, LONG_MAX);
    printf("Rango de unsigned int: 0 a %u\n", UINT_MAX);
    return 0;
}

/*
Ejercicio 5: Control de dinero
Objetivo del Ejercicio
---Simular una cuenta bancaria básica que:
- Usa unsigned int para representar el saldo.
- Permite depósitos (sumar dinero).
- Permite retiros (restar dinero, si hay suficiente saldo).
- Evita que el saldo se vuelva negativo.
---Requisitos Técnicos
- Usar unsigned int para el saldo.
- Validar que los retiros no excedan el saldo actual.
- Mostrar el saldo después de cada operación.
---Operaciones a Simular
- Inicializar saldo: por ejemplo, unsigned int saldo = 1000;
- Depositar dinero: sumar una cantidad al saldo.
- Retirar dinero: restar una cantidad del saldo, solo si el saldo lo permite.
- Mostrar saldo actual.
*/

#include <stdio.h>

int main() {
    unsigned int saldo = 1000; // Saldo inicial

    printf("Saldo inicial: %u euros\n", saldo);

    // Depósito
    unsigned int deposito = 500;
    saldo += deposito;
    printf("Después de depositar %u euros, saldo: %u euros\n", deposito, saldo);

    // Retiro válido
    unsigned int retiro = 300;
    if (retiro <= saldo) {
        saldo -= retiro;
        printf("Después de retirar %u euros, saldo: %u euros\n", retiro, saldo);
    } else {
        printf("Error: No hay suficiente saldo para retirar %u euros\n", retiro);
    }

    // Retiro inválido (excede el saldo)
    retiro = 2000;
    if (retiro <= saldo) {
        saldo -= retiro;
        printf("Después de retirar %u euros, saldo: %u euros\n", retiro, saldo);
    } else {
        printf("Error: No hay suficiente saldo para retirar %u euros\n", retiro);
    }

    return 0;
}

