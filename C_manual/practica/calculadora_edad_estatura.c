/* 
Escribe un programa en C que:
- Pida al usuario su nombre, edad y estatura en metros.
- Imprima un mensaje personalizado que diga:
- "Hola [nombre], tienes [edad] años y mides [estatura] metrs."
*/

int main () { // Esta es la función principal del programa.
             // Todo lo que esté dentro de { ... } se ejecuta cuando corre el programa
    char nombre[50]; // Declara una cadena de caracteres (texto) de hasta 49 letras 
                    //+ 1 para el carácter nulo \0. Se usará para guardar el nombre del usuario
    int edad; // Declara una variable entera para guardar la edad del usuario
    double altura; // Declara una variable de tipo double para guardar la altura con decimales 
    printf("Por favor, necesitamos conocer los siguientes datos sobre usted: nombre,edad y altura \n"); // Muestra el mensaje de bienvenida al usuario
    printf("Introduce tu nombre: \n"); // Pide al usuario que escriba su nombre
    scanf("%49s", &nombre); // Lee el nombre del usuario. %49s indica que se leerán hasta 49 caracteres.
    printf("Introduce tu edad: \n"); // Pide al usuario que escriba su edad
    scanf("%d", &edad); // Lee un número entero y lo guarda en la variable edad.
    printf("Introduce tu altura en m (ej: 1.9): \n"); // Pide al usuario que escriba su altura en metros
    scanf("%lf", &altura); // Lee un número decimal de tipo double y lo almacena en altura
    printf("Hola %s ,tienes %d años y mides %lf metros \n") // 
    return 0; //  Finaliza el programa correctamente. Indica que todo salió bien
}
