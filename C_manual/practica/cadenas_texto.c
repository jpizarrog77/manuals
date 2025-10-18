
/*
Programa que pide 4 cadena de texto por teclado y las muestra separadas por -
*/
int main () {
    char cadena3[100], char cadena4[100], char cadena5[100], char cadena6[100];
    printf("Escriba la primera cadena de texto \n");
    gets(cadena3);
    printf("Escriba la segunda cadena de texto \n");
    gets(cadena4);
    printf("Escriba la tercera cadena de texto \n");
    gets(cadena5);
    printf("Escriba la cuarta cadena de texto \n");
    gets(cadena6);
    printf("%s - %s - %s - %s", cadena3, cadena4, cadena5, cadena6);
    return 0;
}

// ES MEJOR USAR FGETS
#include <stdio.h>
#include <string.h>

int main() {
    char cadena3[100];
    char cadena4[100];
    char cadena5[100];
    char cadena6[100];
    /*
    - cadena:
        Es el array donde se guarda el texto que escribe el usuario.
    - sizeof(cadena):
        Esto le dice a fgets cuántos caracteres puede leer como máximo.
        Por ejemplo, si cadena tiene 100 posiciones, sizeof(cadena) devuelve 100.
        Así evitas que el usuario escriba más de lo que cabe en el arreglo.
    - stdin:
        Significa "standard input", o sea, la entrada estándar del programa (el teclado).
        Es de donde fgets va a leer el texto.
    */
    printf("Escriba la primera cadena de texto:\n");
    fgets(cadena3, sizeof(cadena3), stdin);
    printf("Escriba la segunda cadena de texto:\n");
    fgets(cadena4, sizeof(cadena4), stdin);
    printf("Escriba la tercera cadena de texto:\n");
    fgets(cadena5, sizeof(cadena5), stdin);
    printf("Escriba la cuarta cadena de texto:\n");
    fgets(cadena6, sizeof(cadena6), stdin);

    // Eliminar el salto de línea que fgets incluye
    // strcspn -- sirve para encontrar la posición del primer carácter en una cadena 
                  // que coincide con alguno de los caracteres de otra cadena.
                  // size_t strcspn(const char *cadena1, const char *cadena2); cadena 1 la q se analiza

    cadena3[strcspn(cadena3, "\n")] = '\0';
    cadena4[strcspn(cadena4, "\n")] = '\0';
    cadena5[strcspn(cadena5, "\n")] = '\0';
    cadena6[strcspn(cadena6, "\n")] = '\0';

    printf("%s - %s - %s - %s\n", cadena3, cadena4, cadena5, cadena6);

    return 0;
}

/*
Programa que pida por teclado una cadena y un caracter y devuelva si 
dicho caracter se encuentra en la cadena y si es así, la posición de la primera aparación del mismo
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadenaa[100];
    char caracter;
    int encontrado = 0;

    printf("Escriba la cadena de texto:\n");
    fgets(cadenaa, sizeof(cadenaa), stdin);

    // Eliminar el salto de línea si existe
    cadenaa[strcspn(cadenaa, "\n")] = '\0';

    printf("Introduzca un caracter:\n");
    scanf(" %c", &caracter);  // Espacio evita leer el '\n' residual

    for (int i = 0; i < strlen(cadenaa); i++) {
        if (cadenaa[i] == caracter) {
            printf("Sí, el caracter '%c' pertenece a la cadena.\n", caracter);
            printf("La posición de la primera aparición es: %d\n", i);
            encontrado = 1;
            break;  // Ya lo encontramos, no seguimos buscando
        }
    }

    if (!encontrado) {
        printf("El caracter '%c' no pertenece a la cadena.\n", caracter);
    }

    return 0;
}

// usando la funcion getchar
#include <stdio.h>
#include <string.h>

int main() {
    char cadenaaa[50];
    char caracter;

    printf("Introduce una cadena:\n");
    fgets(cadenaaa, sizeof(cadenaaa), stdin);

    // Eliminar el salto de línea si existe
    cadenaaa[strcspn(cadenaaa, "\n")] = '\0';

    printf("Introduce un caracter:\n");
    caracter = getchar();

    int i = 0;
    int pos = -1;
    while (cadenaaa[i] != '\0' && pos == -1) {
        if (cadenaaa[i] == caracter) {
            pos = i;
        }
        i++;
    }

    if (pos != -1) {
        printf("El caracter '%c' se encuentra en la cadena \"%s\" en la posición %d\n", caracter, cadenaaa, pos);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena \"%s\"\n", caracter, cadenaaa);
    }

    return 0;
}

