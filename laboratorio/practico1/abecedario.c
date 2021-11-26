/*Abecedario
Desarrollar el programa necesario que utilizando 2 funciones, una para generar letras y 
otra para guardar en un archivo opere de la siguiente manera:
El programa principal deberá:
Solicitar al usuario la cantidad de letras a generar
Llamar a fx Generar(), quien retornará una letra entre la A y Z en forma aleatoria
Mostrar por pantalla la letra a guardar
Llamar a fx Guardar(), pasando como parámetro la letra generada.

Condiciones:
Archivo tipo texto, nombre: letras.txt

*/
#include <stdio.h>





void guardar(int letra_generada){ 
  
    char letra[letra_generada];

    sprintf(letra, "%c", letra_generada);

    FILE *fichero;
    fichero = fopen("letras.txt", "at");

    fputs("La letra generada es: ",fichero);
    fputs(letra,fichero);
    fputs("\n",fichero);

    
    fclose(fichero);
}


int generar(int cantidad)
{
    cantidad = 65 + (rand() % 23);    

}

int main(){
    int icantidad = 0;
    int valor = 0;
    char letra[icantidad - 1];


    printf("Ingrese una cantidad de letras al azar que desea ver por sistema: \n");
    scanf("%i",&icantidad);

    for (int i = 0; i <= icantidad -1; i++)
    {
        letra[i] = generar(letra);
        printf("Letra %i", i);
        printf(" : %c \n", letra[i]);
    }

    printf("\n-Ingrese 1 para guardar y visualizar en un archivo .txt \n");

    scanf("%d", &valor);

  if (valor == 1)
    {
        //recorro el array de letras guardadas
        for (int i = 0; i <= icantidad -1; i++)
        {
            //guardo cada letra en archivo
            guardar(letra[i]);
        }
        return 0;
    }

    printf("Opcion incorrecta!!! \n");




    return 0;
}