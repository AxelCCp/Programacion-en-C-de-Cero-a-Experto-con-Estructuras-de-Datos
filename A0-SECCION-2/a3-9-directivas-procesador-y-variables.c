#include <stdio.h>          //esta es como la System.in

/*#include <string.h> 
#include <math.h>
#include <stdlib.h>*/

//macros : sirven para definir variables


int y = 5;                          //variable global

#define PI 3.1416                  //macro

int main(){
    int x = 10;
    int sumaInt = 0;
    sumaInt  = PI + x;

    float sumafloat = 0;
    sumafloat = PI + x;

    printf("La suma int es: %i \n", sumaInt);

    printf("La suma float es: %f \n", sumafloat);
    printf("La suma float es: %.2f", sumafloat);
    return 0;
}






