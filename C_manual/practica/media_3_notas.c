/* 
Objetivo:
Escribe un programa en lenguaje C que:
- Solicite al usuario su nombre.
- Pida tres calificaciones (notas) en formato decimal (por ejemplo, 7.5, 8.0, 6.3).
- Calcule el promedio de las tres notas.
- Muestre un mensaje personalizado con el nombre del usuario y su promedio.
- Indique si el estudiante ha aprobado o no. Se considera aprobado si el promedio es mayor o igual a 6.0.
*/

#include <stdio.h>

double media_notas (double nota1, double nota2, double nota3){
    return (nota1 + nota2 + nota3) / 3;
}

int main (){
    char nombre[30];
    double nota1, nota2, nota3;
    double media;
    printf("Introduce tu nombre: \n");
    scanf("%29s", &nombre);
    printf("Para calcular tu nota media se necesita que introduzcas 3 notas separadas por un espacio: \n");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    media = media_notas(nota1, nota2, nota3);
    printf("Hola %s!, tu nota media es: %lf", nombre, media);
     if (media >= 6){
        printf("Estas aprobado! \n");
    } else {
        printf("No has aprobado :( \n");
    }
    return 0;
}