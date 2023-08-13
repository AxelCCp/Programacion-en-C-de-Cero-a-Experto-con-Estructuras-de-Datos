#include<stdio.h>

int main(){

    float tempCelsius;
    
    printf("Ingresa una temperatura en celsius: ");
    
    scanf("%f", &tempCelsius);

    printf("%.2f", tempCelsius);

    float tempFarenheit = tempCelsius * 1.8 + 32;

    printf("\nTemperatura en farenheit: %.2f", tempFarenheit);

    printf("----------------------------------");

    float tempFaren;
    
    printf("Ingresa una temperatura en farenheit: ");

    scanf("%f", &tempFaren);

    printf("%.2f", tempFaren);

    float tempcel = (tempFaren - 32) / 1.8;

    printf("\nTemperatura en celsius: %.2f", tempcel);


}