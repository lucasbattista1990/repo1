/*Cargamos alumnos
Para verificar la carga de alumnos, se nos solicita desarrollar la funcionalidad de lectura del archivo de alumnos.txt.
Para ello, desarrollar una función Mostrar() que recorra el archivo de alumnos y muestre uno a uno los Apellidos y Nombres contenidos.

Mostrar al final la cantidad de alumnos cargados en el archivo.

Características del archivo
Archivo tipo texto, nombre: alumnos.txt
*/

#include<stdio.h>
#include<stdlib.h>

int mostrar(){
    
    FILE* fichero;
	fichero = fopen("../practico1/alumnos.txt", "rt");
    char aux;
    if(fichero == NULL)
    {
        printf("Error en la apertura del archivo \n");
        return 1;
    }
    while(aux != EOF)
    {
        aux = fgetc(fichero);
        printf("%c", aux);
    }
    printf("\n");


    return 0;
}


int main(){
    
	mostrar();



    return 0;
}