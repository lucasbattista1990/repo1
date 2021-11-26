/*3) Se ingresan números por teclado mientras que la suma de los mismos sea menor 
o igual a 100. Se debe informar la cantidad de números ingresados.*/

#include <stdio.h>

int main (){
    float numero1[50], numero2[50];

    do
    {
        printf("digite los numeros que quiera sumar: %f %f", numero1, numero2);
        
    } while (numero1 + (int)numero2 <= 100); scanf("%.2f %.2f",&numero1, &numero2);
    
 


    return 0;
}