/*Ejercicio 3) Abecedario

Escriba el código necesario para que se soliciten al usuario una cantidad de letras y luego 
una a una las letras del abecedario indicando la letra anteriormente ingresa. 
Si el usuario ingresa una letra no correlativa en la secuencia el programa debe finalizar
 mostrando el mensaje: Se finalizó porque la  Letra es incorrecta.  
 Si logra ingresar la secuencia correcta finalizar mostrando el mensaje: Sin del programa.*/

#include <stdio.h>

int main(){
    int iCantidad = 0;
    char cLetra = "";
    char cNuevaletra = "";
    char cProxima = "";

    printf("ingrese letra de inicio: ");
    scanf("%c",&cLetra);
    printf("\n \n");
    
    printf("ingrese la cantidad de letras que desea contar: \n ");
    scanf("%i", &iCantidad);
    printf("\n \n");
  
    for(int i = 1; i < iCantidad; i++)
    {
        printf("Usted eligio la letra %c \n cual es la letra siguiente ? ", cLetra + i);
        fflush(stdin);
        scanf("%c",&cNuevaletra);
   
        cProxima = (cLetra + i + 1);
        if ( cNuevaletra != cProxima )
        {
            fflush(stdin);
            printf("\n No es la proxima letra. . . ");
            break;
        }
        
    
    }


    return 0;
}