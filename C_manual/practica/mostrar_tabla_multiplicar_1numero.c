/*
Enunciado:
Escribe un programa en lenguaje C que solicite al usuario un número entero positivo 
y muestre su tabla de multiplicar del 1 al 10.
Requisitos:
- Solicitar al usuario un número entero positivo.
- Validar que el número sea mayor que cero. Si no lo es, mostrar un mensaje de error.
- Usar un bucle for para generar y mostrar la tabla de multiplicar.
- Mostrar cada línea en el formato:
n x i = resultado
*/

#include <stdio.h>

// no se puede poner la funcion en int ya que no va a devolver ningun valor numérico
// Si la función solo imprime la tabla, no necesita devolver un valor, 
// entonces debería ser void. Esto indica que no devuelve nada y solo realiza acciones (como imprimir).
void multiplicate_table (int number){
    printf("Esta es la tabla de multiplicar para el número %d: \n", number);
    if (number > 0) {
        // NO poner un return dentro del for, 
        // lo que hace que la función termine en la primera iteración y solo imprimiera un resultado.
        for (int i=1; i <=10; i++){ // los elementos del for se separan por ;
            printf("%d x %d = %d\n", number, i, number * i);
        }
    } else {
        printf("Error, el número debe ser mayor de 0 \n");
    }
}


int main (){
    int number;

    printf("Indique un número para mostrar su tabla de multiplicar: \n");
    scanf("%d", &number);
    multiplicate_table (number);
    return 0;
}

// Es mejor separar tareas que hace la función, el mejor código sería:

#include <stdio.h>

void multiplicate_table(int number) { // aquí se hacen las multiplicaciones
    printf("Esta es la tabla de multiplicar para el número %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main() {
    int number;

    printf("Indique un número para mostrar su tabla de multiplicar: \n");
    scanf("%d", &number);

    if (number > 0) { // aquí se hace solo la validación
        multiplicate_table(number);
    } else {
        printf("Error, el número debe ser mayor de 0\n");
    }

    return 0;
}
