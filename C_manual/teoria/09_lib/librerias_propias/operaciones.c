

double opcion1_sumar(double A, double B){
    return A + B;
}

double opcion2_restar(double A, double B){
    return A - B;
}

double opcion3_multiplicar(double A, double B){
    return A * B;
}

double opcion4_dividir(double A, double B){
    if (B == 0) {
        printf("No divisible entre 0");
        return 0;
    }
    return A / B;
}
