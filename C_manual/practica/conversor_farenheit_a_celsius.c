/* 
Enunciado del ejercicio: Conversor de Fahrenheit a Celsius
Objetivo:
Escribe un programa en lenguaje C que:
- Solicite al usuario que introduzca una temperatura en grados Fahrenheit.
- Convierta esa temperatura a grados Celsius usando la fórmula:
C = \frac{5}{9} \times (F - 32)- Muestre el resultado de la conversión con dos decimales.

Requisitos adicionales:
- El programa debe permitir introducir valores decimales (usa float o double).
- El resultado debe mostrarse con un mensaje claro, incluyendo ambas temperaturas.
*/

#include <stdio.h> // inclusion de librerias

double comvert_celsius(double farenheit){
    return (farenheit - 32) / 1.8;
}

int main(){
    double farenheit;
    double celsius;
    
    printf("-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__- \n");
    printf("Esto es un conversor de grados farenheit a celsius \n");
    printf("-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__- \n");
    printf("Introduzca la temperatura en farenheit \n");
    scanf("%lf", &farenheit);
    celsius = comvert_celsius(farenheit);
    printf("%lf grados farenheit son %lf grados celsius, tras aplicar la fórmula (Fº - 32)/1.8", farenheit, celsius);
    return 0;
}
