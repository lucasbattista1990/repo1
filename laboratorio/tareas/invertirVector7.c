/*Ejercicio 7) Invertir un vector

Definir un vector de 10 elementos y pedir uno a uno las cantidades al usuario.

Una vez completada la carga, mostrar el vector original, invertir sus elementos y volver a mostrarlo invertido.

*/

#include <stdio.h>
#include <string.h>

int main()
{int vector[10];
printf("Digite 10 valores enteros por favor :\n");
for (int i = 1; i <=10; i++)
{ printf("Valor numero %i :",i);
scanf("%i",&vector[i]);
}

for (int i = 1; i <= 10; i++)
{printf("%i \t",vector[i]);
}

printf("\n \n");
for (int i = 10; i >=1; i--)
{printf("%i \t",vector[i]);
}

    return 0;
}