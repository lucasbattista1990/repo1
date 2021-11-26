/*Abecedario
Desarrollar el programa necesario que recuperar letras almacenadas en el archivo letras.txt.

El programa principal deberá acumular la cantidad de cada una de las letras en un vector para luego mostrarlo por pantalla.

Características del archivo:
Archivo tipo texto, nombre: letras.txt
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    
    FILE* fichero;
	fichero = fopen("../practico1/letras.txt", "rt");
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
