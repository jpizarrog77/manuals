
///////////////
// Como definir funciones que puedan ser reutilizadas en otras partes del código
// Crear librerías con funciones en un fichero con extensión .c independiente 
// para después referenciar esa librería en el programa


// en operaciones.c se escriben todas las funciones que queremos usar mas tarde en este mismo archivo
// ahora es necesario crear un archivo de headers que haga referencia a estas funciones
    // para que puedan ser usadas. --> un archivo .h, para el ejemplo --> operaciones.h

#include <stdio.h>
#include <stdlib.h>

#include "operaciones.h" // para usar esa biblioteca que hemos creado


int main () {
    double A, double B;
    double r_suma, r_resta, r_mul, r_div;

    printf("Introduce el operando 1: \n")
    scanf("%lf", &A);
    printf("Introduce el operando 2: \n")
    scanf("%lf", &B);

    r_suma = opcion1_sumar(A, B);
    r_resta = opcion2_restar(A, B);
    r_mul = opcion3_multiplicar(A, B);
    r_div = opcion4_dividir(A, B);

    printf("Result Suma: %lf \n", r_suma);
    printf("Result Resta: %lf \n", r_resta);
    printf("Result Multiplicacion: %lf \n", r_mul);
    printf("Result Division: %lf \n", r_div);

    return 0;
}