/*
Enunciado:
Escribe un programa en lenguaje C que pida al usuario un número entero entre 1 y 7.
El programa debe mostrar el día de la semana correspondiente al número introducido.
Si el número está fuera del rango válido, debe mostrar un mensaje de error.
Requisitos:
- Solicitar al usuario un número entero.
- Usar una estructura switch o if-else para determinar el día.
- Mostrar el día correspondiente:
- 1 → Lunes
- 2 → Martes
- 3 → Miércoles
- 4 → Jueves
- 5 → Viernes
- 6 → Sábado
- 7 → Domingo
- Si el número no está entre 1 y 7, mostrar:
"Error: número fuera del rango válido (1-7)."
*/

#include <stdio.h>

const char* show_day_week (int day_week){ // usando un puntero
    if (day_week == 1){
        return "Es Lunes!";
    } else if (day_week == 2){
        return "Es Martes!";
    } else if (day_week == 3){
        return "Es Miércoles!";
    } else if (day_week == 4){
        return "Es Jueves!";
    } else if (day_week == 5){
        return "Es Viernes!";
    } else if (day_week == 6){
        return "Es Sábado!";
    } else if (day_week == 7){
        return "Es Domingo!!";
    } else {
        return "Error: número fuera del rango válido (1-7).";
    }

}

int main () {

    int day_week;
    const char* result;

    printf("Por favor, introduce un número del 1 al 7 para saber el día de la semana: \n");
    scanf("%d", &day_week);
    result = show_day_week (day_week);
    printf("Hoy es: %s \n", result);
    return 0;
}

// USANDO UN SWITCH CASE

// en un do-while no se puede poner un int main()
// return dentro del switch no es válido si esperas imprimir un mensaje. return termina la función.
// La variable option debe estar definida fuera del bucle

int main () {
    int option;
    do {
            
            printf("Por favor, selecciona un número entre el 1 y el 7 para saber que día de la semana es: \n");
            scanf("%d", &option);

            switch (option) {
                case 1:
                    printf("Es Lunes! \n");
                    break;
                case 2:
                    printf("Es Lunes! \n");
                    break;
                case 3:
                    printf("Es Lunes! \n");
                    break;
                case 4: 
                    printf("Es Lunes! \n");
                    break;
                case 5:
                    printf("Es Lunes! \n");
                    break;
                case 6:
                    printf("Es Lunes! \n");
                    break;
                case 7:
                    printf("Es Lunes! \n");
                default:
                    printf("Error: número fuera del rango válido (1-7). \n");
            }
    } while (option != 7);
}