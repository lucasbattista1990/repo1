/*⦁	2) _  (2.5P) - Realizar la UNION de 2 conjuntos, A y B, en el conjunto C.
 Luego de la unión ordenar el conjunto resultante “C” por SHELL en forma ascendente. 

Dados el conjunto A (8) elementos y el conjunto B (10) elementos,  Resolver (B + A) = C (Se permiten valores duplicados).

A = {3, 16, 8, 21, 56, 5, 44, 32}
B = {8, 4, 32, 22, 4, 156, 72, 3, 85, 89}*/

#include <stdio.h>, <string.h>

main ()

{
int conjuntoA[5]= {3, 6, 8, 22, 56};
int conjuntoB[7]= {8, 14, 33, 22, 43, 56, 72};
int flag; 

flag = 0; 

printf("El conjunto union es: C= { ");

for (int i = 0; i < 7; i++)
{
    printf(" %i ", conjuntoB[i]); 

    if (i < 5)
    {
        for (int j = 0; j < 7; j++)
        {
        if (conjuntoB[i] == conjuntoA[j])
        {
           flag = 1;
        }
        if (flag == 0)
        {
            printf(" %i ", conjuntoA[j]); 
            flag = 0; 
        }
        }
    }
}

printf(" }"); 

return 0; 

}