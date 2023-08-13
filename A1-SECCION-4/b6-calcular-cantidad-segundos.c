#include<stdio.h>
#include<math.h>

int main(){

    int horas;
    printf("ingresa una cantidad de horas: ");
    scanf("%i", &horas);

    long segundos = horas * pow(60, 2);

    printf("Segundos: %li", segundos);
}

