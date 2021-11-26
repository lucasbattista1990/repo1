#include <stdio.h>



int main()
{


    int matriz[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand()% 9+1;
            printf("%i \t", matriz[i][j]);
        }
        printf("\n"); 
    }


    Sumatriangulos(matriz);

    return 0;
}

void Sumatriangulos(int matriz[4][4])
{
    int superior=0, inferior=0;
    int mult=0;

    printf("El triangulo inferior es : \n");

    for (int i = 0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i>j)
            {
                printf(" %d ", matriz[i][j]);
                inferior = inferior + matriz[i][j];
            }
            else
            {
            printf(" ", matriz[i][j]);
            }
        }
    }

    printf("la suma de la triangular inferior es %d", inferior);
    printf("\n\n");
 
 
    printf("El triangulo superior es: \n");

    for (int i = 0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i<j)
            {
            printf(" %d ", matriz[i][j]);
            superior= superior + matriz[i][j];
            }
            else
            {
            printf(" ", matriz[i][j]);
            }
        }
    }

    printf("\n\nla suma de la triangular superior es %d",superior);
    printf("\n\n");

    mult = inferior * superior;

    printf("El resultado de la multiplicacion entre los 2 triangulos es %d", mult);
}