/* pedir al usuario 2 numero sumarlos, restarlos, multiplicarlos y dividirlos*/

#include <stdio.h> 

int main (){
    float n1, n2, suma=0, resta=0, mult=0, div=0;
    

    printf("digite 2 numeros: ");
    scanf("%f %f",&n1,&n2);

    suma = n1+n2;
    resta = n1-n2;
    mult = n1*n2;
    div = n1/n2;

    printf("la suma es: %.0f\n", suma);
    printf("la resta es: %.0f\n", resta);
    printf("la mult es: %.0f\n", mult);
    printf("la div es: %6.2f\n", div);

    return 0;
}