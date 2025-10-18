/* 
Escribir un programa en C que escriba los números comprendidos entre 1 y 100. El
programa escribirá en la pantalla los números en grupos de 20, solicitando al usuario si
quiere o no continuar visualizando el siguiente grupo de números.
*/

#include <stdio.h>

int main () {
    char option = 'y'
    int show_group1_num (int num) {
        for (int i = 1; i <= 20; i++) {
            printf("%d \n",num);
        }
    }
    printf("Quieres seguir visualizando los números? (y/n) \n")
    scanf("%s", option)
    if (option == y) {
        int show_group2_num (int num) {
            for (int i = 21; i <= 40; i++) {
                printf("%d \n",num);
            }
        }
    }
    printf("Quieres seguir visualizando los números? (y/n) \n")
    scanf(" %c", option)
     if (option == y) {
        int show_group3_num (int num) {
            for (int i = 21; i <= 40; i++) {
                printf("%d \n",num);
            }
        }
    }
    printf("Quieres seguir visualizando los números? (y/n) \n")
    scanf(" %c", option)
     if (option == y) {
        int show_group4_num (int num) {
            for (int i = 21; i <= 40; i++) {
                printf("%d \n",num);
        }
    }
    printf("Quieres seguir visualizando los números? (y/n) \n")
    scanf(" %c", option)
     if (option == y) {
        for (int i = 81; i >= 100; i++) {
            printf("%d \n",num);
        }
    }
    return 0;
};


/* 
Escribir un programa en C que escriba los números comprendidos entre 1 y 100. El
programa escribirá en la pantalla los números en grupos de 20, solicitando al usuario si
quiere o no continuar visualizando el siguiente grupo de números. Generalizar el
programa para que escriba los números comprendidos entre dos valores que introduzca
el usuario, y sea éste también quien decida el tamaño del grupo a visualizar por
pantalla.
*/

// Incluye la librería estándar de entrada y salida, necesaria para usar funciones como printf y scanf.
#include <stdio.h>

int main() {
    int start, end, group_size; // declara 3 variables
    /*
    Declara tres variables enteras: start y end para guardar el rango de números, 
    y group_size para el tamaño de cada grupo que el usuario quiere ver.
    */
    char option = 'y'; // variable option para hacer que continue la muestra de números
    /*
    Declara la variable option tipo char para almacenar la respuesta del usuario ('y' o 'n'), 
    inicializándola con 'y' para entrar al bucle la primera vez.
    */
    // Pedir rango y tamaño del grupo
    printf("Introduce el número inicial: ");
    scanf("%d", &start); // Lee el número ingresado por el usuario y lo guarda en start.

    printf("Introduce el número final: ");
    scanf("%d", &end); // Lee el número ingresado por el usuario y lo guarda en end.

    if (end < start) {
        printf("El número final debe ser mayor o igual que el inicial.\n");
        /*
        Verifica que el rango sea válido (que el final no sea menor que el inicio).
        Si la condición es falsa, muestra un mensaje de error y termina el programa con código 1 (error).
        */
        return 1;
    }

    printf("Introduce el tamaño del grupo a visualizar: ");
    /*
    Pide al usuario el tamaño del grupo de números que desea visualizar.
    Guarda el valor ingresado en group_size.
    */
    scanf("%d", &group_size);

    if (group_size <= 0) {
        printf("El tamaño del grupo debe ser un número positivo.\n");
        return 1;
    }

    int current = start; // Declara una variable current para llevar la cuenta del número actual 
                        // que se está mostrando, empezando desde start.

    /*
    Comienza un bucle while que se ejecuta mientras el usuario quiera continuar (opción 'y' o 'Y') 
    y mientras no se haya llegado al número final.
    */                    
    while ((option == 'y' || option == 'Y') && current <= end) {
        // Mostrar grupo de números
        for (int i = 0; i < group_size && current <= end; i++) {
            /*
            Dentro del while, un bucle for imprime hasta group_size números consecutivos.
            También verifica que current no sobrepase end.
            Muestra el número current y luego lo incrementa para el siguiente.
            */
            printf("%d\n", current);
            current++;
        }

        if (current <= end) {
            /*
            Si aún quedan números por mostrar (current no superó end), 
            pregunta al usuario si quiere continuar.
            Lee la respuesta y la guarda en option.
            Nota: el espacio antes de %c en scanf limpia el buffer de entrada 
            para evitar leer caracteres residuales.
            */
            printf("¿Quieres seguir visualizando los números? (y/n): ");
            scanf(" %c", &option); // Espacio antes de %c para limpiar buffer
        }
    }

    printf("Programa terminado.\n");
    /*
    Cierra el bucle while.
    Muestra mensaje de finalización cuando el usuario decide no continuar 
    o ya se mostraron todos los números.
    Devuelve 0 para indicar que el programa terminó correctamente.
    */
    return 0;
}
