// para hacer un comentario de 1 línea

/* Esto es un comentario
   que ocupa varias líneas.
   Muy útil para explicaciones largas. */

//-----------------------------------------//
// EXTENSIONES comunes para archivos en C //
//----------------------------------------//

// .c --> Archivos de código fuente en C
    // contienen definiciones de variables y funciones tanto globales como locales al módulo.
    // La entrada al programa se hace a través de la función mai
// .h --> Archivo de encabezado (header), usado para declarar funciones, macros y estructuras
    // Contienen declaraciones de tipos, variables y/o prototipos de funciones globales.
    // Cada fichero de módulo debe tener un fichero de cabecera asociado
    // Los ficheros de cabecera deben ser incluidos en aquellos ficheros de implementación 
    // que necesitan las declaraciones a través de la directiva del preprocesador #include

/* Supón que estás escribiendo un programa llamado calculadora. Podrías tener:
- calculadora.c: contiene la implementación de funciones como sumar(),
 restar(), etc.
- calculadora.h: contiene las declaraciones de esas funciones para que
 puedan ser usadas en otros archivos .c. */

 // ---------------------------//
 // ENTRADA / SALIDA DE DATOS //
 // -------------------------//
// -- printf - mostrar información en la consola. Puedes imprimir texto, números, caracteres, etc.
// -- scanf - se usa para leer datos ingresados por el usuario desde la consola.

// Especificadores de formato: -- en scanf y printf:
    // %d - entero
    // %f - flotante
    // %s - string / char
    // %c - caracter / char
    // %lf - double
    // %u - imprimir un entero sin signo
    // %x - hexadecimal sin signo
    // %o - octal sin signo
    // %p - dirección de memoria --> printf("%p", ptr);

// -- crear archivo .exe desde consola -> gcc calculadora.c -o calculadora -- //

//---------------------//
// hacer un menú en C //
//-------------------//

/* - do-while: permite repetir el menú hasta que el usuario elija salir.
- switch: evalúa la opción seleccionada.
- scanf: captura la entrada del usuario.
- printf: muestra el menú y los resultados. */

// sintaxis general
int opcion;

do {
    // Mostrar opciones
    printf("1. Opción A\n");
    printf("2. Opción B\n");
    printf("3. Salir\n");
    printf("Elige una opción: ");
    scanf("%d", &opcion);

    // Evaluar opción
    switch (opcion) {
        case 1:
            // Acción para opción A
            break;
        case 2:
            // Acción para opción B
            break;
        case 3:
            // Salir
            break;
        default:
            printf("Opción inválida\n");
    }

} while (opcion != 3);


//------------------------------//
// DIRECTIVAS DEL PREPOCESADOR //
//----------------------------//

/* Se procesan antes de que el compilador compile el código, y son fundamentales para modular, 
condicionar y organizar programas en C.
El preprocesador es una etapa previa a la compilación que interpreta instrucciones especiales 
que comienzan con #. Estas instrucciones no son código C como tal, 
sino órdenes para preparar el código antes de compilarlo. */

// // #define - - Define constantes simbólicas o macros // //
#define PI 3.14159
#define MAX(a,b) ((a) > (b) ? (a) : (b))

// // #include - permite incluir un fichero dentro de otro (tipicamente de cabecera) // //

// Se usa para incluir cabeceras (.h) que contienen funciones, estructuras o definiciones reutilizables.
#include <fichero.h> // el fichero se encuentra en alguno de los directorios indicados 
// por la configuración del proyecto
#include "fichero.h" // el fichero se encuentra en el directorio del fichero que lo incluye 

// // #ifdef / #ifndef  / #endif -  para compilación condicional // //

/* - #ifdef: "si está definido"
- #ifndef: "si NO está definido"
- #endif: marca el final del bloque condiciona
Se usan para incluir o excluir partes del código según si una macro está definida */
#define VERSION_PRO

#ifdef VERSION_PRO
    printf("Versión profesional activada\n");
#else
    printf("Versión básica\n");
#endif

// // #if - #elif // //

// #if
/* Evalúa una expresión constante (normalmente relacionada con macros) y, 
si es verdadera (≠ 0), el bloque de código que sigue se incluye en la compilación.
*/
#define DEBUG 1

#if DEBUG
    printf("Modo depuración activado\n");
#endif

// #elif

/* Permite encadenar condiciones en directivas #if, 
para que el preprocesador evalúe una condición alternativa si la anterior no se cumple.
*/

#if VERSION == 1
    printf("Versión 1\n");
#elif VERSION == 2
    printf("Versión 2\n");
#else // define un bloque de código que se compila solo si ninguna de las condiciones anteriores 
     // (#if o #elif) se cumple.
    printf("Versión desconocida\n");
#endif // marca el final de una estructura condicional iniciada con #if. 
      // Es obligatorio para cerrar correctamente el bloque.

// #error - Genera un mensaje de error personalizado durante la compilación si se cumple cierta condición. 
#ifndef VERSION
#error "VERSION no está definida"
#endif

// #undef - Elimina una macro previamente definida con #define. 
            //Es útil para redefinir macros o limpiar el espacio de nombres.
#define PI 3.14
#undef PI
#define PI 3.14159 // redefinimos  con mayor precisión

// #line - Permite cambiar el número de línea y el nombre de archivo 
         // que el compilador usa para los mensajes de error. 
         // Se usa en herramientas que generan código automáticamente.
#line 100 "archivo_generado.c"
int x;  // El compilador cree que esta línea es la 100 del archivo "archivo_generado.c"

// #pragma - Envía instrucciones específicas al compilador.
            // Su comportamiento depende del compilador (por ejemplo, GCC, MSVC). 
            // Se usa para optimización, control de advertencias, alineación de estructuras, etc.
#pragma message("Compilando el programa...")

//-------------//
// UTILIDADES //
//-----------//

// typedef - definir nuevos nombres de tipos, permite poner un alias a un tipo de dato
typedef tipo_original nuevo_nombre;
typedef unsigned int uint;

typedef struct { // uso en estructuras
    char nombre[50];
    int edad;
} Persona;

Persona p1;

// ejemplo 2
int valor
typedef int entero;

entero valor1; // en vez de int ahora puedo poner entero, he hecho un alias
entero valor2;

// sizeof -devuelve el tamaño de una variable o tipo de dato durante la compilación, 
          // no durante la ejecución del programa.
sizeof(tipo)
sizeof(variable)

int x;
printf("Tamaño de int: %lu\n", sizeof(int));
printf("Tamaño de x: %lu\n", sizeof(x)); // Se recomienda usar %lu para imprimir el resultado, 
                                          // ya que sizeof devuelve un valor de tipo size_t.




