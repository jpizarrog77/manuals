/*
Función que recibe como parámetros
- un array de enteros por referencia
- la longitud del array y un número por valor
La función multiplica cada elemento del array por el número
*/



void multiple_elements_array (int *punt_array, int longitud_array, int num);

int main () {
    int array[5]={1,2,3,4,5};
    int num = 2;
    int longitud_array = 5;
    int *punt_array = &array[0];
    multiple_elements_array (punt_array, longitud_array, num);
    return 0;
}

void multiple_elements_array (int *punt_array, int longitud_array, int num) {
    for (int i = 0; i < longitud_array; i++) {
        int result = *(punt_array + i) * num;
        printf("%d \n", result);
    }
}