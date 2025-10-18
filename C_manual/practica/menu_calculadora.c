// --- CREAR UN MENÚ DE OPERACIONES MATEMÁTICAS -- //

/* Crear un programa que muestre un menú al usuario con varias opciones matemáticas. 
El usuario elige una opción, introduce los datos necesarios, y el programa muestra el resultado. */
/* Requisitos del ejercicio:
- Mostrar un menú con opciones:
- Sumar dos números
- Restar dos números
- Multiplicar dos números
- Dividir dos números
- Salir
- Usar un bucle do-while para repetir el menú hasta que el usuario elija salir.
- Usar funciones para cada operación matemática.
*/
#include <stdio.h>

double opcion1_sumar(double A, double B){
    return A + B;
}

double opcion2_restar(double A, double B){
    return A - B;
}

double opcion3_multiplicar(double A, double B){
    return A * B;
}

double opcion4_dividir(double A, double B){
    if (B == 0) {
        printf("No divisible entre 0");
        return 0;
    }
    return A / B;
}


int main () {
    int option_menu;
    double A, B;
    double result;

    do {

        printf("Menu de opciones:\n");
        printf("1. Sumar dos numeros\n");
        printf("2. Restar dos numeros\n");
        printf("3. Multiplicar dos numeros\n");
        printf("4. Dividir dos numeros\n");
        printf("5. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &option_menu);

        switch (option_menu) {
            case 1:
                printf("Elegiste opción 1: Sumar\n");
                printf("Introduce los dos numeros separados por un espacio: ");
                scanf("%lf %lf", &A, &B);
                result = opcion1_sumar(A, B);
                printf ("Resultado: %lf \n", result);
                break;
            case 2:
                printf("Elegiste opcion 2: Restar\n");
                printf("Introduce los dos numeros separados por un espacio: ");
                scanf("%lf %lf", &A, &B);
                result = opcion2_restar(A, B);
                printf ("Resultado: %lf \n", result);
                break;
            case 3:
                printf("Elegiste opcion 3: Multiplicar\n");
                printf("Introduce dos numeros separados por un espacio: ");
                scanf("%lf %lf", &A, &B);
                result = opcion3_multiplicar(A, B);
                printf ("Resultado: %lf \n", result);
                break;
            case 4:
                printf("Elegiste opcion 4: Dividir\n");
                printf("Introduce los dos numeros separados por un espacio: ");
                scanf("%lf %lf", &A, &B);
                result = opcion4_dividir(A, B);
                if (B != 0) {
                    printf ("Resultado: %lf \n", result);
                }
                break;
            case 5:
                printf("Saliendo del menu calculadora \n");
                break;
            default:
                printf("Opcion invalida");
        }

    } while (option_menu != 5);
    return 0;
}