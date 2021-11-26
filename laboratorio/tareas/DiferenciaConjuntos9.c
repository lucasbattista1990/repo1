/*Ejercicio 9) DIFERENCIA de conjuntos

Dados el conjunto A (5) elementos y el conjunto B (7) elementos:

A = {3; 6; 8; 22; 56;}
B = {8; 14; 33; 22; 43; 56; 72}

Resolver B - A = C 
*/

#include <stdio.h>

int main(){
    int A[5] = {3, 6, 8, 22, 56};
    int B[7] = {8, 14, 33, 22, 43, 56, 72};

    for(int i = 0; i < 5; i++)
    {
        printf("El conjunto A: \t %i \n",A[i]);
    }
    for(int i = 0; i < 7; i++)
    {
        printf("El conjunto B: \t %i \n",B[i]);
    }
    printf("\n \n");
    int ibandera;

    for(int i = 0; i < 7; i++)
    {
        ibandera = 0;
        for(int j= 0; j < 5; j++)
        {
            if(B[i] == A[j])
                ibandera = 1;
        }
    
        if(ibandera == 0)
        printf("La diferencia C es: %i \n",B[i]);
    }

    return 0;
}