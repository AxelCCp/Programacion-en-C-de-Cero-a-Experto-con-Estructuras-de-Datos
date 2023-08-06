#include<stdio.h>

int main(){

    float lado;
    printf("ingresa el lado de un cuadrado: ");
    
    scanf("%f", &lado);

    double area = lado * lado;
    printf("Area del cuadrado: %.2f", area);

    area = pow(lado, 2);
    printf("Area del cuadrado: %.2f", area);

    return 0;
}