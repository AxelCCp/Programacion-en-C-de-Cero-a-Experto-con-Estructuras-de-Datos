#include<stdio.h>

#define PI 3.141592

int main(){

    float radio, circ;

    printf("Ingresa el radio de un circulo: ");

    scanf("%f", &radio);

    circ = 2 + PI * radio;

    printf("El diametro de la circunferencia es: %.4f", circ);

}