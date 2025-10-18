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

void show_num (int num){ 
    for (int i = 1; i <= num; i++)
    printf("%d", num);
}

int main (){
    int num;
    printf("Indique un núméro: \n");
    scanf("%d", &num);
    show_num (num);
    return 0;
}

/*
Imprimir los números pares entre 1 y 100
Enunciado:
Escribe un programa que imprima todos los números pares entre 1 y 100 usando un bucle for.
*/

#include <stdio.h>

void show_par_num (void){
    for (int i=1; i <= 100; i++){
        if (i % 2 == 0) {
            printf("%d \n", i);
        }
    }
}

int main() {
    show_par_num();
    return 0;
}

/*
Cuenta regresiva
Enunciado:
Escribe un programa que imprima una cuenta regresiva desde 10 hasta 1.
*/

#include <stdio.h>

void regresive_count (void){
    for (i=10; i >= 1; i--){  // mientras i sea mayor o igual a 1 el bucle continua
        printf("%d \n", i);
    }
}

int main () {
    int i;
    printf("Cuenta regresiva desde 10 \n");
    regresive_count();
    return 0;
}

/*
Suma de los primeros N números
Enunciado:
Pide al usuario un número N y calcula la suma de los números del 1 al N.
*/

#include <stdio.h>

int sumN_primeros (int number){
    for(){

    }
}

int main (){

    return 0;
}

/*
Contar múltiplos de 3 entre 1 y 100
Enunciado:
Escribe un programa que cuente cuántos números entre 1 y 100 son múltiplos de 3.
*/

#include <stdio.h>

void show_multiples_3(void) {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }
}

int count_multiples_3(void) {
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            count++; // cuanta numero de valores
        }
    }
    return count;
}

int sum_multiples_3(void) {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            sum += i; // suma cada valor
        }
    }
    return sum;
}

int main() {
    printf("Múltiplos de 3 entre 1 y 100:\n");
    show_multiples_3();

    int cantidad = count_multiples_3();
    int suma = sum_multiples_3();

    printf("Cantidad de múltiplos de 3: %d\n", cantidad);
    printf("Suma total de los múltiplos de 3: %d\n", suma);

    return 0;
}


/*
Invertir el orden de impresión
Enunciado:
Pide al usuario un número N y muestra los números desde N hasta 1 en orden descendente.
*/

int show_N_descente (int number){
    for(int i=number; i >= 1; i--) {
        printf("%d \n", i);
    }
}

// Calcula la suma desde N hasta 1
void sum_N_descendente(int number) {  // declara una función que recibe un entero number como parámetro.

    int suma = 0; // - Se crea una variable llamada suma que empieza en 0.
                 // - Esta variable va a acumular la suma de los números.
    for (int i = number; i >= 1; i--) {
    /*
    - Se inicia un bucle for con i = number.
    - Mientras i sea mayor o igual a 1, el bucle continúa.
    - En cada vuelta, i se reduce en 1 (i--), lo que genera una cuenta regresiva.
    */
        suma += i;
        /*
        - En cada iteración, el valor de i se suma a la variable suma.
        - Es equivalente a: suma = suma + i
        */
    }
    return suma; // Una vez que el bucle termina, se devuelve el valor total acumulado en suma.
}


int main () {
    int number;
    printf("Introduzca un número entero: \n");
    scanf("%d", &number);
    show_N_descente(number);
    int suma = sum_N_descendente(number);
    printf("La suma de los números desde %d hasta 1 es: %d\n", number, suma);
    return 0;
}
    
/*
Bucle que imprima todos los números primos desde 100 a 1
*/


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

