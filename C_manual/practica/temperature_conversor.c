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