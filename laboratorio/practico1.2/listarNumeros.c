/*Listamos números
Comprobamos el desarrollo para listar números, de tal manera que se desea abrir el archivo 
“números.txt” generado anteriormente.

Leer el archivo para indicar cuales fueron los números ingresados
por el usuario y listar por pantalla los números contenidos en el archivo.

Características del archivo:
Archivo tipo texto, nombre: numeros.txt
*/
#include<stdio.h>
#include<stdlib.h>

void leer_archivo(){

    FILE* fichero =  fopen("../practico1/numeros.txt","r");
    char *file_contents = malloc(1024);

    while (fscanf(fichero, "%c", file_contents) != EOF) {
        printf("%s", file_contents);
    }

    fclose(fichero);


}

int main(){

    leer_archivo();

    return 0;
}