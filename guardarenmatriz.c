/*Guardar Matriz
Desarrollar el programa que permita guardar los datos de una matriz de 20 x 20 en un archivo de texto.
En primer lugar, se deberá utilizar una función para cargar la matriz con valores aleatorios considerando un valor de “random”
 ingresado por el usuario: ej: si ingresa 200, el “random” será entre 0 y 199.
Se requiere que la carga de la matriz se realizase en forma vertical.

Finalizada la carga, mostrar el contenido de la matriz por pantalla y resguardar la misma en el archivo de texto.

Condiciones:
Archivo tipo texto, nombre: matriz.txt
Si contiene información previa, la misma deberá truncarse.
*/

#include <stdio.h>
//#include<time.h>
int matriz[20][20];

void cargar_matriz(int matriz[20][20], int numero)
{
    //lleno la matriz
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            matriz[i][j] = rand() % numero;
            printf("%i \t", matriz[i][j]);
        }
    }
}
void guardar_archivo(int matriz[20][20])
{

    FILE *fichero;
    fichero = fopen("matriz.txt", "at");

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

int main()
{

    //srand(time(NULL));

    int matriz[20][20];
    int numero = 0;

    printf("Ingrese el maximo de numeros: \n");
    printf("Ejemplo: Si usted elige el 200 la matriz se llenara con numeros de 0 a 199. . .\n");
    scanf("%i", &numero);

    cargar_matriz(matriz, numero);

    guardar_archivo(matriz);

    return 0;
}
