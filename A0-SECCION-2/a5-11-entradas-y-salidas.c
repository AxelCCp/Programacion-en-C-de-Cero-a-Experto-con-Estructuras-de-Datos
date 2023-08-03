#include <stdio.h>

int main(){

    int q = 12;
    float w = 12.232;
    char e = 'w';

    printf("%i --- %.3f --- %c",q,w,e);
    /*
    printf("\n-------------scan int---------------------------\n");
    
    printf("El valor de la variable a (int):\n");

    scanf("%i", &q);

    printf("El valor que escribiste es: %i", q);


    printf("\n-------------scan float---------------------------\n");

    printf("El valor de la variable a (float):\n");

    scanf("%f", &w);

    printf("El valor que escribiste es: %.2f", w);      // %f


    printf("\n-------------scan char---------------------------\n");

    printf("El valor de la variable a (char):\n");

    scanf("%c", &e);

    printf("El valor que escribiste es: %c", e); 


    printf("\n-------------scan char[]---------------------------\n");

    char r[40];

    printf("Escribe tu nombre:\n");

    scanf("%s", &r);

    printf("El valor que escribiste es: %s", r);        */

    printf("\n-------------scan char[]----------gets()-----------------\n");                    //ESTE ADMITE ESPACIOS

    char z[40];

    printf("Escribe tu nombre:\n");

    gets(z);

    printf("El valor que escribiste es: %s", z);





    return 0;
}