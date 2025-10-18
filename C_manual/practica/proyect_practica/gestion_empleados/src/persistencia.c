#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operaciones.h" // para tener el struct de empleados hay que incluir el donde se encuentra

// funcion para cargar los datos del fichero de configuracion

int cargarEmpleados(struct empleado empleados[100]) {
    // variable donde se guarda numero empleados existente
    int n_emp = 0;
    // variable tipo file para leer el fichero
    FILE *f;
    f = fopen("empleados.txt", "r");
    // variable cadena de 255 caracteres donde se almacena cada linea del fichero
    char cadena[255];
    // variable cadena para "trocear" las lineas del fichero por ;
    char delimitador[] = ";";

    // recorremos todas las lineas
    while (feof(f) == 0) { // mientras no hayamos llegado al final del fichero
        // creo struct de tipo empleado
        struct empleado e; 
        fgets(cadena,255,f);
        char *token = strtok(cadena, delimitador); // en token se almacena la primera cadena hasta un ;
                            // hasta que obtiene un valor Null
        if (token != NULL) {
            // para saber en q campo me encuentro creo una variable
            int campo = 1;
            while (token != NULL) {
                if (campo == 1) {
                    strcpy(e.nombre,token)
                } else if (campo == 2) {
                    e.id = atoi(token); // combierto cadena a entero con atoi
                } else if (campo == 3) {
                    e.sueldo = atof (token); // cambierto cadena a float con atof
                }  else if (campo == 4) {
                    e.horas = atoi (token); 
                }
                // despues de estas comprobaciones incremento el campo en 1
                campo++;
                token = strtok(NULL, delimitador);
            }

        }
        empleados[n_emp] = e;
        n_emp++;
    }
    fclose(f);
    return n_emp;
}

// guardar datos en empleados.txt

void guardarEmpleados(struct empleado empleados[100], int num_emp) {
    FILE *f;
    f = fopen("empleados.txt", "w");

    for (int i = 0; i < num_emp -1; i++) {
        fprintf(f, "%s;%d;%.2f,%d\n", empleados[i].nombre,empleados[i].id,empleados[i].sueldo,empleados[i].horas);
        
    }
    // hay que evitar q meta un salto de linea en el ultimo empleado
    // por eso antes es num_emp - 1
    fprintf(f, "%s;%d;%.2f,%d\n", empleados[num_emp-1].nombre,empleados[num_emp-1].id,empleados[num_emp-1].sueldo,empleados[num_emp-1].horas);
    fclose(f);
}