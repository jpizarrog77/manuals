#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h" // si no se puede usar struct empleados
#include <string.h>

// funciones para el menu que se usara en el main.c

// funcion mostrar el menu
void mostrarMenu () {
    print("Introduce la opción que desee realizar: \n")
    print("1. Alta de empleado \n")
    print("2. Baja de empleado \n")
    print("3. Listar empleados \n")
    print("4. Consultar datos de un empleado \n")
    print("5. Modificar salario \n")
    print("6. Modificar horas de trabajo \n")
    print("7. Salir \n")
}

// funcion listar empleados
void listarEmpleados (struct empleados empleado[100], int num_emp) {
    printf("Listando los datos del empleado \n");
    // con un for se recorre el array desde pos 0 hasta el n que indique num_e,p
    for (int i = 0; i < num_emp, i++) {
        printf("Nombre: %s \n", empleados[i].nombre);
        printf("ID empleado: %d \n", empleados[i].id);
        printf("Sueldo: %.2f \n", empleados[i].sueldo);
        printf("Horas semanales: %d \n", empleados[i].horas);
        printf("\n");
    }
}

// funcion consultarID --> SOLO SE USA DE MANERA INTERNA EN OPERACIONES.C
// se usa en el resto de funciones
int comprobarid (struct empleados empleado[100], int num_emp, int id)  { // recibe el array de elementos
    // variable entera donde se almacena si existe o no existe ese empleado
    int resultado = 0;
    // se recorre el array de empleados desde 0 hasta el n empleados que se tenga
    for (int i = 0; i < num_emp; i++) {
        if (empleado[i].id == id) {
            resultado = 1;
        }
    }
    return resultado;
}

// funcion para dar de alta empleados

int alta(struct empleados empleado[100], int num_emp) {

    // variable que se va a devolver e indicará si se ha podido crear el empleado
    int creado = 0; 
    // crear struct empleado donde se cargan los datos del nuevo empleado
    struct empleado emp; 
    // se limpia buffer de entrada
    fflush(stdin);
    // se piden los datos del nuevo empleado
    printf("Introduce el nombre y apellidos del nuevo empleado \n");
    gets(emp.nombre); // gets ya que es una cadena

    printf("Introduce el id del nuevo empleado \n");
    scanf("%d", emp.id);

    printf("Introduce el nombre y apellidos del nuevo empleado \n");
    scanf("%f", emp.sueldo);

    printf("Introduce el nombre y apellidos del nuevo empleado \n");
    scanf("%d", emp.horas);

    // comprobar si existe ese empleado
    int existe = comprobarid(empleado, num_emp, emp.id);
    // comprobar si el numero de empleados es menor a 100
    if (num_emp < 100) {
        if (existe == 0) {
            empleado[num_emp] = emp;
            creado = 1; // 1 porque salio bien
        } else {
            printf("No se puede crear al empleado. ID duplicado \n");
        }
    } else {
      printf("No se puede dar de alta al usuario.Cupo alcanzado \n");
    }
    return creado;
}

// funcion para dar de baja empleados

int baja(struct empleados empleado[100], int num_emp) {

    // variable que se va a devolver e indicará si se ha podido eliminar el empleado
    int eliminado = 0; 
    // 
    int id, indice;
    // se piden los datos del  empleado a eliminar
    printf("Introduce el id del empleado \n");
    scanf("%d", &id);

    // comprobar si existe ese empleado
    int existe = comprobarid(empleado, num_emp, id);
    // comprobar si el numero de empleados es menor a 100
    if (existe == 1) {
        // recorrer array empleados
        // hay que mover el array de empleados para que no quede esa posición vacía
        for (int i = 0; i < num_emp; i++ ) {
            if (empleado[i].id == id) {
                indice = i;
            }
        }
        for (int j = indice; j<num_emp - 1; j++) {
            empleado[j] = empleado[j+1];
            struct empleados aux;
            empleados[j+1] = aux;
        }

    } else {
        printf("No se puede dar de baja al empleado.ID no existe \n")
    }
    return eliminado;
}

// funcion para consultar los datos del empleado

void consultarDatosEmpleado(struct empleados empleado[100], int num_emp) {
    // variable para almacenar id empleado que quiero consultar
    int id;
    printf("Introduce el id del empleado cuyos datos quieres consultar");
    scanf("%d", &id);

    // comprobamos id llamndo a la funcion antes creada
    int existe = comprobarid(empleado, num_emp, id);
    if (existe == 1) {
        for (int i = 0; i < num_emp; i++) {
            if (empleado[i].id == id) {
                printf("Listando datos del empleado con id: %d \n", empleado[i].id);
                printf("Nombre: %s \n", empleados[i].nombre);
                printf("Sueldo: %.2f \n", empleados[i].sueldo);
                printf("Horas semanales: %d \n", empleados[i].horas);
            }
        }
    } else {
        printf("No se pueden consultar los datos. ID no existe");
    }
}

// funcion modificar salario

void consultarDatosEmpleado(struct empleados empleado[100], int num_emp) {
    // variable para guardar el id de empleado q se indique
    int id;
    printf("Introduce el ID del empleado cuyo sueldo se quiere modificar \n");
    scanf("%d", &id);
    // se comprueba si existe un empleado con ese id
    int existe = comprobarid(empleado, num_emp, id);
    if (existe == 1) {
        float nuevo_sueldo;
        printf("Introduce el nuevo sueldo del empleado");
        scanf("%f", &nuevo_sueldo);
        // bucle for para recorrer el array de empleados
        for (int i = 0; i < num_emp; i++) {
            if(empleados[i].id == id) {
                empleados[i].sueldo = nuevo_sueldo;
            }
        }
    } else {
        printf("No se puede modificar el sueldo. ID incorrecto")
    }
}

// funcion modificar horas

void modificarHoras (struct empleados empleado[100], int num_emp) {
     // variable para guardar el id de empleado q se indique
    int id;
    printf("Introduce el ID del empleado cuyas horas se quieren modificar \n");
    scanf("%d", &id);
    // se comprueba si existe un empleado con ese id
    int existe = comprobarid(empleado, num_emp, id);
    if (existe == 1) {
        int nuevas_horas;
        printf("Introduce las nuevas horas semanales del empleado");
        scanf("%d", &nuevas_horas);
        // bucle for para recorrer el array de empleados
        for (int i = 0; i < num_emp; i++) {
            if(empleados[i].id == id) {
                empleados[i].horas = nuevas_horas;
            }
        }
    } else {
        printf("No se pueden modificar las horas del empleado. ID incorrecto")
    }
}


