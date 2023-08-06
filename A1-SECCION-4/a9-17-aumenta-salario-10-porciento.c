#include<stdio.h>

int main(){

    char nombre[40];
    printf("inserta tu nombre: ");
    
    scanf("%s", &nombre);

    printf("%s, cual es tu salario: ", nombre);

    int salario;
    scanf("%i", &salario);

    double salarioMas10 = salario * 1.1;

    printf("este es el salario con aumento del 10 porciento: %.2f", salarioMas10);

}