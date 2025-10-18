/*
 Pedir números hasta que el usuario ingrese 0
Enunciado:
Escribe un programa que pida al usuario números enteros y los imprima. 
El programa debe continuar hasta que el usuario ingrese 0.
*/

#include <stdio.h>

int main (){
    int n;
    do {
        printf("Introduzca un número entero: \n");
        scanf("%d", &n);
        if (n != 0){
            printf("El número es %d, no se rompe el bucle \n", n);
            printf("Pruebe de nuevo");
        }
        
    } while ( n != 0);
    printf("n es igual a 0 se rompe el bucle \n");
    return 0;
}


/*
Validar entrada: pedir un número entre 1 y 10
Enunciado:
Escribe un programa que pida al usuario un número entre 1 y 10.
Si el número está fuera de ese rango, debe volver a pedirlo hasta que sea válido.
*/

#include <stdio.h>

int main () {
    int n;
    do {
        printf("Introduzca un número entre 1 y 10: \n");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("Número no válido. Por favor, pruebe de nuevo.\n");
        }
    } while (n < 1 || n > 10);

    printf("Bravo, tienes acceso \n");
    return 0;
}


/*
Sumar números hasta que el usuario diga “no”
Enunciado:
Pide al usuario números enteros y acumula la suma. 
Después de cada número, pregunta si quiere continuar (s para sí, n para no).
El programa termina cuando el usuario responde n.
*/

#include <stdio.h>


/*
Menú interactivo simple
Enunciado:
Crea un programa con un menú que tenga 3 opciones:
- Mostrar un mensaje
- Mostrar la fecha (puedes simularla)
- Salir
El menú debe repetirse hasta que el usuario elija la opción 3.
*/

#include <stdio.h>

int main () {
    int option;
    do {
        // antes del witch se hace el menú
        printf("------------------------- \n");
        printf(" PRUEBA MENU INTERACTIVO \n");
        printf("------------------------- \n");
        printf("1. Seleccionar opción 1: \n");
        printf("1. Seleccionar opción 1: \n");
        printf("1. Seleccionar opción 1: \n");
        printf("2. Mostrar fecha \n");
        printf("3. Salir del menú \n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Opcion 1 seleccionada \n");
                break;
            case 2:
                printf("Mostrando la fecha: 25/07/77 \n");
                break;
            case 3:
                printf("Saliendo del menú... \n");
                break;
            default:
                printf("Opcion invalida");
        }
    } while (option != 3);
    return 0;
}

/*
Contador con confirmación
Enunciado:
Muestra un contador que va del 1 al N, 
pero después de cada número pregunta si el usuario quiere continuar. Si responde n, el contador se detiene.
*/

#include <stdio.h>




/*
Adivinar un número secreto
Enunciado:
El programa tiene un número secreto (por ejemplo, 7). 
El usuario debe adivinarlo. El programa sigue pidiendo intentos hasta que el usuario acierte.
*/

#include <stdio.h>


/*
Pedir letras hasta que se ingrese una vocal
Enunciado:
Pide al usuario que ingrese una letra. 
El programa continúa hasta que se ingrese una vocal (a, e, i, o, u).
*/

#include <stdio.h>

int main() {
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'}; // al ser solo un carcter se usan ''
    char letra;
    int esVocal = 0;

    do {
        printf("Introduce una letra: \n");
        scanf(" %c", &letra);  // Espacio antes de %c para ignorar saltos de línea
                                // al ser 1 caracter si hace falta &
        esVocal = 0;  // Reiniciar bandera

        for (int i = 0; i < 5; i++) {
            if (letra == vocales[i]) {
                esVocal = 1;
                break;
            }
        }

        if (!esVocal) {
            printf("Caracter no válido, pruebe de nuevo \n");
        }

    } while (!esVocal);

    printf("Caracter válido, saliendo del bucle \n");
    return 0;
}

// SIN ARRAY -- USA FLAG

#include <stdio.h>

int main() {
    char letra; // Declara una variable letra de tipo char para guardar la letra que el usuario escriba.
    int esVocal = 0; // - Variable tipo int que usamos como bandera (flag).
                    // - Comienza en 0 (falso), y la pondremos en 1 (verdadero) si la letra es una vocal.

    do {
        printf("Introduce una letra: \n");
        scanf(" %c", &letra);  
        // - Si alguna de las condiciones es verdadera, esVocal se convierte en 1.
        // - Si ninguna coincide, esVocal queda en 0.
        esVocal = (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u');

        if (!esVocal) {
            // -  Si esVocal es falso (0), muestra un mensaje de error.
            printf("Caracter no válido, pruebe de nuevo \n"); /
        }

    } while (!esVocal);

    printf("Caracter válido, saliendo del bucle \n");
    return 0;
}