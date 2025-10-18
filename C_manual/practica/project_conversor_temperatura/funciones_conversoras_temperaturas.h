/*
gcc -c conversiones.c   # genera conversiones.o
gcc -c main.c           # genera main.o
gcc main.o conversiones.o -o conversor
*/

/* Esta estructura asegura que el archivo de cabecera solo se incluya una vez durante la compilación, 
aunque lo incluyas en varios archivos. */

// -  “Si no está definido el identificador CONVERSIONES_H...”
// - Es una condición que evita duplicación.
#ifndef CONVERSIONES_H
// - Define el identificador CONVERSIONES_H para que la próxima vez que se incluya este archivo,
// ya esté definido, y se salte su contenido
#define CONVERSIONES_H 

// Declaraciones de funciones
// - Aquí van las prototipos de las funciones que vas a usar en otros archivos .c.

double convert_fahrenheit_celsius(double original_temperature);
double convert_celsius_fahrenheit(double original_temperature);
double convert_celsius_kelvin(double original_temperature);
double convert_kelvin_celsius(double original_temperature);
double convert_fahrenheit_kelvin(double original_temperature);
double convert_kelvin_fahrenheit(double original_temperature);

// - Cierra la condición del #ifndef. 
// Si el archivo ya fue incluido antes, todo lo que está entre #ifndef y #endif se ignora.
#endif