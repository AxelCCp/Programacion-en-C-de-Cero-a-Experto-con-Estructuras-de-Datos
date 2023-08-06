#include <stdio.h>

int main(){
    int num1, num2;

    printf("ingresa num1 : ");
    scanf("%i", &num1);

    printf("ingresa num2 : ");
    scanf("%i", &num2);

    int suma = num1 + num2;

    int resta = num1 - num2;

    int mult =num1 * num2;

    float div = num1 / num2;

    printf("suma: %i  resta: %i  multiplicacion: %i  division: %.2f", suma, resta, mult, div);    


}


