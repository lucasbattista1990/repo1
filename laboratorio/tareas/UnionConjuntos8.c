/*
Ejercicio 8) UNION de conjuntos

Dados el conjunto A (5) elementos y el conjunto B (7) elementos:

A[5] = {3; 6; 8; 22; 56}
B[7] = {8; 14; 33; 22; 43; 56; 72}

Resolver A + B = C 
*/





#include <stdio.h>
#include <string.h>

int main()
{
    int cConjuntoA[5] = {3, 6, 8, 22, 56}, cConjuntoB[7] = {8, 14, 33, 22, 43, 56, 72}, cConjuntoC[12];

    printf("\n\n");
    printf("CONJUNTO A");

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("%i\t %i", i, cConjuntoA[i]);
        cConjuntoC[i] = cConjuntoA[i];
    }

    printf("\n\n");
    printf("CONJUNTO B");

    for (int i = 0; i < 7; i++)
    {
        printf("\n");
        printf("%i\t %i", i, cConjuntoB[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        cConjuntoC[i] = cConjuntoB[i];
    }

    printf("\n\n");
    printf("CONJUNTO C");

    for (int i = 0; i < 12; i++)
    {
        printf("\n");
        printf("%i\t %i", i, cConjuntoC[i]);
    }

    return 0;
}