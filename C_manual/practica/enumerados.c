/* //////////
Ejercicio 1: Definir un enum para los días de la semana
- Define un enum llamado DiasSemana que contenga los días de la semana: 
  lunes, martes, miércoles, jueves, viernes, sábado y domingo.
- Crea una variable de ese tipo y asigna un día.
- Imprime el valor numérico y el nombre del día (usa un array de strings para el nombre).
*/ //////////



// Aquí se define un enumerado llamado DiasSemana.
enum DiasSemana { // Un enum es una forma de crear un tipo de dato que puede tomar 
    lunes,       //valores simbólicos constantes.
    martes,      // En este caso, se definen 7 valores simbólicos para los días de la semana.
    miercoles,   // Por defecto, el primer valor (lunes) tiene valor 0
    jueves,      // el siguiente (martes) vale 1, y así sucesivamente hasta domingo que vale 6
    viernes,
    sabado,
    domingo
};

// Crear una variable del tipo enum y asignarle un día
// enum DiasSemana dia = miercoles;

int main() {
    // Array de strings para los nombres de los días, en el mismo orden que el enum
    const char* nombresDias[] = { // array de punteros a char (strings en C).
        "lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo"
    }; // Este array contiene los nombres de los días de la semana en forma de texto.
       // El orden coincide exactamente con el orden de los valores en el enum. Así,
       // el índice 0 es "lunes", índice 1 es "martes", etc.

    // Crear una variable del tipo enum y asignarle un día
    enum DiasSemana dia = miercoles; // Se crea una variable llamada dia de tipo enum DiasSemana.
                                     // Se le asigna el valor miercoles, que internamente es 2.
    // Imprimir valor numérico y nombre del día
    printf("El día seleccionado es: %s\n", nombresDias[dia]);
    // Se usa nombresDias[dia] para obtener el string que corresponde al valor dia.
    printf("El valor numérico del día es: %d\n", dia); // Imprimes el valor de la variable dia.

    return 0;
}

/* //////////
Ejercicio 2: Estado de semáforo
- Define un enum llamado EstadoSemaforo con los estados: rojo, amarillo y verde.
- Pide al usuario que ingrese un número del 0 al 2 para seleccionar el estado.
- Muestra un mensaje según el estado seleccionado 
    (Ej: "Alto" para rojo, "Precaución" para amarillo, "Avance" para verde).
*/ //////////

#include <stdio.h>

enum EstadoSemaforo {
    rojo,
    amarillo,
    verde
};

int main() {
    const char* nombresEstados[] = {"rojo", "amarillo", "verde"};
    int num_estado;

    printf("Introduzca un número del 0 al 2 para conocer el estado del semáforo:\n");
    scanf("%d", &num_estado);

    // Validar que el número esté entre 0 y 2
    if (num_estado < 0 || num_estado > 2) {
        printf("Número inválido. Por favor, introduzca un número entre 0 y 2.\n");
        return 1; // Salir con error
    }

    // Mostrar el estado seleccionado
    printf("El estado seleccionado es: %s\n", nombresEstados[num_estado]);

    // Mostrar mensaje según el estado
    switch (num_estado) {
        case rojo:
            printf("Alto\n");
            break;
        case amarillo:
            printf("Precaución\n");
            break;
        case verde:
            printf("Avance\n");
            break;
        default:
            printf("Estado desconocido\n");
    }

    return 0;
}


/* //////////
Ejercicio 3: Clasificación de edad
Define un enum llamado CategoriaEdad con los valores: niño, adolescente, adulto y anciano.
    - Pide al usuario que ingrese su edad.
    - Asigna la categoría según la edad:
        Niño: 0-12
        Adolescente: 13-17
        Adulto: 18-64
        Anciano: 65 en adelante
    - Imprime la categoría correspondiente.
*/ //////////

#include <stdio.h>

enum CategoriaEdad {
    ninio,
    adolescente,
    adulto,
    anciano
};

int main() {
    int edad;
    enum CategoriaEdad categoria;

    printf("Ingrese su edad para averiguar su categoría: \n");
    scanf("%d", &edad);

    if (edad >= 0 && edad <= 12) {
        categoria = ninio;
    } else if (edad >= 13 && edad <= 17) {
        categoria = adolescente;
    } else if (edad >= 18 && edad <= 64) {
        categoria = adulto;
    } else if (edad >= 65) {
        categoria = anciano;
    } else {
        printf("Edad inválida.\n");
        return 1;
    }

    switch (categoria) {
        case ninio:
            printf("Categoría: Niño\n");
            break;
        case adolescente:
            printf("Categoría: Adolescente\n");
            break;
        case adulto:
            printf("Categoría: Adulto\n");
            break;
        case anciano:
            printf("Categoría: Anciano\n");
            break;
    }

    return 0;
}



/* //////////
Ejercicio 4: Calificaciones con enum
- Define un enum llamado Calificacion con valores para notas: A, B, C, D, F.
- Pide al usuario que ingrese una nota (A-F).
- Usa un switch para imprimir un mensaje personalizado para cada calificación.
*/



/* //////////
Ejercicio 5 (más avanzado): Control de estados en una máquina
- Define un enum EstadoMaquina con estados: Apagada, Encendiendo, Funcionando, Apagando.
- Simula el cambio de estado en la máquina con un menú:
    1: Encender (cambia Apagada → Encendiendo → Funcionando)
    2: Apagar (cambia Funcionando → Apagando → Apagada)
    3: Salir
- Muestra el estado actual en cada paso
*/ //////////