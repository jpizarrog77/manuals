//-------------------------//
// MODIFICADORES DE TIPOS //
//-----------------------//

/* Los modificadores de tipo en C se usan para ajustar el rango, el tamaño y el signo de los datos 
primitivos como int, char, y float. Son muy útiles cuando necesitas optimizar el uso de memoria 
o controlar el comportamiento numérico. */
// [modificador] [tipo base] [nombre_variable];
// signed - permite valores negativos y positivos - Es el valor por defecto para int y char (excepto en algunas arquitecturas).
signed int x = -10;
signed char c = -100;
// unsigned - solo permite valores negativos (incluye 0) - Duplica el rango positivo del tipo base.
unsigned int x = 100;
unsigned char c = 255; // char sin signo puede llegar hasta 255
// short - ocupa menos memoria que int - Útil para ahorrar espacio cuando no necesitas grandes rangos.
short int edad = 25;
// long - amplía el rango del tipo base - ideal para trabajar con números grandes
long int poblacion = 7800000000;
// long long - usado para enteros extremadamente grandes
long long int galaxias = 9223372036854775807;
// se pueden aplicar dos modificadores seguidos
// [signo] [tamaño] [tipo base] [nombre_variable];
unsigned long int numeroGrande;
signed short int edad;


// // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // //


// typedef - definir nuevos nombres de tipos, permite poner un alias a un tipo de dato
typedef tipo_original nuevo_nombre;
typedef unsigned int uint;

typedef struct { // uso en estructuras
    char nombre[50];
    int edad;
} Persona;

Persona p1;

// ejemplo 2
int valor
typedef int entero;

entero valor1; // en vez de int ahora puedo poner entero, he hecho un alias
entero valor2;

// sizeof -devuelve el tamaño de una variable o tipo de dato durante la compilación, 
          // no durante la ejecución del programa.

#include <limits.h> // es necesario usar este header
sizeof(tipo)
sizeof(variable)

int x;
printf("Tamaño de int: %lu\n", sizeof(int));
printf("Tamaño de x: %lu\n", sizeof(x)); // Se recomienda usar %lu para imprimir el resultado, 
                                          // ya que sizeof devuelve un valor de tipo size_t.

/*
------ CONSTANTES SHRT_MIN, SHRT_MAX, LONG_MIN, LONG_MAX, UINT_MAX) ------
- Sirven para conocer los límites de los valores que pueden almacenar ciertos tipos de datos en C. 
- Son fundamentales cuando trabajas con números y quieres asegurarte de que no se produzcan errores por desbordamiento (overflow) o pérdida de datos
*/

/*
- SHRT_MIN y SHRT_MAX -

Estas constantes indican el valor mínimo y máximo que puede almacenar una variable de tipo short int.
- SHRT_MIN es el valor más pequeño posible, normalmente −32,768.
- SHRT_MAX es el valor más grande posible, normalmente 32,767.
Sirven para:
- Validar que un número está dentro del rango permitido para short.
- Evitar errores al convertir tipos o al realizar operaciones aritméticas.
*/

/*
- LONG_MIN y LONG_MAX -

Estas indican el rango de valores para el tipo long int.
- LONG_MIN suele ser −9,223,372,036,854,775,808.
- LONG_MAX suele ser 9,223,372,036,854,775,807.
Sirven para:
- Trabajar con números grandes sin perder precisión.
- Saber si una operación puede exceder el rango de long.
*/

/*
- UINT_MAX -

Esta constante indica el valor máximo que puede almacenar una variable de tipo unsigned int.
- UINT_MAX suele ser 4,294,967,295.
- Como es unsigned, no tiene valores negativos. Su mínimo es 0.
Sirve para:
- Garantizar que los valores positivos no excedan el límite.
- Usar eficientemente la memoria cuando no necesitas números negativos
*/

///////////////////////
// --- EJEMPLOS --- //

// 1. Declaración y visualización de tipos modificados
// Objetivo: Ver cómo se comportan distintos modificadores

#include <stdio.h>

/*
 Los modificadores como short, unsigned, y long en C sirven para controlar el tamaño y el rango de los números enteros que usas en tu programa. 
 Esto afecta tanto la memoria que ocupan como los valores que pueden representar.
*/

int main() {
    short int si = 32767;
    unsigned short int usi = 65535;
    long int li = 2147483647;
    unsigned long int uli = 4294967295;

    printf("short int: %d\n", si);
    printf("unsigned short int: %u\n", usi);
    printf("long int: %ld\n", li);
    printf("unsigned long int: %lu\n", uli);

    return 0;
}

// 2. Desbordamiento de tipos
// Objetivo: Ver qué pasa cuando se excede el rango de un tipo.

#include <stdio.h>

int main() {
    unsigned char uc = 255;
    uc += 1;  // ¿Qué sucede aquí?

    printf("unsigned char después de sumar 1: %u\n", uc);

    return 0;
}
    // Prueba: Cambia unsigned char por signed char y usa valores negativos

// 3. Tamaño de tipos
// Objetivo: Usar sizeof para ver cuánto ocupa cada tipo.

#include <stdio.h>

int main() {
    printf("sizeof(short int): %zu bytes\n", sizeof(short int));
    printf("sizeof(long int): %zu bytes\n", sizeof(long int));
    printf("sizeof(unsigned int): %zu bytes\n", sizeof(unsigned int));
    printf("sizeof(signed char): %zu bytes\n", sizeof(signed char));

    return 0;
}
    // Prueba: Añade otros tipos como float, double, long double

// 4. Operaciones con tipos modificados
// Objetivo: Ver cómo afectan los modificadores en operaciones aritméticas

#include <stdio.h>

int main() {
    unsigned int a = 10;
    int b = -20;
    int resultado = a + b;

    printf("Resultado de unsigned + signed: %d\n", resultado);

    return 0;
}
    // Prueba: Cambia los tipos y observa si hay advertencias o resultados inesperados

// 5. Comparación de tipos
// Objetivo: Ver cómo se comparan distintos tipos modificados.

#include <stdio.h>

int main() {
    signed char sc = -1;
    unsigned char uc = 1;

    if (sc < uc) {
        printf("signed char es menor que unsigned char\n");
    } else {
        printf("signed char NO es menor que unsigned char\n");
    }

    return 0;
}

    // Prueba: Cambia los valores y tipos para ver cómo afecta la comparación.







