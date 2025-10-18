#ifndef OPERACIONES_H
#define OPERACIONES_H

// los datos (vienen de funcion en persistencia.c) de los empleados los cargamos en un struct 
struct empleado {
    char nombre[255];
    int id;
    float sueldo;
    int horas;
};

// encabezado funcion que muestra el menu
void mostrarMenu (); // declaración de la función creada en operaciones.c
// encabezado funcion listar empleados
void listarEmpleados(struct empleados empleado[100], int num_emp);
// encabezado funcion comprobar si existe un empleado
// int comprobarid (); NO SE DECLARA AQUI YA QUE NO SERÁ USADA EN MAIN.C
// encabezado funcion alta empleados
int alta(struct empleados empleado[100], int num_emp);
// encabezado funcion baja empleados
int baja(struct empleados empleado[100], int num_emp);
// encabezado funcion consultar datos de empleados
void consultarDatosEmpleado(struct empleados empleado[100], int num_emp);
// encabezado funcion modificar salario de empleados
void modificarSueldo (struct empleados empleado[100], int num_emp);
// encabezado funcion modificar horas de empleados
void modificarHoras (struct empleados empleado[100], int num_emp);

#endif