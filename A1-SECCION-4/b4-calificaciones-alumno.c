#include<stdio.h>

int main(){

    float calif1, calif2, calif3, examenFinal, trabajoFinal;

    printf("ingresa 1ra calificacion parcial: ");
    scanf("%f", &calif1);

    printf("ingresa 2da calificacion parcial: ");
    scanf("%f", &calif2);

    printf("ingresa 3ra calificacion parcial: ");
    scanf("%f", &calif3);

    printf("ingresa calificacion de examen final: ");
    scanf("%f", &examenFinal);

    printf("ingresa calificacion de trabajo final: ");
    scanf("%f", &trabajoFinal);

    float promedioNotas = (calif1 + calif2 + calif3) / 3;
    
    float notaFinal = promedioNotas*0.55 + examenFinal*0.30 + trabajoFinal*0.15;

    printf("Nota final: %2.f", notaFinal);

    return 0;
}