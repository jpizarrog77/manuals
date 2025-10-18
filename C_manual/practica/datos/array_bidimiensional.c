/*
En un hotel de 3 habitaciones el numero de las habitaciones se guarda en un array bidimensional
los valores que guardan son nº hab, precio en temporada baja, media y alta
Escribe un programa en el que se cree la matriz, se muestre el promedio de cada una de las temporadas
*/

int main () {
    float habs[3][4]={{1,20,25,40},{2,24,35,46},{3,29,39,59}};
    float suma_baja = 0, suma_media = 0, suma_alta = 0;
    int cantidad = 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 4; j++) { // no hace falta recorrer el número de hab
            if (j==1) {
                suma_baja += habs[i][j];
            } else if (j==2) {
                suma_media += habs[i][j];
            } else if (j==3) {
                suma_alta += habs [i][j];
            }
        }
    }
    float promedio_baja = suma_baja / cantidad;
    float promedio_media = suma_media / cantidad;
    float promedio_alta = suma_alta / cantidad;
    printf("El promedio de temporada baja es: %.2f \n", promedio_baja);
    printf("El promedio de temporada media es: %.2f \n", promedio_media);
    printf("El promedio de temporada alta es: %.2f \n", promedio_alta);
    return 0;
}

