/* 
Enunciado:
Escribe un programa en lenguaje C que calcule el área de un triángulo. El programa debe pedir al usuario que introduzca la base y la altura del triángulo, y luego mostrar el área calculada.
Requisitos:
- Solicitar al usuario la base del triángulo (número decimal).
- Solicitar la altura del triángulo (número decimal).
- Calcular el área usando la fórmula:
\text{Área} = \frac{\text{base} \times \text{altura}}{2}- Mostrar el resultado con dos decimales.
*/

#include <stdio.h>

double calculate_area_triangle (double height, double base) {
    return (base * heigh) / 2;
}


int main () {
    double height;
    double base;
    double result;

    printf("-------------------------------- \n");
    printf("Calcular área de un triángulo \n");
    printf("-------------------------------- \n");
    printf("Por favor, introduce la base del triángulo: \n");
    scanf("%lf", &base);
    printf("Por favor, introduce la altura del triángulo: \n");
    scanf("%lf", &height);
    result = calculate_area_triangle (base, height);
    printf("Muy bien, el área del triángulo es: %lf cm2 \n", result); 
    return 0; // - Para mostrar el área con dos decimales, usa %.2lf en el printf
}
