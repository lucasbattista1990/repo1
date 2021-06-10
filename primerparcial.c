/*Se deberá cargar primeramente una matriz de 20 x 20 con números enteros seleccionados aleatoriamente entre 100 y 500 
(incluidos los extremos).Una vez cargada la matriz se debe guardar en un archivo de texto con el nombre matriz.dat.
Defina una segunda matriz de 20 x 20 que se cargue con los datos del archivo matriz.dat recientemente guardados.
Para finalizar, mostrar por pantalla la matriz cargada desde
 el archivo y la suma total de los valores de sus filas pares e impares como Total pares: xxx | Total impares: xxx.*/

#include <stdio.h>

int matriz[20][20];

void cargar_matriz(int matriz[20][20])
{
    //lleno la matriz con numero rand entre 100 y 500
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            matriz[i][j] = (rand() % 401) + 100;
        }
    }
}

void guardar_archivo(int matriz[20][20])
{

    FILE *fichero;
    fichero = fopen("matriz.dat", "at");

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            fprintf(fichero, "%i\t", matriz[i][j]);
        }
        fprintf(fichero, "\n");
    }

    fclose(fichero);
}

void Matriz_cargada_por_archivo()
{
    int matriz[20][20];
    char *pc;
    char c[900];
    int par = 0;
    int impar = 0;

    FILE *fp;
    fp = fopen("matriz.dat", "r");

    if (fp == NULL)
    {
        printf("No se puede abrir el archivo. . . ");
        return 1;
    }

    while (fscanf(fp, "%s", c) != EOF)
    {
        printf("%s \t", c);
        if (atoi(c) % 2 == 0)
        {
            par += atoi(c);
        }
        else
        {
            impar += atoi(c);
        }
    }

    fclose(fp);

    printf("La suma de los pares es: %i \n", par);
    printf("la suma de los impares es: %i \n", impar);


    return 0;
}

int main()
{
    int matriz[20][20];
    int matrizDos[20][20];

    cargar_matriz(matriz);

    guardar_archivo(matriz);

    Matriz_cargada_por_archivo(matrizDos);

    return 0;
}
