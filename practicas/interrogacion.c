#include <stdio.h>
int main (){
    int sumap=0,sumai=0, numero;

for (int numero = 1; numero <= 100; numero++)
{
  printf ("%i \t",numero);
  (numero%2==0) ? printf("El numero es par\n",sumap=numero+sumap):
  printf("El numero es impar \n",sumai=numero+sumai);

}
printf ("la suma de pares son %i\n",sumap);
printf("la suma de impares es %i\n",sumai);
printf("\n");

    return 0;
}