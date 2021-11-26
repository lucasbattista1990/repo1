#include <stdio.h>>
#include <math.h>

int main (){
    float hipotenusa, cateto1, cateto2;


    printf("define el valor de los catetos:");
    scanf( "%f %f",&cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
    printf("la hipotenusa es: %.2f",hipotenusa);



}