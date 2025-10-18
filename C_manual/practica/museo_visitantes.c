/*
Programa que permite controlar entrada de asistentes a un museo.
Para ello el programa va solicitando, por cada grupo de asistentes, información de 
    - la hora de acceso
    - n personas que forman el grupo
    - edades de cada una de ellas
Una vez introducida la información, el programa muestra el precio total de la entrada grupal
La información de la entrada grupal se almacena en un struct de datos con estos campos:
    - hora de entrada
    - n asistentes
    - precio total
A su vez, la hora de entrada será estructurada donde se almacena la sig información:
    - hora
    - minuto
Tabla de precios por persona:
    menor de 6 -- 0
    6 - 15 años -- 5
    16 - 26 años o mas 65-- 8
    cualquier otro caso -- 10
Además, si el grupo está formado por 5 o más se aplica descuente del 10%
Tras mostrar el precio se preguntará al usuario si accede al museo un grupo nuevo o no, 
y tras hacerlo se iniciará el proceso de nuevo; en caso contrario, el programa termina con mensaje despedida.
El usuario introduce el caracter "S" para indicar que quiere introducir los datos de otro grupo 
y el caracter "N" si se quiere finalizar el programa    
*/

#include <stdio.h>
#include <stdlib.h>

struct hora_entrada {
    int hora;
    int minutos;
};

struct entrada {
    struct hora_entrada hora1;
    int asistentes;
    float precio;
};

int main () {

    // inicializamos la variable entrada
    struct entrada e1;
    // creamos variable para más tarde la opción de salir o continuar
    char continuar = 'S';

    while (continuar == 'S') {
        // pedir los datos de entrada al usuario
        printf("Introduzca la hora de entrada \n");
        scanf("%d", &e1.hora1.hora);

        printf("Introduzca los minutos de entrada \n");
        scanf("%d", &e1.hora1.minutos);

        printf("Introduzca el número de asistentes \n");
        scanf("%d", &e1.asistentes);

        // necesario crear una variable para ir guardando el valor de la entrada
        int total = 0; // inicio la suma desde el valor 0
        // Hay que recorrer todo el número de asistentes y para cada uno de ellos poner su edad
        for (int i = 0; i < e1.asistentes; i++) {
            int edad; // para guardar el valor introducido
            printf("Introduce la edad del asistente %d", i + 1); // para q no empiece en el 0
            scanf("%d", &edad);
            // estableces las condiciones de pago según la edad
            if (edad < 6) {
                total = total + 0;
            } else if (edad >= 6 && edad <= 15) {
                total = total + 5;
            } else if (edad >= 16 && edad <= 26 || edad > 65) {
                total = total + 8;
            } else {
                total = total + 10;
            }
        }
        // se hace comprobación del 10% al total
        if (e1.asistentes >= 5) {
            e1.precio = total * 0.9;
        } else {
            e1.precio = total;
        }
        // se imprime el total con la hora de entrada
        printf("Hora de entrada del grupo: %d:%d. El precio total es: %f \n", e1.hora1.hora, e1.hora1.minutos, e1.precio);
        // se pregunta al usuario si desea continuar
        printf("¿quiere continuar con otro grupo? (S/N) \n");
        scanf(" %c", &continuar); // el caracter se guarda en la variable previamente preparada
            // es necesario un espacio delante de %c
            // ndica a scanf que ignore cualquier espacio en blanco o saltos de línea antes de leer el carácter.
    }
    
    printf("Hasta la proxima! \n"); // mensaje de despedida al salir del bucle
    
    return 0;
}