// --------------------- //
// MANEJO ARCHIVOS EN C //
// ------------------- //

// Se usa la biblioteca estándar stdio.h, que provee funciones para abrir, leer, escribir y cerrar archivos.
// Un archivo se representa con un puntero de tipo FILE *.

// // // // -- RESUMEN -- // // // // 

/*
- fopen(): Abre un archivo y devuelve un puntero para operar sobre él.
- fclose(): Cierra un archivo abierto y libera sus recursos.
- fgetc(): Lee un solo carácter del archivo como entero ASCII.
- fscanf(): Lee datos formateados desde un archivo.
- fprintf(): Escribe datos formateados en un archivo.
- fgets(): Lee una línea de texto desde un archivo o entrada estándar.
*/

// -- //-- FOPEN -- // -- //

FILE *fopen(const char *nombre_archivo, const char *modo);
/*
Abre un archivo y devuelve un puntero para trabajar con él.
modo indica si quieres abrir el archivo para:
    "r": lectura (archivo debe existir).
    "w": escritura (se crea o sobreescribe el archivo).
    "a": agregar al final del archivo (append).
También hay modos con b para archivos binarios, pero no es nuestro caso ahora.
*/
// ejemplo
FILE *archivo = fopen("datos.txt", "r");
if (archivo == NULL) {
    // Error al abrir el archivo (no existe o falta permisos)
}

// -- // -- FCLOSE -- // -- //

int fclose(FILE *archivo);
/*
Cierra un archivo abierto y libera los recursos asociados.
Siempre debes cerrar el archivo cuando termines para evitar pérdidas de datos o corrupción.
Devuelve 0 si cierra correctamente, y EOF si hay error.
*/

// -- // -- FGETC -- // -- //

int fgetc(FILE *archivo);
/*
Lee un carácter del archivo y lo devuelve como un entero (ASCII).
Si llega al final del archivo devuelve EOF.
Se usa para leer carácter por carácter.
Útil para consumir caracteres sobrantes, como saltos de línea, o para leer archivos de texto.
*/
int c = fgetc(archivo);
if (c != EOF) {
    char caracter = (char)c;
    // Usar caracter
}

// -- // -- FSCANF -- // -- //

int fscanf(FILE *archivo, const char *formato, ...);
/*
Lee datos formateados desde un archivo (similar a scanf, pero desde un archivo).
Lee y convierte datos según el formato indicado.
Devuelve el número de elementos correctamente leídos.
*/
int edad;
float promedio;
fscanf(archivo, "%d", &edad);
fscanf(archivo, "%f", &promedio);

// -- // -- FPRINTF -- // -- //

int fprintf(FILE *archivo, const char *formato, ...);
// Escribe datos formateados en un archivo (similar a printf, pero en archivo).
fprintf(archivo, "%s\n%d\n%.2f\n", nombre, edad, promedio);

// -- // -- FGETS -- // -- //
char *fgets(char *cadena, int n, FILE *archivo);
/*
Lee una línea de texto desde un archivo o desde la entrada estándar.
Lee hasta n-1 caracteres o hasta encontrar un salto de línea.
Añade un carácter nulo \0 al final de la cadena.
Devuelve la cadena leída o NULL si hay error o fin de archivo.
Nota importante: fgets incluye el salto de línea \n si lo encuentra, por eso a menudo hay que eliminarlo manualmente.
*/
