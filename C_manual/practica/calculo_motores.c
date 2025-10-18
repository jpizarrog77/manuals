// // PRACTICA STRUCT ANIDADOS // //

/*
Programa que almacene la información de un motor de combuistión interna 
y posteriormente muestre la cilindrada en CV. 
La informa del motor se almacena en un struct con estos campos y tipos de datos:
    - ID motor - valor númérico que identifica al motor de forma única
    - Cilindro - estructura de datos anidada
    - Nº de cilindros - n entero que indica cilindros motor
    - cilindrada
A su vez, cilindro es un estruct anidado que tiene estos campos:
    - diámetro - n real (en mm)
    - carrera - n real en mm
La información del cilindro se almacena en mm. El programa pide los datos del motor al usuario 
y calcula la cilindrada, q se almacena en el mismo struct de datos según esta fórmula:
    Vc = N + C + Pi + D^2 / 4
N - nº cilindros
C - representa la carrera del cilindro (en cm) 
D - diametro cilindro (en cm)
Pi - valor definido en libreria math.h como M_PI

Finalmente se muestran todos los datos introducidos por el usuario y la cilindrada del motor
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct cilindro {
    float D;
    float C;
};

struct infoMotor {
    int id;
    struct cilindro cilindro1;
    int n_cilindros;
    float cilindrada; // es que calculamos
};


int main () {
    
    // 1º se inicializa una variable para el struct que almacena la info del motor
    struct infoMotor infoMotor1;
    // Se pide al usuario la información que se necesita
    printf("Intriduce el identificador \n");
    scanf("%d", &infoMotor1.id); // lo guardo en la variable del struct en su campo correspondiente

    printf("Introduce el diamtro del cilindro(mm) \n");
    scanf("%f", &infoMotor1.cilindro1.D);

    printf("Introduce la carrera del cilindro(mm) \n");
    scanf("%f", &infoMotor1.cilindro1.C);

    printf("Introduce el numero total de cilindros \n");
    scanf("%d", &infoMotor1.n_cilindros);

    // calculo de la cilindrada
    infoMotor1.cilindrada = infoMotor1.n_cilindros * (infoMotor1.cilindro1.C / 10) * M_PI * pow(infoMotor1.cilindro1.D/10,2) / 4;
    // muestro el identificador del coche y su cilindrada
    printf("Identificador: %d y su cilindrada es: %f \n", infoMotor1.id, infoMotor1.cilindrada);
    return 0;
}


