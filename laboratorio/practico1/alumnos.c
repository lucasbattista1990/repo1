/*
Cargamos alumnos
Solicitar al usuario el ingreso de: apellido y nombre de 20 alumnos, los que serán guardados en una matriz.
Al finalizar la carga, los datos deberán ser resguardados en un archivo de texto utilizando una función Guardar() que reciba como parámetro la matriz.

Condiciones
Archivo tipo texto, nombre: alumnos.txt
Grabar archivo por flujos, un alumno por fila
Si el archivo contiene alumnos, se debe agregar al final.
*/

#include <stdio.h>
#include <string.h>

//estructura en donde guardo los nombres y apellidos
struct Alumnos
{
    char nombre[50];
    char apellido[50];
};
//funcion para guardar mi programa en un archivo
void Guardar(struct Alumnos alumno)
{
    //abro el archivo y le doy nombre
    FILE *fichero;
    fichero = fopen("alumnos.txt", "at");
    //indico que escribir en el
    fputs("nombre: ", fichero);
    fputs(alumno.nombre, fichero);
    fputs(" apellido: ", fichero);
    fputs(alumno.apellido, fichero);
    fputs("\n", fichero);
    //termino la funcion
    fclose(fichero);
}

int main()
{
    //llamo a struct y creo una variable en forma de matriz
    struct Alumnos matriz[2][10];
    //recorre la matriz con i y j
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        { //solicito ingreso de datos
            printf("Ingrese apellido del alumno : \n");
            gets(matriz[i][j].apellido);

            printf("Ingrese nombre del alumno : \n");
            gets(matriz[i][j].nombre);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            Guardar(matriz[i][j]);
        }
    }
    printf("Alumnos guardados en alumnos.txt");

    return 0;
}
