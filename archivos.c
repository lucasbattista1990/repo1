/*
Listamos números
Solicitar al usuario ingrese 2 números y por donde desea ver la salida: Pantalla o Archivo.
Desarrollar como mínimo 2 funciones, una para mostrar por pantalla y otra para guardar en un archivo, 
los números comprendidos entre los ingresados por el usuario.

Condiciones:
Archivo tipo texto, nombre: numeros.txt
*/

#include <stdio.h>

//funcion para crear y mostrar en archivo
void Escribir_en_archivo(int numero1, int numero2)
{

    FILE *fichero;
    fichero = fopen("numeros.txt", "wt");
    for (int i = numero1; i <= numero2; i++)
    {

        fprintf(fichero, "%i \n", i);
    }

    fclose(fichero);
}

//funcion para mostrar por pantalla
void Escribir_en_pantalla(int numero1, int numero2)
{
    for (int i = numero1; i <= numero2; i++)
        printf("Los numeros son: %i \n", i);

    printf("\n \n");
}

int main()
{

    int numero1 = 0;
    int numero2 = 0;
    int valor = 0;

    printf("Ingrese desde que numero:  \n");
    scanf("%d", &numero1);

    printf("Ingrese hasta que numero: \n");
    scanf("%d", &numero2);

    printf("¿Donde desea visualizar los numeros? \n");
    printf("-Ingrese 1 para mostrar por pantalla \n");
    printf("-Ingrese 2 para guardarlo en un archivo \n");
    scanf("%d", &valor);

    if (valor == 1)
    {
        Escribir_en_pantalla(numero1, numero2);
        return 0;
    }

    if (valor == 2)
    {
        Escribir_en_archivo(numero1, numero2);
        return 0;
    }

    printf("Opcion incorrecta!!! \n");

    return 0;
}