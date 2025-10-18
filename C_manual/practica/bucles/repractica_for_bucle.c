/*
Tabla de multiplicar personalizada
Enunciado:
Escribe un programa en C que:
- Pida al usuario un número entero entre 1 y 10.
- Imprima la tabla de multiplicar de ese número desde el 1 hasta el 10.
- Ejemplo de salida si el usuario ingresa 4:
*/


/*
 Imprimir los números del 1 al N
Enunciado:
Escribe un programa que pida al usuario un número entero positivo N 
y luego imprima los números del 1 al N.
*/

int main () {
    int num;
    printf("Indique un número: \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        printf("%d \n", i);
    }
    return 0;
}

/*
Imprimir los números pares entre 1 y 100
Enunciado:
Escribe un programa que imprima todos los números pares entre 1 y 100 usando un bucle for.
*/

int main () {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d \n", i);
        }
    }
    return 0;
}

/*
Cuenta regresiva
Enunciado:
Escribe un programa que imprima una cuenta regresiva desde 10 hasta 1.
*/

int main () {
    for (int i = 10; i >= 1; i--){
        printf("%d \n", i);
    }
    return 0;
}

/*
Suma de los primeros N números
Enunciado:
Pide al usuario un número N y calcula la suma de los números del 1 al N.
*/

int main () {
    int num;
    int sum=0;
    printf("Indique un número: \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    printf("La suma total de los números desde el 1 al indicado es: %d \n", sum);
    return 0;
}

/*
Contar múltiplos de 3 entre 1 y 100
Enunciado:
Escribe un programa que cuente cuántos números entre 1 y 100 son múltiplos de 3.
Suma todos los múltiplos de 3.
*/

int main () {
    int sum = 0;
    int count = 0;
    printf("Mostrando múltiplos de 3 desde el 1 al 100: \n")
    // Muestra todos los múltiplos de 3 entre el 1 y el 100
    for (int i = 1; i<=100; i++) {
        if (i % 3 == 0) {
            printf("%d \n", i);
        }
    }
    // Contar cuantos múltiplos de 3 hay entre el 1 y 100
    for (int i = 1; i<=100; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    for (int i = 1; i<=100; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }
    printf("Suma total de múltiplos de 3 desde el 1 al 100: %d \n", sum)
    printf("Número total de múltiplos de 3 desde el 1 al 100: %d \n", count)
    return 0;
}

/*
Invertir el orden de impresión
Enunciado:
Pide al usuario un número N y muestra los números desde N hasta 1 en orden descendente.
*/


 int main () {
    int num;
    printf("Indique un número: \n");
    scanf("%d", &num);
    for (int i = num; i >= 1; i-- ) {
        printf("%d \n",i);
    }
    return 0;
 }   

