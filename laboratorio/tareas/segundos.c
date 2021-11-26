#include <stdio.h>

int main(){
    int horas, minutos, segundos, t1, t2, t3, total;
    
    printf("digite la cantidad de horas: \n"); scanf("%i", &horas);
    printf("digite la cantidad de minutos: \n"); scanf("%i",&minutos);
    printf("digite la cantidad de segudos: \n"); scanf("%i",&segundos);

    t1 = horas * 3600;
    t2 = minutos * 60;
    t3 = segundos * 1;

    total = t1 + t2 + t3;

    printf(" el equivalente en segundos es: %i segundos\n", total);





    return 0;
}