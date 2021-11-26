/*
Si la matriz debe almacenar el Apellido y Nombre del 20 alumnos la matriz debe configurarse de la siguiente manera:

Matriz [X] [Y] [Z]    donde " X ": cantidad de filas   
 |  " Y " : 20 posiciones para el apellido  
 |  " Z " : 20 posiciones para el nombre.




primero la carga (en el ejemplo solo cargue 5 alumnos) y luego el printf de los alumnos cargados en la matriz.
*/

#include <stdio.h>
#include <string.h>

//estructura en donde guardo los nombres y apellidos
struct Alumnos
{   
    int filas[2];
    char nombre[50];
    char apellido[50];
};
//funcion para guardar mi programa en un archivo
void Guardar(struct Alumnos alumno)
{
    //abro el archivo y le doy nombre
    FILE *fichero;
    fichero = fopen("alumnos3d.txt", "at");
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
    struct Alumnos matriz[2][1][1];
    //recorre la matriz con i y j
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int h = 0; h < 2; h++)
            { //solicito ingreso de datos
                printf("Ingrese apellido del alumno : \n");
                gets(matriz[i][j][h].apellido);

                printf("Ingrese nombre del alumno : \n");
                gets(matriz[i][j][h].nombre);
                printf("los alumnos son %s %s",i, j , h);
            }
            
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int h = 0; h < 5; h++)
            {
                Guardar(matriz[i][j][h]);
                break;
            }            
        }
    }
    printf("Alumnos guardados en alumnos.txt");

    return 0;
}
