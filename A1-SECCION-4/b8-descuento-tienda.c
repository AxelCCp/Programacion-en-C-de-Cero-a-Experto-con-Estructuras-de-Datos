#include<stdio.h>

int main(){

    float valor, desc;

    printf("ingresa el valor de la compra: ");
    scanf("%f", &valor);

    printf("ingresa el descuento en porcentaje: ");
    scanf("%f", &desc);

    float valorConDesc = valor - valor * (desc / 100);

    printf("valor con descuento: %.2f", valorConDesc);


}