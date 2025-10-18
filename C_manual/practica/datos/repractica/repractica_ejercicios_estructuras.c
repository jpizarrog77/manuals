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

int main () {
    // declarar estructura persona
    struct Persona {
    char nombre[20];
    int edad;
    float altura;
    };
    struct Persona persona; // Es necesario crear variable tipo struct del struct creado
    // solicitar datos al usuario
    printf("Indique sus datos personales que a continuación se le preguntan: \n");
    printf("Indique su nombre: \n");
    scanf("%19s", persona.nombre);
    printf("Indique su edad: \n");
    scanf("%d", &persona.edad);
    printf("Indique su altura (ej - 1.83): \n");
    scanf("%f", &persona.altura);
    // Mostrar la información almacenada
    printf("Su nombre es: %s, su edad es; %d, su altura es: %f \n", persona.nombre, persona.edad, persona.altura);
    return 0;
}

/*
----------
Ejercicio 2: Lista de estudiantes
Objetivo: Crear un array de estructuras Estudiante con nombre y nota.
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

struct producto {
    char nombre[21];
    float precio;
    int cantidad;
};


void calculate_inventario (struct producto inventario[], int tamanio) {
    float suma = 0;
    for (int i = 0; i < tamanio; i++){
        float valor_inventario = inventario[i].precio * inventario[i].cantidad;
        suma += valor_inventario;
    }
    printf("El valor total del inventario es: %f. \n", suma);
}

int main () {
    struct producto inventario[5] = {
    {"qwer",1.9,456},
    {"asdf",1.23,76},
    {"poiu", 2.50, 321},
    {"mnbv", 1,231},
    {"fghj",2,21}
    };
    calculate_inventario(inventario, 5);
    return 0;
}

///

#include <stdio.h>
#include <string.h>

struct producto {
    char nombre[21];
    float precio;
    int cantidad;
};

int main () {
    struct producto inventario[5] = {
    {"qwer", 1.9, 456},
    {"asdf", 1.23, 76},
    {"poiu", 2.50, 321},
    {"mnbv", 1, 231},
    {"fghj", 2, 21}
    };
    float valor_inventario = 0;
    for (int i = 0; i < 5; i++){
        valor_inventario += inventario[i].precio * inventario[i].cantidad;
    }
    printf("Valor total del inventario: %f. \n", valor_inventario);
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
    int dia;
    int mes;
    int year;
};

struct evento {
    char nombre[50];
    struct fecha fecha_evento;
};

int main () {
    // Declaro array de estructura fechas rellenando sus campos
    struct fecha list_fechas[3] = {
        {2,8,2025},
        {1,6,2025},
        {1,5,2025}
    }; 
    // Declaro array de estructura sin rellenar campos
    struct evento list_eventos[3];
    // Relleno campo nombre de eventos
    strcpy(list_eventos[0].nombre, "Boda"); // Función strcpy para copiar las cadenas literales en el campo nombre de cada evento
    strcpy(list_eventos[1].nombre, "Bautizo");
    strcpy(list_eventos[2].nombre, "Comunión");
    // bucle que recorre array list_eventos y rellena campo fecha_evento a partir del array de list_fechas
    for (int i = 0; i < 3; i++) {
        /*
        Recorres los 3 eventos con un for.
            Para cada evento, copias la fecha correspondiente de list_fechas usando asignación directa.
            Esto funciona porque fecha_evento es una estructura, y en C puedes asignar estructuras enteras con el operador =.
            Así, el evento 0 obtiene la fecha 0 (2/8/2025), el evento 1 la fecha 1, etc.
        */
        list_eventos[i].fecha_evento = list_fechas[i];
    }
    // Se muestra nombre eventos y después la fecha
    for (int i = 0; i < 3; i++) {
        /*
        Recorres nuevamente los eventos.
        Para cada evento, muestras en pantalla:
            El nombre del evento (cadena).
            La fecha en formato dd/mm/aaaa.
            En el formato de printf:
            %02d imprime un entero con al menos 2 dígitos (rellena con cero si es necesario).
            %04d imprime un entero con al menos 4 dígitos (año completo).
        */
        printf("Evento: %s\n", list_eventos[i].nombre);
        printf("Fecha: %02d/%02d/%04d\n\n", 
            list_eventos[i].fecha_evento.dia,
            list_eventos[i].fecha_evento.mes,
            list_eventos[i].fecha_evento.year);
    }
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

struct rectangulo {
    float base;
    float altura;
};

void area_rectangulo (struct rectangulo medidas_rectangulo[]) {
    float areas_rectangulos;
    for (int i = 0; i < 3; i++) {
        areas_rectangulos = medidas_rectangulo[i].base * medidas_rectangulo[i].altura;
        printf("Área rectángulo: %f. \n", areas_rectangulos);
        // salida mejor --> printf("Área del rectángulo %d: %.2f\n", i + 1, areas_rectangulos);
    }
}

int main () {
    struct rectangulo medidas_rectangulo[3]={
        {2, 4},
        {5, 10},
        {3,7} 
    };
    printf("Mostrando área de los rectángulos \n");
    area_rectangulo(medidas_rectangulo);
    return 0;
}

//////

#include <stdio.h>
#include <string.h>

struct rectangulo {
    float base;
    float altura;
};

void area_rectangulo (struct rectangulo medidas_rectangulo[], int cantidad) { // al añadir cantidad se puede manejar el tamaño del array
    float areas_rectangulos;
    for (int i = 0; i < cantidad; i++) {
        areas_rectangulos = medidas_rectangulo[i].base * medidas_rectangulo[i].altura;
        printf("Área rectángulo: %f. \n", areas_rectangulos);
        // salida mejor --> printf("Área del rectángulo %d: %.2f\n", i + 1, areas_rectangulos);
    }
}

int main () {
    struct rectangulo medidas_rectangulo[3]={
        {2, 4},
        {5, 10},
        {3,7} 
    };
    printf("Mostrando área de los rectángulos \n");
    area_rectangulo(medidas_rectangulo,2); // al poner 2 solo llama a los dos primeros rectángulos
    return 0;
}

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




/*

*/

