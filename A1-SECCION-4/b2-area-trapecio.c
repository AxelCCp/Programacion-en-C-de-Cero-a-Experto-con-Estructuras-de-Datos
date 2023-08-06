#include <stdio.h>

int main(){

    float ladoSup, ladoinf, altura;

    printf("ingresa el lado superior: ");
    scanf("%f", &ladoSup);
    printf("ingresa el lado inferior: ");
    scanf("%f", &ladoinf);
    printf("ingresa la altura: ");
    scanf("%f", &altura);

    float area = (altura/ 2) * (ladoSup + ladoinf);

    printf("El area del trapecio es: %.2f", area); 

    return 0;
}