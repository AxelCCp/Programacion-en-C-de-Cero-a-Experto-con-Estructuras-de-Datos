#include<stdio.h>

int main() {

    float valorHora;
    printf("ingresa el valor de tu hora de trabajo: ");
    scanf("%f", &valorHora);

    int horasDia;
    printf("cuantas horas trabajas al dia: ");
    scanf("%i", &horasDia);

    int diasTrabajo;
    printf("cuantos dias trabajaste: ");
    scanf("%i", &diasTrabajo);

    float salario = valorHora * horasDia * diasTrabajo;

    printf("tu salario es de: %.2f", salario);

}