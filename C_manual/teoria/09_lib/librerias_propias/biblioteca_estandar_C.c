/*
QUE SON:

Conjunto de librerías estandarizadas por la ISO
Presentes en cualquier compilador de C
CONTIENEN FUNCIONES para operaciones comunes que se pueden realizar en nuestros programas
como manejo de cades, E/S, funciones matemáticas...
*/

// para hacer uso de estas librerías es necesario incluir su fichero de cabecera

/*
LISTADO LIBRERÍAS C
- assert.h --> operaciones relacionadas con depuración del programa
- ctype.h --> clasificación y conversión de tipos de datos
- errno.h --> manejo de errores
- float.h --> valores máximos y mínimos de datos reales
- limits.h --> valores máximos y mínimos de datos enteros
- locale.h --> adaptar un programa a un país determinado
- math.h --> funciones matemáticas
- setjmp.h --> funciones para crear y manipular el entorno al hacer llamadas: registros, pila...
- signal.h --> manipular las distintas señales del sistema
- stdarg.h --> manipular listas de argumentos de longitud variable
- stddef.h --> define algunos tipos especiales y el símbolo NULL
- stdio.h --> operaciones de entrada y salida
- stdlib.h --> funciones de utilidad como las rutinas de conversión de cadenas, generdir de números aleatorio
                rutinas de asignación de memoria, y rutinas de control de procesos
- string.h --> tratamiento de cadenas
- time.h --> manipular fecha y hora del sistema
*/

// // -- -- PROBATURA USO LIBRERÍAS -- -- // //

// para incluir librerías --> #include <libreria.h>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h> // para manejo de cadenas



int main () {
    printf("%d \n", isdigit('6')); // ctype --> verificar si el carácter '6' es un dígito decimal 
                                  //(es decir, entre '0' y '9').
                                  // Si el carácter es un dígito, devuelve un valor distinto de cero 
                                  //(normalmente 1). Si no es un dígito, devuelve 0.

    printf("%.2f \n", sqrt(7));  // math.h --> devuelve la raíz cuadrada de 7

    printf("%d \n", INT_MAX); // limits.h --> entero maximo que se puede usar

    srand(time(null)) // stdlib.h --> genera numeros aleatorios
    printf("%d", rand() % 11); // time.h
    // generará un n aleatorio entre 0 y 10

    // devolver longitud de una cadena - nº caracteres de los que consta
    printf("%d \n", strien("cadena de prueba")); 

    // de la libreria time - crea fecha actual - devuelve el tipo de dato timet
                            // diftime - devuelve diferencia entre dos fechas
    // 2 variables de tipo time_t que van a almacenar dos fechas 
    time_t comienzo,final;
    comienzo = time ( NULL );// a comienzo se le asigna una fecha, con NULL se guarda en la variable
                                    // podría ponerse un puntero y se guardaría en esa dirección de memoria
    // bucle q se ejecuta 100mil veces 
    for (i = 0; i < 100000; i++) {
        printf("-"); // para que haya una diferencia de tiempo
    }                //  entre que se crea la variable comienzo y la final
    final = time ( NULL );
    // Se muestra la diferencia entre ambas fechas
    printf("%f \n", difftime(comienzo,final));
}
