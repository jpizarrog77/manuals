/* 
----------
Ejercicio 1: Registro de persona
Objetivo: Crear una estructura Persona con nombre, edad y altura.
Tareas:
- Solicitar los datos al usuario.
- Mostrar la información almacenada.
----------
*/

#include <stdio.h>
#include <string.h>

// CREAR STRUCT PERSONA
struct NombreEstructura {
    tipo campo1;
    tipo campo2;
    ...
};

struct Persona {
    char nombre[20];
    int edad;
    float altura;
};
// COMO SE METEN DATOS
struct NombreEstructura variable;
variable.campo = valor

struct Persona p1;
p1.edad = 29;
strcpy(p1.nombre, "Jorge"); // Para copiar cadenas en C
p1.altura = 1.9;

struct NombreEstructura variable = {valor1, valor2, ...};
struct Persona p2 = {"Jacobo", 31, 1.82};

// --- EJERCICIO --- //

#include <stdio.h>
#include <string.h>

struct Persona {  // Defines una estructura llamada Persona que contiene tres campos:
    char nombre[20]; // nombre: un arreglo de caracteres (string) con espacio para 20 caracteres.
    int edad;  // edad: un entero.
    float altura; // altura: un número decimal (float).
};

int main (){
    struct Persona p; // Aquí defines una variable llamada p de tipo Persona, 
                      // donde vas a almacenar los datos que el usuario ingrese.

    // nombre, edad y altura no existen como variables separadas en tu función main. 
    // En vez de eso, están dentro de la estructura p. Entonces, debes referirte a ellos como: p.campo
    printf("Indique el nombre de la persona: \n");
    scanf("%19s", p.nombre);
    printf("Indique la edad de la persona: \n");
    scanf("%d", &p.edad);
    printf("Indique la altura de la persona (ej - 1.83): \n");
    scanf("%f", &p.altura);
    printf("%s tiene %d años, y mide %f metros", p.nombre, p.edad, p.altura);
    return 0;
}

// haciendo el ejercicio con un bucle (PENDIENTE REVISIÓN)
#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
    float altura;
};

int main() {
    struct Persona personas[100];  // Arreglo para hasta 100 personas
    int cantidad = 0;             // Cuántas personas hemos ingresado
    char respuesta;

    do {
        printf("Indique el nombre de la persona: \n");
        scanf("%19s", personas[cantidad].nombre);

        printf("Indique la edad de la persona: \n");
        scanf("%d", &personas[cantidad].edad);

        printf("Indique la altura de la persona (ej - 1.83): \n");
        scanf("%f", &personas[cantidad].altura);

        cantidad++;

        printf("¿Desea ingresar otra persona? (s/n): ");
        scanf(" %c", &respuesta);  // El espacio antes de %c limpia el buffer

    } while (respuesta == 's' || respuesta == 'S');

    printf("\nLista de personas ingresadas:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%s tiene %d años y mide %.2f metros.\n", 
            personas[i].nombre, personas[i].edad, personas[i].altura);
    }

    return 0;
}

/*
----------
Ejercicio 2: Lista de estudiantes
Objetivo: Crear un arreglo de estructuras Estudiante con nombre y nota.
Tareas:
- Registrar 5 estudiantes.
- Mostrar los que aprobaron (nota ≥ 5).
----------
*/

#include <stdio.h>
#include <string.h>

struct estudiantes {
    char nombre[20];
    float nota;
};

void show_up_students (struct estudiantes estudiantes[], int cantidad) {
    printf("Mostrando estudiantes aprobados \n");
    for (int i = 0; i < cantidad ; i++) {
        if (estudiantes[i].nota >= 5) {
            printf("Estudiante: %s, nota: %f \n", estudiantes[i].nombre, estudiantes[i.nota]);
        }
    }
}

int main () {
    struct estudiantes estudiantes[5] = {
    {"jkl",1},
    {"xcv",4},
    {"dfg",3},
    {"asd",5},
    {"qwe",9}
    };
    show_up_students(estudiantes, 5);
    return 0;
};

/* 
----------
EJERCICIO 3: Producto en inventario
Objetivo: Crear una estructura Producto con nombre, precio y cantidad.
Tareas:
- Calcular el valor total del inventario.
----------
*/ 

#include <stdio.h>
#include <string.h>

/*
- Define una estructura llamada producto.
- char nombre[20];: Un arreglo de caracteres para guardar el nombre del producto (máximo 19 caracteres + \0).
- float precio;: El precio unitario del producto.
- int cantidad;: La cantidad disponible en inventario.
*/
struct producto {
    char nombre[20];
    float precio;
    int cantidad;
}; 

int main() {
    // Array de productos -----------------> meter en un array una estructura
    struct producto inventario[6] = {
        {"lapiz", 1.10, 150},
        {"asd1", 6.00, 23},
        {"asd2", 7.00, 45},
        {"asd3", 4.00, 66},
        {"asd4", 2.00, 89},
        {"asd5", 3.00, 28}
    };

    float valorTotal = 0; // - Declara una variable valorTotal para acumular el valor total del inventario. - Se inicializa en 0.

    // Calcular el valor total del inventario
    for (int i = 0; i < 6; i++) {
        /*
        - Un bucle for que recorre los 6 productos del arreglo.
        - En cada iteración:
            - inventario[i].precio * inventario[i].cantidad calcula el valor de ese producto.
            - Se suma al acumulador valorTotal.
        */
        valorTotal += inventario[i].precio * inventario[i].cantidad; 
    }

    printf("Valor total del inventario: %.2f\n", valorTotal); // - Muestra el resultado en pantalla. - %.2f indica que se imprimirá el número con dos decimales.
    return 0;
}
/*
----------
EJERCICIO 4:
- Estructuras anidadas
- Define una estructura llamada Fecha con los campos:
    - Día (entero).
    - Mes (entero).
    - Año (entero).
- Define otra estructura llamada Evento que contenga:
    - Nombre del evento (cadena de caracteres de hasta 50 caracteres).
    - Fecha del evento (estructura Fecha).
- Crea una variable de tipo Evento, asígnale valores y muestra la información del evento en pantalla.
----------
*/

#include <stdio.h>
#include <string.h>

struct fecha {
    int day;
    int month;
    int year;
};

struct fecha fechas[5]{
    {1,5,2000},
    {11,3,2020},
    {20,6,2011},
    {7,7,2010},
    {1,5,2005}
};

struct evento {
    char nombre[50];
    struct fecha fecha;
};

int main () {
    // Crear una variable de tipo evento
    struct evento miEvento;
    // Asignar nombre al evento
    strcpy(miEvento.nombre, "Feria de Ciencias");
    // Asignar una fecha del arreglo
    miEvento.fecha = fechas[2];  // Usamos la tercera fecha: {20, 6, 2011}
    // Mostrar la información del evento
    printf("Nombre del evento: %s\n", miEvento.nombre);
    printf("Fecha del evento: %02d/%02d/%d\n", miEvento.fecha.day, miEvento.fecha.month, miEvento.fecha.year);
    return 0;
}

/*
----------
EJERCICIO 5:
- Funciones y estructuras
- Define una estructura llamada Rectangulo con los campos:
- Base (flotante).
- Altura (flotante).
- Escribe una función que reciba un Rectangulo como parámetro y calcule su área.
- En el programa principal, crea un rectángulo, asigna valores a sus campos y llama a la función para calcular el área.
----------
*/

#include <stdio.h>
#include <string.h>



/*
----------
EJERCICIO 6:
- Estructuras y archivos
- Define una estructura llamada Estudiante con los campos:
- Nombre (cadena de caracteres de hasta 50 caracteres).
- Edad (entero).
- Promedio (flotante).
- Escribe un programa que permita al usuario ingresar los datos de 3 estudiantes y los guarde en un archivo de texto.
- Luego, lee los datos del archivo y muéstralos en pantalla.
----------
*/

#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiantes[3];
    FILE *archivo;

    // Pedir datos al usuarioS
    for (int i = 0; i < 3; i++) {
        printf("Ingrese datos del estudiante %d:\n", i+1);
        printf("Nombre: ");
        // Para leer strings con espacios, usamos fgets y luego quitamos el salto de línea
        fgets(estudiantes[i].nombre, sizeof(estudiantes[i].nombre), stdin);
        // Eliminar el salto de línea que fgets captura
        size_t len = strlen(estudiantes[i].nombre);
        if (len > 0 && estudiantes[i].nombre[len - 1] == '\n') {
            estudiantes[i].nombre[len - 1] = '\0';
        }

        printf("Edad: ");
        scanf("%d", &estudiantes[i].edad);

        printf("Promedio: ");
        scanf("%f", &estudiantes[i].promedio);

        getchar(); // Consumir el salto de línea después de scanf // - Función: Lee un carácter del teclado y lo devuelve como un entero (ASCII).

        printf("\n");
    }

    // Abrir archivo para escribir
    archivo = fopen("estudiantes.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo para escribir.\n");
        return 1;
    }

    // Guardar los datos en el archivo
    for (int i = 0; i < 3; i++) {
        fprintf(archivo, "%s\n%d\n%.2f\n", estudiantes[i].nombre, estudiantes[i].edad, estudiantes[i].promedio);
    }

    fclose(archivo);

    // Abrir archivo para leer
    archivo = fopen("estudiantes.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo para leer.\n");
        return 1;
    }

    printf("Datos leidos del archivo:\n\n");

    // Leer y mostrar datos
    for (int i = 0; i < 3; i++) {
        fgets(estudiantes[i].nombre, sizeof(estudiantes[i].nombre), archivo);

        // Eliminar salto de línea de fgets
        size_t len = strlen(estudiantes[i].nombre);
        if (len > 0 && estudiantes[i].nombre[len - 1] == '\n') {
            estudiantes[i].nombre[len - 1] = '\0';
        }

        fscanf(archivo, "%d", &estudiantes[i].edad);
        fscanf(archivo, "%f", &estudiantes[i].promedio);

        // Consumir el salto de línea después de leer números
        fgetc(archivo);

        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Promedio: %.2f\n\n", estudiantes[i].promedio);
    }

    fclose(archivo);

    return 0;
}


/*
----------
EJERCICIO 7: Jugadores baloncesto
Crear un programa que pida al usuario los nombres, edades, alturas de los jugadores 
de un equipo de baloncesto (5). Posteriormente le presentará un menú que le permita:
    - Listar los nombres y alturas de los jugadores
    - Buscar un jugador por su nombre y presentar su altura y edad
    - indicar el nombre y la edad del jugador más alto del equipo
*/

#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida (como printf, scanf, fgets, etc.).
#include <string.h> // Incluye funciones para trabajar con cadenas, como strcmp, strcspn

#define NUM_JUGADORES 5 // directiva del preprocesador en C. 
                        // Lo que hace es definir una constante simbólica llamada NUM_JUGADORES con el valor 5.
                        // - Cada vez que el compilador vea NUM_JUGADORES en el código, lo reemplazará por 5 
                        // antes de compilar.

// Definición del struct jugador que agrupa 3 datos
struct Jugador {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct Jugador equipo[NUM_JUGADORES]; // array llamado equipo con 5 jugadores
                                          // Cada elemento es un Jugador, se guardan los datos de 5 jugadores.

    int opcion;
    char nombreBuscado[50];

    // Entrada de datos
    for (int i = 0; i < NUM_JUGADORES; i++) { // se usa un bucle for para repetir el proceso 5 veces
        /*
        En cada vuelta, se pide:
        - El nombre del jugador con fgets.
        - La edad con scanf.
        - La altura con scanf.
        Además, se limpia el búfer con while (getchar() != '\n'); 
        para evitar errores al leer cadenas después de números.
        */
        printf("Jugador %d\n", i + 1); // Imprime el número del jugador (1 al 5).
        printf("Nombre: ");
        fgets(equipo[i].nombre, sizeof(equipo[i].nombre), stdin);
        equipo[i].nombre[strcspn(equipo[i].nombre, "\n")] = '\0'; // Eliminar salto de línea

        printf("Edad: ");
        scanf("%d", &equipo[i].edad);

        printf("Altura (en metros): ");
        scanf("%f", &equipo[i].altura);

        while (getchar() != '\n'); // Limpiar el búfer
    }

    // Menú interactivo
    do { // do-while para que se repita el menú hasta que usuario pulse salir
        printf("\n--- MENÚ ---\n");
        printf("1. Listar nombres y alturas\n");
        printf("2. Buscar jugador por nombre\n");
        printf("3. Mostrar jugador más alto\n");
        printf("0. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);
        while (getchar() != '\n'); // Limpiar el búfer

        switch (opcion) {
            case 1:
                printf("\nNombres y alturas:\n");
                for (int i = 0; i < NUM_JUGADORES; i++) {
                    printf("%s - %.2f m\n", equipo[i].nombre, equipo[i].altura);
                }
                break;

            case 2:
                printf("Introduce el nombre del jugador: ");
                fgets(nombreBuscado, sizeof(nombreBuscado), stdin);
                nombreBuscado[strcspn(nombreBuscado, "\n")] = '\0';

                int encontrado = 0;
                for (int i = 0; i < NUM_JUGADORES; i++) {
                    if (strcmp(equipo[i].nombre, nombreBuscado) == 0) {
                        printf("Jugador encontrado: %s\n", equipo[i].nombre);
                        printf("Edad: %d años\n", equipo[i].edad);
                        printf("Altura: %.2f m\n", equipo[i].altura);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Jugador no encontrado.\n");
                }
                break;

            case 3: {
                int indiceMasAlto = 0;
                for (int i = 1; i < NUM_JUGADORES; i++) {
                    if (equipo[i].altura > equipo[indiceMasAlto].altura) {
                        indiceMasAlto = i;
                    }
                }
                printf("El jugador más alto es %s con %.2f m y %d años.\n",
                       equipo[indiceMasAlto].nombre,
                       equipo[indiceMasAlto].altura,
                       equipo[indiceMasAlto].edad);
                break;
            }

            case 0:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida.\n");
        }

    } while (opcion != 0);

    return 0;
}

