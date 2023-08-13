#include<stdio.h>

int main(){

    float n1, n2, n3, promedio;

    printf("Ingresa 3 calificaciones: ");

    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Notas ingresadas: %.1f  -  %.1f -  %.1f", n1, n2, n3);

    promedio = (n1 + n2 + n3) / 3;

    printf("\nPromedio : %.1f", promedio);

    

}