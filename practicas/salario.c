#include <stdio.h>


int main(){
    float horas, valor, salario;

    printf("cuantas horas trabajo: "); scanf("%f",&horas);

    valor = horas * 50;
    salario = horas * valor;


    printf("su salario es de: $%.2f",salario);

    return 0;
}