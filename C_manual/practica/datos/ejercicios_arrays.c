/*
Almacenar el peso de 5 personas en un array y después mostrar el promedio
*/

#include <stdio.h>

int main () {
    float weight[5]={60, 56.5, 89.4, 107, 73.2};
    float suma = 0;
    int cantidad = 5;
    for (int i = 0; i < 5; i++) {
        printf("Mostrando todos los pesos: %f \n", weight[i]);
    }
    for (int i = 0; i < cantidad; i++) {
        suma += weight[i];
    }
    float media_weight = suma / cantidad;
    printf("El peso promedio es: %f", media_weight);
    return 0;
}

/*
Almacenar el peso de 5 personas en un array, que sea el usuario el que meta estos pesos
y después mostrar el promedio. Además poner un menjae que indique cuantas personas superan el promedio
y cuantas están por debajo
*/

#include <stdio.h>

int main () {
    float weight[5]; // - weight[5]: array donde se guardarán los 5 pesos introducidos por el usuario.


a o por debajo del promedio.

    float suma = 0; // - suma: variable para acumular la suma total de los pesos.
    int cantidad = 5; // - cantidad: número total de personas (5).
    int encima_promedio = 0; // contador encima_promedio para saber cuántas personas están por encima
    int debajo_promedio = 0; // debajo_promedio para saber cuantas estan por debajo

    // Entrada de datos
    for (int i = 0; i < cantidad; i++) { // - Se usa un bucle for para repetir la acción 5 veces.
        printf("Introduce el peso de la persona %d: ", i + 1);
        scanf("%f", &weight[i]);
        suma += weight[i]; // - Cada peso se suma a suma para luego calcular el promedio.
    }

    // Cálculo del promedio
    float promedio_weight = suma / cantidad;
    printf("\nEl promedio de los pesos es: %.2f kg\n", promedio_weight);

    // Contar cuántos están por encima o por debajo
    for (int i = 0; i < cantidad; i++) { // - Se recorre el array de pesos.
        if (weight[i] > promedio_weight) { // si el peso introducido es mayor que el promedio
            encima_promedio++; // se incrementa el contador encima_promedio
        } else if (weight[i] < promedio_weight) {  // si el peso introducido es menor que el promedio
            debajo_promedio++; // se incrementa el contador debajo_promedio
        }
    }

    // Mostrar resultados
    printf("Personas por encima del promedio: %d\n", encima_promedio);
    printf("Personas por debajo del promedio: %d\n", debajo_promedio);

    return 0;
}

/*
Dado un array de 10 elementos mostrar el máximo y el mínimo
*/

#include <stdio.h>

int main() {
    int numeros[10] = {12, 45, 3, 67, 23, 89, 5, 34, 76, 10};
    int max = numeros[0]; // se incializa la variable desde la posición 0 para hacer las comparaciones
    int min = numeros[0]; // se incializa la variable desde la posición 0 para hacer las comparaciones

    for (int i = 1; i < 10; i++) { // Se inicia un bucle que recorre el array desde el segundo elemento
                                  // (i = 1) hasta el último (i = 9).
                                 // ya usamos el primer elemento para inicializar max y min.

        if (numeros[i] > max) {
            max = numeros[i]; // Si el número actual (numeros[i]) es mayor que el valor guardado en max, 
                              // actualizamos max.
        }
        if (numeros[i] < min) {
            min = numeros[i]; // Si el número actual es menor que el valor guardado en min, 
                             // actualizamos min.
        }
    }
    /*
    Al terminar el bucle, max contiene el número más grande del array y min el más pequeño.
    Se imprimen ambos valores en pantalla.
    */
    printf("El valor máximo es: %d\n", max);
    printf("El valor mínimo es: %d\n", min);

    return 0;
}

/*
Ejercicio 6: Promedio de números
Objetivo: Crear un arreglo de 10 enteros.
Tareas:
- Leer los valores.
- Calcular y mostrar el promedio.
*/

tipo nombre_array[tamaño] = {indice1, indice2, indice3, indice4, indice5};
// crear el array
int num_array[10] = {1,2,3,4,5,6,7,8,9,10};
// mostrar todos los valores
int main (){
    int num_array[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: %d \n", i, num_array[i]);
    }
    return 0;
}

// hacer el promedio
#include <stdio.h>

int main() {
    int num_array[10] = {1,2,3,4,5,6,7,8,9,10}; // Declara un array de enteros llamado num_array con 10 
                                                // elementos. Se inicializa con los números del 1 al 10.
    int suma = 0; // Declara una variable entera suma y la inicializa en 0.
                 // Se usará para acumular la suma de todos los elementos del array.
    int cantidad = 10; //Declara una variable cantidad con valor 10.
                      // Representa el número total de elementos del array.
    // Sumar todos los elementos
    /*
    Es un bucle for que recorre el arreglo.
    - int i = 0: empieza en la primera posición del arreglo (índice 0).
    - i < cantidad: continúa mientras i sea menor que 10.
    - i++: incrementa i en 1 en cada iteración.
    Dentro del bucle:
    - suma += num_array[i];
    - Esto es equivalente a suma = suma + num_array[i];
    - Va sumando cada elemento del arreglo a la variable suma.
    */
    for (int i = 0; i < cantidad; i++) {
        suma += num_array[i];
    }

    // Calcular el promedio (como número decimal)
    /*
    Se declara una variable promedio de tipo float para almacenar el resultado con decimales.
    (float)suma convierte la suma entera a decimal para evitar errores de división entera.
    Luego se divide entre cantidad (10) para obtener el promedio.
    */
    float promedio = (float)suma / cantidad;

    printf("La suma es: %d\n", suma); // Imprime el valor de suma en pantalla.%d es el formato para enteros.
    printf("El promedio es: %.2f\n", promedio);
    //Imprime el promedio.%.2f muestra el número decimal con 2 cifras decimales.

    return 0; // Finaliza la función main.
}

/*
Ejercicio 7: Invertir array
Objetivo: Leer 5 números en un array y mostrarlo en orden inverso.
*/

int list_num[5]={1,2,3,4,5};

int main () {
    /*
    - Declara un array de 5 enteros llamado list_num.
    - Los valores están predefinidos: índice 0 tiene el 1, índice 1 tiene el 2, etc
    */
    int list_num[5]={1,2,3,4,5};
    printf("Mostrando array de números en orden inverso");
    /*
    - Bucle for que empieza en i = 4 (último índice del array).
    - Se repite mientras i sea mayor o igual a 0.
    - En cada iteración, i-- reduce el índice en 1.
    */
    for (int i = 4; i >= 0; i--) {
        /*
        - Imprime el índice actual (i) y el valor correspondiente del array (list_num[i]).
        - Por ejemplo, cuando i = 4, imprime Elemento 4: 5.
        */
        printf("Elemento %d: %d \n", i, list_num[i]);
    }
    return 0;
}

/*
Ejercicio 8: Buscar un valor
Objetivo: Leer 10 números en un array.
Tareas:
- Leer los valores.
- Calcular y mostrar el promedio.
*/

int list_num2[10] = {12,13,14,15,16,17,18,19,20,21};

int main (){
    int list_num2 = {12,13,14,15,16,17,18,19,20,21};
    int suma = 0;
    int cantidad = 10;

    for (int i = 0; i<10; i++){
        printf("%d", list_num2[i]);
    }
    for (int i = 0; i < cantidad; i++) {
        suma += list_num2[i];
    }
    float promedio = (float)suma / cantidad;
    return 0;
}

/*
Ejercicio 7: Invertir arreglo
Objetivo: Leer 5 números en un arreglo y mostrarlo en orden inverso.
*/

int five_list[5]={1,11,111,1111,11111};

int main () {
    int five_list[5]={1,11,111,1111,11111};

    printf("Mostrando array five_list en orden inverso \n");
    for (int i=4; i>=0; i--) {
        printf("%d \n", five_list[i]);
    }
    return 0;
}

/*
Ejercicio 8: Buscar un valor
Objetivo: Leer 10 números en un array.
Tareas:
- Pedir al usuario un número.
- Verificar si está en el array y en qué posición.
*/

int list_numm[10] = {12,13,14,15,16,17,18,19,20,21};

int main () {
    int list_numm[10] = {12,13,14,15,16,17,18,19,20,21};
    int num;
    printf("Indique un número para comprobar que pertenece al Array list_numm: \n");
    scanf("%d", &num);
    for (int i = 0; i <= 9; i++) {
        if (num == list_numm[i]) {
            printf("El número %d SI pertenece al Array list_numm. \n", num);
        }
    }
    return 0;
}

// CON MENSAJE DE NO PERTENECER A LA LISTA -- USANDO FLAG

/*
Una flag (bandera) es simplemente una variable booleana (en este caso un int) 
que usamos para recordar si algo ha ocurrido. En este ejemplo, 
la usamos para saber si el número fue encontrado en el array.
*/

#include <stdio.h>

int main () {
    int list_numm[10] = {12,13,14,15,16,17,18,19,20,21}; // Se crea un array de 10 enteros llamado list_numm.
    int num; // almacenará el número que el usuario introduzca.
    int encontrado = 0; // encontrado: es una bandera (flag) que indica si el número fue encontrado en el array.

    printf("Indique un número para comprobar si pertenece al array list_numm:\n"); // - printf: muestra un mensaje en pantalla.
    scanf("%d", &num); // scanf: lee un número entero introducido por el usuario y lo guarda en num.

    for (int i = 0; i <= 9; i++) {
    /*
    - Se recorre el array desde la posición 0 hasta la 9.
    - En cada iteración, se compara num con el valor en list_numm[i].
    - Si hay coincidencia:
    - Se imprime que el número fue encontrado y en qué posición.
    - Se cambia encontrado a 1.
    - Se usa break para salir del bucle (ya no hace falta seguir buscando).
    */
        if (num == list_numm[i]) {
            printf("El número %d SÍ pertenece al array list_numm en la posición %d.\n", num, i);
            encontrado = 1; // sirve como una bandera de confirmación. Sin ella, el programa no sabría si encontró el número o no, y podría dar un mensaje erróneo.
            break; // Ya lo encontramos, no hace falta seguir
        }
    }
    if (!encontrado) { // if (encontrado == 0) { -- no se encontró
    /*
    - Si encontrado sigue siendo 0, significa que el número no estaba en el array.
    - Se imprime un mensaje indicando que no pertenece.
    */
        printf("El número %d NO pertenece al array list_numm.\n", num);
    }
    return 0;
}

 
/*
Ejercicio 9: Frecuencia de números
Objetivo: Contar cuántas veces aparece cada número del 0 al 9 en un arreglo de 20 elementos.
*/

int ist[20]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,8,1};

// Es necesario crear un array auxiliar que almacene las frecuencias
/*
- Este array tiene 10 posiciones (índices del 0 al 9).
- Cada posición representa cuántas veces aparece ese número.
*/
int frecuencia[10] = {0};

#include <stdio.h>

int main () {
    int list[20] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,8,1};
    int frecuencia[10] = {0};  // Array para contar frecuencia de 0 a 9

    // Contar ocurrencias
    // Recorrer el array original y contar
    for (int i = 0; i < 20; i++) {
        // - list[i] es el número actual.
        // - frecuencia[list[i]]++ incrementa el contador correspondiente.
        frecuencia[list[i]]++; // 
    }
    // Mostrar resultados
    printf("Frecuencia de números del 0 al 9:\n");
    for (int i = 0; i < 10; i++) {
        printf("El número %d aparece %d veces.\n", i, frecuencia[i]);
    }

    return 0;
}

/*
Ejercicio 10: Mostrar array
Objetivo: Leer 7 números en un array y mostrarlo en orden.
*/

int sept_list[7]={2,22,222,2222,22222,222222,2222222};

int main() {
    int sept_list[7]={2,22,222,2222,22222,222222,2222222};

    printf("--__--__--__--__--__--__--__--__--__--__-- \n");
    printf("Mostrando contendio Array cinq_list \n");
    printf("--__--__--__--__--__--__--__--__--__--__-- \n");
    for (int i = 0; i <= 6; i++) {
        printf("%d \n", sept_list[i]);
    }
    return 0;
}

/*
Ejercicio 11: mostrar array
Objetivo: Leer 4 palabras en un array y mostrarlo en orden.
*/

char *four_words[4]={"asd","qwe","tyu","vbn"};

int main () {
    char *four_words[4]={"asd","qwe","tyu","vbn"};
    printf("--__--__--__--__--__--__--__--__--__--__-- \n");
    printf(" Mostrando contendio Array \n");
    printf("--__--__--__--__--__--__--__--__--__--__-- \n");
    for (int i = 0; i < 4; i++) {
        printf("%s \n", four_words[i]);
    }
    return 0;
}


