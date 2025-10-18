///////////////////////
// MEMORIA DINÁMICA //
/////////////////////

// capacidad de requerir espacio variable de memoria durante la ejecución de un programa

int main () {
    // si se pregunta al usuario por un numero de elementos
    int n;
    printf("Introduce el numero de elementos del array");
    scanf("%d",&n);
    /*
    si se hace como se acostumbra
    no se puede poner int array[10];
    es necesario indicar un valor de forma estática
    */

    // como se puede manejar espacio de memoria de forma dinámica?
    // el tamaño del array se va a asignar en tiempo de ejecución

    // herramientas de manejo de memoria dinámica que maneja C

    // sizeof --> cuanto ocupa un tipo determinado de dato en la memoria del equipo utilizado
                //  importancia -- saber cuanto hay que hacer de reserva de memoria (bytes)

    // calcular tamaño de un tipo int            
    int n_int sizeof(int) // variable que alamcena cuanto ocupa un entero
        // (tipo de dato q quiero averiguar tamaño)
    printf("Tamaño de un entero = %d", n_int); //imprimo el tamaño en bytes

    // calcular tamaño de un tipo char
    int n_char = sizeof(char);
    printf("Tamaño de un char = %d", n_char);
    
    // calcular tamaño de un tipo long
    int n_long = sizeof(long);
    printf("Tamaño de un char = %d", n_long);

    // struct -- calcular cuanto necesita esa estructura para ser almacenada
    struct structura {
        int entero;
        char caracteres[10];
    };

    int n_struct = sizeof(struct structura);
    printf("Tamaño de la estructura = %d \n", n_struct);

    // array
    float array[5];

    int n_array = sizeof(array);
    printf("Tamaño del array = %d \n", n_array);
}

//// -- FUNCIONES MALLOC Y CALLOC -- ////

// se encuentran dentro de la biblioteca estándar de C --> stdlib.h
// Sirven para hacer una reserva de memoria en tiempo de ejecución

int main () {

    // // MALLOC // //
        // Reservar un bloque de memoria de tamaño en bytes que se le indique
        // Devuelve un puntero al inicio de este bloque de memoria reservada
    // EJ - hacemos una reserva de 4 bytes
    int *puntero;
    puntero = malloc(4); // se reserva espacio para estos 4 bytes y puntero apunta al comienzo del bloque de reserva
    // dentro de malloc se puede usar la función sizeof
    // EJ - si quiero reservar espacio para 4 enteros
    puntero = malloc(4*sizeof(int)); 

    // uno de los usos mas comunes de memoria dinámica
        // creacion de arrays, cuyo número de elementos se define en el tiempo de ejecución
        // (array dinámico)
    
    int *array, n;
    printf("Introduce el numero de elementos de ese vector \n");
    scanf("%d", &n);
    // n nos dice el numero de elementos en el momento de la ejecucion indicado por usuario
    // se hace una reserva de memoria en base a ese tamaño
    // se hace que el array apunte al comienzo de ese puntero (el bloque de memoria)
    array = malloc(n*sizeof(int)); // se reserva espacio para n elementos de tipo entero 
                                 // n elementos *cuanto ocupa un entero 
    // se puede crear una comprobación
    if (array == NULL) {
        printf("Error al intentar reservar la memoria");
    } else {
        printf("Se ha reservado la memoria");
        // se imprimen los datos del array
        for(int i = 0; i < n; i++) {
            printf("Elemento en la posicion es %d es %d", i, array[i]);
        }
    }
    return 0;
}

int main () {

    // // CALLOC // //
    // la diferencia es que esta inicializa cada una de las posiciones de memoria q se reservan a 0
    // toma dos parámetros

    int *array2, n;
    printf("Introduce el numero de elementos de ese vector \n");
    scanf("%d", &n);

    array2 = calloc(n,sizeof(int)) // n - numero elementos que quiero reservar 
                        // cuanto va a ocupar cada una de las posiciones
    if (array2 == NULL) {
        printf("Error al intentar reservar la memoria");
    } else {
        printf("Se ha reservado la memoria");
        // se imprimen los datos del array
        for(int i = 0; i < n; i++) {
            printf("Elemento en la posicion es %d es %d", i, array2[i]);
        }
    }

    return 0;
}


//// FUNCIÓN REALLOC ////
// permite redimensionar memoria dinámica

int main () {

    // // REALLOC // //
    // redimensionamos el array2 previo

    int *array2, n;
    printf("Introduce el numero de elementos de ese vector \n");
    scanf("%d", &n);

    array2 = calloc(n,sizeof(int)) // n - numero elementos que quiero reservar 
                        // cuanto va a ocupar cada una de las posiciones
    if (array2 == NULL) {
        printf("Error al intentar reservar la memoria");
    } else {
        // se imprimen los datos del array
        for (int i = 0; i < n; i++) {
            array2[i] = i;
        }
    }

    // le añadimos 3 posiciones más al array
    int n2 = n + 3;
    // se crea un nuevo puntero
    int *array_realloc = realloc(array2, n2) // array q quiere redimensionar, nuevo tamaño
    // se comprueba si ha habido errores
    if (array_realloc == NULL ) {
        printf("Error al intentar reservar la memoria");
    }
    // lo imprimimos
    for (int i = 0; i < n; i++) { 
        printf("%d \n", array2[i]);
    } else {
        // asignar al vector el nuevo puntero (nuevo bloque de memoria)
        array2 = array_realloc;
    }
    // for para recorrer todas las posiciones del nuevo vector
    for (int i = 0; i < n2; i++) {
        printf("%d \n", array2[i]);
    }        
    // realloc respeta valores originales quedando los bytes restantes añadidos sin inicializar
    // si el nuevo tamaño es menor pues se conservar los 3 primeros

    return 0;
}

//// FUNCION FREE ////
// Liberar memoria dinámica q estaba reservada
// recibe como parámetro el puntero que apunta al comienzo del bloque de memoria reservado

free(array);
// NO USAR MÁS UN PUNTERO Q HA SIDO LIBERADO
// buena práctica --> anular su valor 
array = NULL;

