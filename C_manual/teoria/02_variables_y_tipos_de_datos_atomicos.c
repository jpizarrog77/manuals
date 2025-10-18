//---------------------//
// DECLARAR VARIABLES //
//-------------------//
// tipo_dato nombre_variable;

int edad;
float altura;
char letra;

//--------------------------//
// TIPOS DE DATOS ATÓMICOS //
//------------------------//

// char -> cadenas de texto
// int -> números enteros
// float -> números decimales
// double -> números decimales (precisión doble)
// Booleanos -> true o false
// void -> sin tipo, uso especial

//----------------------//
// DECLARAR CONSTANTES //
//--------------------//
// mantienen su valor a lo largo del todo el programa
// 2 OPCIONES
// const tipo_dato nombre_variable = valor_variable;
const float PI = 3.14159;
// #define nombre_variable valor_variable
#define PI 3.14159

//---------------------//
// DECLARAR VOLÁTILES //
//-------------------//

// volatile le indica al compilador que no debe optimizar el acceso a una variable, 
// porque su valor puede cambiar inesperadamente (por ejemplo, por hardware o por otro hilo).

// sintaxis general
volatile tipo nombreVariable;

volatile int bandera; //  le dice al compilador que  puede cambiar en cualquier momento, 
                     // por lo que debe leerla directamente de memoria cada vez

//-------------------------//
// MODIFICADORES DE TIPOS //
//-----------------------//

/* Los modificadores de tipo en C se usan para ajustar el rango, el tamaño y el signo de los datos 
primitivos como int, char, y float. Son muy útiles cuando necesitas optimizar el uso de memoria 
o controlar el comportamiento numérico. */
// [modificador] [tipo base] [nombre_variable];
// signed - permite valores negativos y positivos - Es el valor por defecto para int y char (excepto en algunas arquitecturas).
signed int x = -10;
signed char c = -100;
// unsigned - solo permite valores positivos (incluye 0) - Duplica el rango positivo del tipo base.
unsigned int x = 100;
unsigned char c = 255; // char sin signo puede llegar hasta 255
// short - ocupa menos memoria que int - Útil para ahorrar espacio cuando no necesitas grandes rangos.
short int edad = 25;
// long - amplía el rango del tipo base - ideal para trabajar con números grandes
long int poblacion = 7800000000;
// long long - usado para enteros extremadamente grandes
long long int galaxias = 9223372036854775807;
// se pueden aplicar dos modificadores seguidos
// [signo] [tamaño] [tipo base] [nombre_variable];
unsigned long int numeroGrande;
signed short int edad;

//--------------------------//
// MODIFICADORES DE ACCESO //
//------------------------//

