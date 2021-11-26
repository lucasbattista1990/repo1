/*
Ejercicio 1) Concatenar nombres
Escriba el código necesario utilizando STRCAT para:
Solicitar el Nombre
Solicitar el Apellido
Mostrar el siguiente mensaje: Su nombres es: [Apellido] , [Nombre]
*/

#include <stdio.h>
#include <string.h>

int main(){
    char cApellido[20], cNombre[20];

    printf("ingrese su apellido: ");
    scanf("%s",cApellido);
    
    printf("\n \n");

    printf("ingrese su nombre: ");
    scanf("%s",cNombre);

    printf("\n \n");

    strcat(cApellido,", ");

    printf("su apellido y nombre es: %s",strcat (cApellido,cNombre));

    printf("\n \n");


  


    return 0;
}