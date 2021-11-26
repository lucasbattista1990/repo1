#include <stdio.h>
// Indicar Par e Impar
/*Escribir el código necesario para mostrar los primeros 100 
números naturales comenzando en 1 (uno) indicando si es PAR o IMPAR 
(para ellos debe utilizar la función modulo: % Ej: 4 % 2 = 0 🡪 PAR | 3 % 2 = 1 */

int main (){
    int numero, sumap = 0, sumai = 0;

    for (numero = 1 ; numero <= 100; numero++)
         if (numero % 2 == 0)

         {
             sumap += numero;
             printf("%i es par\n",numero);}
         else{
             if(numero % 2 ==1)
              sumai += numero;
             {
            printf("%i es impar ",numero);
             }

        }
        printf("\n \n");
        if(numero % 2 == 0)
        sumap += numero;
        {
            printf("La suma de los pares es: %i\n", sumap);}

        if(numero % 2 == 1)
        sumai += numero;
        {
            printf("La suma de los impares es: %i\n");

        }
    return 0;
}