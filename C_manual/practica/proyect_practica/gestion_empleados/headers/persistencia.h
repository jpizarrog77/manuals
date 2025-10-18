// funciones para la persistencia de los datos

// cargar datos del fichero
// var fichero de empleados y cargarlo

#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

// header de la funcion que permite leer el archivo empleados.txt para cargar los datos que contiene
int cargarEmpleados(struct empleado empleados[100]);
// heder de funcion para tras haber hecho modificaciones queden guardadas en empleados.txt
void guardarEmpleados(struct empleado empleados[100], int num_emp);

#endif
