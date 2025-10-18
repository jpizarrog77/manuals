// --------- //
// PUNTEROS //
// ------- //

 /* te permite acceder directamente a la memoria, manipular datos de forma eficiente 
 y construir estructuras complejas como arrays dinámicos, listas enlazadas y más. 
 Un puntero es una variable que almacena la dirección de memoria de otra variable. 
 En lugar de guardar un valor directamente, guarda dónde está ese valor en la memoria.
 */

 // -- Sintaxis general -- //
///////////
int numero = 10; // variable de tipo entero
int *punteroANumero = &numero; // p es un puntero a int, y guarda la dirección de memoria de la variable numero
///////////
// comprobamos el valor de esas variables
printf("El puntero punteroANumero contiene la direccion de memoria: %p \n", &punteroANumero);
// imprimimos el valor almacenado en esa dirección de memoria a la que apunta el puntero
printf("El valor de la variable situada en la dirección de memoria a la que apunta es: %d \n", *punteroANumero);
///////////
// se pueden usar punteros en cadenas
char cadena[30] = "esta es una cadena de prueba"
// creamos el puntero que apunte a esa cadena
char *punteroACadena = &cadena[0]; // el puntero apunta a la primera posición de esa cadena
// probamos a imprimir todos los caracteres de esa cadena usando el puntero
for(int i = 0; i < 30; i++) {
    printf("%c ", *(punteroACadena+i));
}
///////////
//como recorrer un array empleando punteros
int array[5]={1,2,3,4,5};
// creamos puntero que apunte a su primera posición
int *punteroAArray = &array[0];
// imprimir todos los valores del array con loop for
for (int i = 0;i < 5 ;i++) {
    printf("%d ", *(punteroAArray + i));
}
///////////
// Tambien se pueden crear punteros a struct
struct mi_struct {
    int num;
    char car;
};
// inicializamos variable del struct
struct mi_struct s1;
// creamos el puntero al struct y va a apuntar a la dirección de memoria donde esta s1
struct mi_struct *r2= &s1;
// como se accede a los campos del struct desde el puntero
(*r2).num = 5 // si quiero acceder al campo num
// otra forma de acceder al campo
r2->car = 's';
// se imprimen sus valores para comprobarlo // cada uno sigue una forma
printf("El campo num del struct al q apunta r2 es: %d \n", (*r2).num); // desde el puntero
printf("El campo car del struct s1 al que apunta r2 es: %c \n", r1.car) // desde la variable r1

//*************************************************************************************************//

// -- Declaración de punteros -- //

int *p;  // puntero a entero
float *f;  // puntero a flotante
char *c;  // puntero a carácter

// Asignar dirección a puntero //

int x = 10;
int *p = &x;  // p apunta a x

// -- Acceder al valor apuntado -- //

printf("%d\n", *p);  // Imprime el valor de x (10)

// -- Ejemplo -- //

#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Dirección de x: %p\n", &x);
    printf("Valor de p (dirección): %p\n", p);
    printf("Valor apuntado por p: %d\n", *p);

    return 0;
}

// -- Modificar el valor original usando el puntero -- //

printf("%d\n", *p);  // Imprime el valor de x (10)

// -- Punteros y Estructuras -- //

struct Persona {
    char nombre[30];
    int edad;
};

struct Persona p = {"Ana", 25};
struct Persona *ptr = &p;

printf("%s\n", ptr->nombre);  // Accede al campo nombre
ptr->edad = 30;  // Modifica edad

// -- Punteros y Funciones -- //

void modificar(int *n) {
    *n = 100;
}

int main() {
    int x = 5;
    modificar(&x);
    printf("%d\n", x);  // Imprime 100
}

