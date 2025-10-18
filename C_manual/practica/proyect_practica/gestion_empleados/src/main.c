#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "persistencia.h"

int main () {
    
    int opcion = 0;
    int num_emp = 0;
    // array de tipo struct para almacenar todos los empleados q lea del fichero
    struct empleado empleados[100];

    num_emp = cargarEmpleados(empleados); // se llama a la funcion y toda la info del fichero se almacena en empleados (struct)

    printf("Bienvenidos al gestor de empleados \n");
    mostrarMenu();
    scanf("%d", &opcion);

    while (opcion != 7) {
        if (opcion  == 1) {
            printf("Alta de usuario \n");
            int creado = alta(empleados,num_emp);
            if (creado == 1) {
                num_emp++;
            }
        } else if (opcion == 2) {
            printf("Baja de usuario \n");
            int eliminado = baja(empleados, num_emp);
            if (eliminado == 1) {
                num_emp--;
            }
        } else if (opcion == 3) {
            printf("Listando empleados \n");
            listarEmpleados(empleados,num_emp);
        } else if (opcion == 4) {
            printf("Consultando datos \n");
            consultarDatosEmpleado(empleados, num_emp);
        } else if (opcion == 5) {
            printf("Modificando salario \n");
            modificarSueldo(empleados,num_emp);
        } else if (opcion == 6) {
            printf("Modificando horas \n");
            modificarHoras(empleados,num_emp);
        }
        mostrarMenu();
        scanf("%d", &opcion);
    }
    // cuando de al 7(salir) que haya persistencia de los datos (cargados en empleados.txt)
    guardarEmpleados(empleados,num_emp);
    printf("GRACIAS POR USAR EL GESTOR DE EMPLEADOS \n HASTA PRONTO \n");
}






