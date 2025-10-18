// ---------- //
// FUNCIONES // programación estructurada
// -------- //
// es un bloque de código independiente que realiza una tarea específica

/* Elementos de una función: 
- Tipo de retorno: El tipo de dato que devuelve la función (int, float, void, etc.).
- Nombre de la función: Identificador único.
- Parámetros: Variables que recibe para trabajar.
- Cuerpo: Bloque de instrucciones que define lo que hace.
- Return: Devuelve un valor (si no es void).
*/

// Sintaxis general
tipo_retorno nombre_funcion(tipo_param1 param1, tipo_param2 param2, ...) {
    // Código de la función
    return valor; // si no es void
}
// ejemplo
#include <stdio.h>

// Declaración
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = sumar(5, 3);
    printf("La suma es: %d\n", resultado);
    return 0;
}

// llamar a una funcion 
int resultado = sumar(5, 3); // llamada a la función 'sumar'

int resultado = sumar(5, 3); // llamada a la función 'sumar'

/* tipos de funciones:
- void -> no devuelve valor 
- con retorno -> devuelve un valor
- con parámetros -> recibe datos para operar
- sin parámetros -> no recibe datos
*/

