// ---------------------- //
// SENTENCIAS DE CONTROL //
// -------------------- //

// --- IF / ELSE IF --- //
// evalúa una condición lógica. Si la condición es verdadera (true), 
//ejecuta el bloque de código asociado. Si es falsa, lo ignora.

// sintaxis general
if (condición) {
    // Código que se ejecuta si la condición es verdadera
}

if (condición1) {
    // Código si condición1 es verdadera
} else if (condición2) {
    // Código si condición2 es verdadera
} else {
    // Código si ninguna condición es verdadera
}

//ejemplo 
#include <stdio.h>

int main() {
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}

// --- SWITCH --- //
/* para evaluar una sola expresión (generalmente una variable) contra múltiples posibles valores, 
y ejecutar diferentes bloques de código según el caso que coincida. 
Es especialmente útil cuando tienes muchas condiciones basadas en el mismo valor. */
// sintaxis general
#include <stdio.h>

int main() {
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}

//ejemplo 
#include <stdio.h>

int main() {
    int opcion;
    printf("Selecciona una opción (1-3): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Elegiste opción 1\n");
            break;
        case 2:
            printf("Elegiste opción 2\n");
            break;
        case 3:
            printf("Elegiste opción 3\n");
            break;
        default:
            printf("Opción inválida\n");
    }

    return 0;
}

// ------- //
// BUCLES //
// ----- //
// permite repetir un bloque de código mientras se cumpla una condición.

// --- FOR --- //
/* - Tiene tres partes: inicialización, condición, incremento.
- Inicialización: Se ejecuta una vez al principio. Suele declarar e inicializar la variable de control.
- Condición: Se evalúa antes de cada iteración. Si es verdadera, se ejecuta el bloque.
- Incremento: Se ejecuta al final de cada iteración. Suele modificar la variable de control.

- Evalúa la condición antes de cada iteración.
- Se usa cuando sabes cuántas veces debe repetirse. 
*/
// sintaxis general
for (inicialización; condición; incremento) {
    // Código que se repite
}

// ejemplos de inicialización
int i=0; i<10; i++
int i=1; i <= 10; i++
int i=10; i>=1; i--
int i=0; i<10; i +=2
int i=1; i<=!00; i *=2
                ; i /=2
// ejemplo
for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}

// --- WHILE --- //
/* - Evalúa la condición antes de ejecutar el cuerpo del bucle.
- Si la condición es verdadera, ejecuta el bloque.
- Se repite mientras la condición siga siendo verdadera. */

// sintaxis general
while (condición) {
    // Código que se repite
}
// ejemplo
int i = 1;
while (i <= 5) {
    printf("%d\n", i);
    i++;
}
// --- DO-WHILE --- //
/* - Ejecuta el cuerpo del bucle al menos una vez, luego evalúa la condición.
- Si la condición es verdadera, repite. */

// sintaxis general
do {
    // Código que se repite
} while (condición);
// ejemplo
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 5);

