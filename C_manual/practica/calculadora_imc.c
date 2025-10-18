/*
Escribe un programa en C que:
- Pida al usuario su nombre, peso en kg y estatura en metros.
- Calcule el IMC usando la fórmula:
\text{IMC} = \frac{\text{peso}}{\text{estatura}^2}- Imprima un mensaje personalizado con el resultado.
*/
#include <stdio.h>

float calculate_imc (float peso, float altura){
        float result1 = altura * altura;
        float result2 = peso / result1;
        return result2;
    }

// forma más facil de calcular IMC
/* float calcular_imc(float peso, float altura) {
    return peso / (altura * altura);
} */

int main () {
    float peso;
    char nombre[20];
    float altura;
    float result;

    printf("Para calcular tu IMC, se necesita introducir los siguientes datos \n");
    printf("Introduzca su nombre: \n");
    scanf("%19s", &nombre);
    printf("Introduzca su peso en kgs (ej 80.5) \n");
    scanf("%f", &peso);
    printf("Introduzca su altura en m (ej 1.9) \n");
    scanf("%f", &altura);
    result = calculate_imc (peso, altura);
    printf("Hola %s, tu IMC es igual a: %f \n", nombre, result);
}