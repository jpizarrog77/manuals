// -------------------------- //
// TIPOS DE DATOS COMPUESTOS //
// ------------------------ //

// --------------//
// -- ARRAYS -- //
// ------------//

// colección de datos un mismo tipo. 

// sintaxis general
tipo nombre_array[tamaño];
tipo nombre_array[tamaño] = {indice1, indice2, indice3, indice4, indice5};
int edades[5]; // array de 5 enteros
// acceso a índices del array
edades[0] = 25; // primer elemento
edades[1] = 30; // segundo elemento
// leer y modificar valores del array
printf("%d", edades[2]); // imprime el tercer valor
edades[2] = 35;          // modifica el tercer valor
// ejemplo completo
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    // Acceder e imprimir
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeros[i]);
    }

    // Modificar
    numeros[2] = 99;
    printf("Nuevo valor en índice 2: %d\n", numeros[2]);

    return 0;
}

// ------------------//
// -- ENUMERADOS -- //
// ----------------//

/*
Es un tipo de dato definido por el programador que consiste en un conjunto de constantes enteras 
con nombre. Por defecto, el primer valor tiene el número 0, y los siguientes se incrementan en uno, 
a menos que se especifique lo contrario
*/

// Definir el tipo enumerado
enum DiaSemana { Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo };
// Declarar variables de ese tipo
enum Color miColor;
// Asignar valores
miColor = Verde;

// -------------------------//
// -- CADENAS DE TEXTO  -- //
// -----------------------//

char cadena[100] = "esto es una cadena"; // acaba en /0 es el caracter de fin de cadena
char cadena2[100] = {'e','s','t','a'};

// como imprimir por consola una cadena
for (int i = 0; i < 100; i++) {
    printf("%c", cadena[i]);
}
// forma más sencilla de imprimir toda la cadena
printf("\n");
printf("\n %s", cadena2);
// si quiero imprimir un caracter en específico
cadena2[3]; // se imprimiría el tercer caracter
// modificar un caracter de la cadena
cadena2[4]='A';
// pedir que el usuario meta las cadenas de texto
printf("Introduce una cadena de texto: \n");
scanf("%s", cadena2); // problema -- si usuario mete espacio solo mete caracteres hasta este
// solucion - gets -- guarda todo lo que hay en buffer
gets(cadena2);


// -------------------//
// -- ESTRUCTURAS -- // registros
// -----------------//
// agrupa variables de distintos tipos bajo un mismo nombre.

// sintaxis general
struct NombreEstructura {
    tipo campo1;
    tipo campo2;
    ...
};

struct NombreEstructura {
    int dato_entero;
    float dato_float;
    char dato_cadena[30];
    int dato_array[0] = 4 
};

variable.dato_entero = 20;
variable.dato_float = 5.5;
strcpy(variable.dato_cadena,"nueva cadena");
variable.dato_array

// acceder a los campos
printf("El dato de tipo float de mi struct es: %f", variable.dato_float);

/////
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};
// crear una variable de tipo struct
struct NombreEstructura variable;
struct Persona p1;
// acceder a campos
variable.campo

p1.edad = 30;
strcpy(p1.nombre, "Ana"); // funcion para caracteres
p1.altura = 1.65;

// inicializar una estructura
struct NombreEstructura variable = {valor1, valor2, ...};

struct Persona p2 = {"Luis", 28, 1.75};

// structures en Arrays
struct fecha fechas[5]{
    {1,5,2000},
    {11,3,2020},
    {20,6,2011},
    {7,7,2010},
    {1,5,2005}
};

struct mi_registro array[10];
array[0].dato_entero = 7;
printf("El dato de tipo entero del primer elemento es: %d", array[0].dato_entero);

// usar estruturas en funciones
void mostrar(struct Persona p);

void mostrar(struct Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Altura: %.2f\n", p.altura);
}
// estructuras anidadas - es una estructura que contiene otra estructura como uno de sus campos.
struct Direccion {
    char calle[50];
    int numero;
};

struct Persona {
    char nombre[50];
    int edad;
    struct Direccion direccion;
};
//
struct Persona p1;

strcpy(p1.nombre, "Laura");
p1.edad = 25;
strcpy(p1.direccion.calle, "Av. Central");
p1.direccion.numero = 123;
// arreglos de estructuras - permite almacenar múltiples registros del mismo tipo.
struct Persona lista[10];

for (int i = 0; i < 3; i++) {
    printf("Ingrese nombre: ");
    scanf("%s", lista[i].nombre);
    printf("Ingrese edad: ");
    scanf("%d", &lista[i].edad);
}


// ----------------------------//
// -- ESTRUCTURAS ANIDADAS -- // registros
// --------------------------//
// estructura anidada es una struct que contiene otra struct como uno de sus campos

int main () {
    struct tipo1 { // esta struct es normal, con sus dos campos
        int entero1;
        char caracter1;
    };

    struct tipo2 { // contiene la struct tipo 1 como uno de sus campos
        float real1;
        struct tipo1 variable1; 
    };
}

// inicializamos la varible normalmente // inicializar --> se le asigna un valor por primera vez
struct tipo2 variable2;
variable2.real1 = 5.5;
// inicializamos variables del struct que contiene el struct tipo 2
variable2.variable1.entero1 = 7;
// otra forma de hacerlo
struct tipo2 variable2 = {5.5,{7,'c'}};
// si quiero mostrar por pantalla el valor de entero1
printf("%d", variable2.variable1.entero1); // - accediendo al campo entero1 dentro de variable1, 
                                          // que está dentro de variable2.

// -------------------------------//
// -- ARRAYS BIDIMIENSIONALES -- //
// -----------------------------//

int m[3][2]= {{1,2},{3,4},{5,6}};// array de 3 elementos en el que cada elemento es a su vez otro array
                                // con dos elementos de tipo entero
                                // int m[3][2] declara una matriz de 3 filas y 2 columnas

// Como se accede a los elemtos de este vector
// sintaxis general --> m[fila][columna]
/* - El primer índice (fila) indica qué fila estás mirando.
- El segundo índice (columna) indica qué columna dentro de esa fila */

m[0][0]  // Accede al número 1
m[0][1]  // Accede al número 2
m[1][0]  // Accede al número 3
m[1][1]  // Accede al número 4
m[2][0]  // Accede al número 5
m[2][1]  // Accede al número 6

// para poder recorrer todos los elementos de ese array bidimensional
#include <stdio.h>

int main() {
    int m[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++) {      // Recorre las filas
        for (int j = 0; j < 2; j++) {  // Recorre las columnas
            printf("m[%d][%d] = %d\n", i, j, m[i][j]); // imprime la posición del elemento y su valor
            printf("%d \n", m[i][j]) // imprime solo el valor del elemento, no en qué posición está
        }
    }
    return 0;
}

// ----------------------//
// -- CAMPOS DE BITS -- //
// --------------------//

// permiten definir el número exacto de bits que ocupará cada campo dentro de una estructura. 
//Son útiles para ahorrar memoria o representar registros de hardware.

// sintaxis general
struct Nombre {
    tipo nombreCampo1 : númeroDeBits;
    tipo nombreCampo2 : númeroDeBits;
    ...
};

struct Estado {
    unsigned int encendido : 1;
    unsigned int modo : 2;
    unsigned int error : 1;
};
// ejemplo completo
#include <stdio.h>

struct Estado {
    unsigned int encendido : 1;
    unsigned int modo : 2;
    unsigned int error : 1;
};

int main() {
    struct Estado dispositivo;

    dispositivo.encendido = 1;
    dispositivo.modo = 2;
    dispositivo.error = 0;

    printf("Encendido: %u\n", dispositivo.encendido);
    printf("Modo: %u\n", dispositivo.modo);
    printf("Error: %u\n", dispositivo.error);

    return 0;
}
// modificar un campo de bits
struct Estado {
    unsigned int encendido : 1;
    unsigned int modo : 2;
    unsigned int error : 1;
};

struct Estado dispositivo;

dispositivo.encendido = 1;  // Activar
dispositivo.modo = 3;       // Cambiar modo (máximo valor con 2 bits)
dispositivo.error = 0;      // Sin error

// ---------------//
// -- UNIONES -- //
// -------------//

// es similar a una estructura, pero todos los campos comparten el mismo espacio de memoria.
// permite almacenar diferentes tipos de datos en la misma ubicación de memoria.
// Solo uno de los campos puede contener un valor válido a la vez.
// El tamaño de una unión es igual al del campo más grande.

// sintaxis general 
union NombreUnion {
    tipo campo1;
    tipo campo2;
    ...
};

union Dato {
    int i;
    float f;
    char c;
};
// crear una variable de unión
union Dato valor; // Esto crea una variable valor que puede almacenar un int, float o char, 
                 // pero solo uno a la vez.

// acceder y modificar campos
valor.i = 42; // Cada asignación sobrescribe el valor anterior, ya que todos los campos comparten memoria.
valor.f = 3.14;
valor.c = 'A'; 
