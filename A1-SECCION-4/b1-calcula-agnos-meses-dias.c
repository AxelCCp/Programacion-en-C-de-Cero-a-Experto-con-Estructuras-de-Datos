#include<stdio.h>

int main(){

    printf("ingresa una cantidad de agnos: ");

    int agnos;
    scanf("%i", &agnos);

    int meses = agnos * 12;
    int semanas = agnos * 12 * 4;
    int dias = agnos * 365;
    int horas = 365 * 24;

    printf(" Agnos : %i \n Meses: %i \n Semanas: %i \n Dias: %i \n Horas: %i", agnos, meses, semanas, dias, horas);
    
    return 0;

}