/*
Objetivo:
Desarrollar un programa en lenguaje C que permita al usuario convertir temperaturas entre distintas escalas utilizando un menú interactivo basado en la estructura switch.
Descripción:
El programa debe mostrar un menú con varias opciones de conversión de temperatura. El usuario podrá seleccionar una opción, ingresar una temperatura, y el programa mostrará el resultado de la conversión correspondiente. Las conversiones disponibles son:
- Fahrenheit a Celsius
- Celsius a Fahrenheit
- Celsius a Kelvin
- Kelvin a Celsius
- Fahrenheit a Kelvin
- Kelvin a Fahrenheit
Requisitos:
- Utilizar funciones separadas para cada tipo de conversión.
- Usar la estructura switch para seleccionar la operación según la opción ingresada por el usuario.
- Solicitar al usuario la temperatura a convertir.
- Mostrar el resultado con dos decimales.
- Validar que la opción ingresada esté dentro del rango permitido (1 a 6).
- (Opcional) Permitir al usuario realizar múltiples conversiones hasta que decida salir.
*/

#include <stdio.h> // inclusion de librerias

int main() {

    int option;
    double original_temperature;
    double result;

    printf(" qqqqqqqqqqqqqqqqqqqqqqqqqqq \n");
    printf(" -- CONVERSOR TEMPERATURA -- \n");
    printf(" qqqqqqqqqqqqqqqqqqqqqqqqqqq \n");
    printf("Elige una opcion: ");
    printf("1. Farenheit a Celsius \n");
    printf("2. Celsius a Farenheit \n");
    printf("3. Celsius a Kelvin \n");
    printf("4. Kelvin a Celsius \n");
    printf("5. Farenheit a Kelvin\n");
    printf("6. Kelvin a Farenheit \n");
    printf("7. Salir\n");
    scanf("%d", &option);

    do {
        switch (option){
            case 1:
                printf("Elegiste opción 1 \n");
                printf("Introduce la temperatura en Farenheits: \n");
                scanf("%lf", &original_temperature);
                result = convert_farenheit_celsius (original_temperature);
                printf ("En Celsius: %lf \n", result);
                break;
            case 2:
                printf("Elegiste opción 2 \n");
                printf("Introduce la temperatura en Celsius: \n");
                scanf("%lf", &original_temperature);
                result = convert_celsius_farenheit (original_temperature);
                printf ("En Farenheits: %lf \n", result);
                break;
            case 3:
                printf("Elegiste opción 3 \n");
                printf("Introduce la temperatura en Celsius: \n");
                scanf("%lf", &original_temperature);
                result = convert_celsius_kelvin (original_temperature);
                printf ("En Kelvin: %lf \n", result);
                break;
            case 4:
                printf("Elegiste opción 4 \n");
                printf("Introduce la temperatura en Kelvins: \n");
                scanf("%lf", &original_temperature);
                result = comvert_kelvin_celsius (original_temperature);
                printf ("En Celsius: %lf \n", result);
                break;
            case 5:
                printf("Elegiste opción 5 \n");
                printf("Introduce la temperatura en Farenheits: \n");
                scanf("%lf", &original_temperature);
                result = convert_farenheit_kelvin (original_temperature);
                printf ("En Kelvins: %lf \n", result);
                break;
            case 6:
                printf("Elegiste opción 6 \n");
                printf("Introduce la temperatura en Kelvins: \n");
                scanf("%lf", &original_temperature);
                result = convert_kelvin_farenheit (original_temperature);
                printf ("En Farenheits: %lf \n", result);
                break; 
            case 7:
                printf("Saliendo del menu \n");
                break;
            default:
                printf("Opcion invalida");
        }
    } while (option <= 6) // se repite el bucle mientras la opción sea menor o igual a 6
    return 0;
}

// VERSIÓN MEJORADA 
// El código de antes lee la opción solo una vez antes del bucle
// - Si el usuario elige una opción válida (por ejemplo, 2), el bucle entra.
// - Pero nunca vuelve a pedir una nueva opción, así que se repite con la misma opción una y otra vez.

#include <stdio.h>

// Funciones de conversión

double convert_fahrenheit_celsius(double original_temperature){
    return (original_temperature - 32) / 1.8;
}

double convert_celsius_fahrenheit(double original_temperature){
    return (original_temperature * 1.8) + 32;
}

double convert_celsius_kelvin(double original_temperature){
    return original_temperature + 273.15;
}

double convert_kelvin_celsius(double original_temperature){
    return original_temperature - 273.15;
}

double convert_fahrenheit_kelvin(double original_temperature){
    return ((original_temperature - 32) / 1.8) + 273.15;
}

double convert_kelvin_fahrenheit(double original_temperature){
    return ((original_temperature - 273.15) * 1.8) + 32;
}

int main() {
    int option;
    double original_temperature;
    double result;

    do {
        printf("\n qqqqqqqqqqqqqqqqqqqqqqqqqqq \n");
        printf(" -- CONVERSOR TEMPERATURA -- \n");
        printf(" qqqqqqqqqqqqqqqqqqqqqqqqqqq \n");
        printf("Elige una opcion:\n");
        printf("1. Fahrenheit a Celsius\n");
        printf("2. Celsius a Fahrenheit\n");
        printf("3. Celsius a Kelvin\n");
        printf("4. Kelvin a Celsius\n");
        printf("5. Fahrenheit a Kelvin\n");
        printf("6. Kelvin a Fahrenheit\n");
        printf("7. Salir\n");
        printf("Opcion: ");
        scanf("%d", &option);

        switch (option){
            case 1:
                printf("Introduce la temperatura en Fahrenheit: ");
                scanf("%lf", &original_temperature);
                result = convert_fahrenheit_celsius(original_temperature);
                printf("En Celsius: %.2lf\n", result); // 2lf solo coge 2 decimales
                break;
            case 2:
                printf("Introduce la temperatura en Celsius: ");
                scanf("%lf", &original_temperature);
                result = convert_celsius_fahrenheit(original_temperature);
                printf("En Fahrenheit: %.2lf\n", result);
                break;
            case 3:
                printf("Introduce la temperatura en Celsius: ");
                scanf("%lf", &original_temperature);
                result = convert_celsius_kelvin(original_temperature);
                printf("En Kelvin: %.2lf\n", result);
                break;
            case 4:
                printf("Introduce la temperatura en Kelvin: ");
                scanf("%lf", &original_temperature);
                result = convert_kelvin_celsius(original_temperature);
                printf("En Celsius: %.2lf\n", result);
                break;
            case 5:
                printf("Introduce la temperatura en Fahrenheit: ");
                scanf("%lf", &original_temperature);
                result = convert_fahrenheit_kelvin(original_temperature);
                printf("En Kelvin: %.2lf\n", result);
                break;
            case 6:
                printf("Introduce la temperatura en Kelvin: ");
                scanf("%lf", &original_temperature);
                result = convert_kelvin_fahrenheit(original_temperature);
                printf("En Fahrenheit: %.2lf\n", result);
                break;
            case 7:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida, por favor elige entre 1 y 7.\n");
        }
    } while (option != 7);

    return 0;
}


