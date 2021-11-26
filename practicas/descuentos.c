#include <stdio.h>

int main(){
    float total, descuento, preciofinal; 

    printf("digite el total de su compra: ");
    scanf("%f", &total);

    descuento = total * 0.15;
    preciofinal = total - descuento;

    printf("el precio final de su compra es: $%.2f", preciofinal);

    return 0;
}