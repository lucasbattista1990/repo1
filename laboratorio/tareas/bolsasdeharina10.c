/*Ejercicio 10) Cargar y mostrar vector

Contamos con un depósito donde se almacenan bolsas de harina de 50 Kg, las mismas se colocan en pilas
 numeradas de 1 a 10 de “n” bolsas cada una.

El desarrollo deberá solicitar al usuario una a una la cantidad de bolsas de cada pila,
 comenzando por la 1 hasta la pila 10. Las cantidades deberán ser almacenadas en un vector.

Luego de finaliza la carga de las 10 pilas deberá mostrarse al usuario la cantidad de bolsas estibadas por pila. 

Ejercicio 10.b) Cargar, totalizar  y mostrar vector

Modificar el ejercicio anterior de tal manera que, luego de solicitar al usuario la carga de las cantidades, además de mostrar como quedo 
cargado el vector nos informe:
Los Kg de harina que tenemos por cada estiba (pila)
Los Kg totales de harina en el deposito
La estiba (pila) que tiene mayor cantidad de bolsas

*/

#include <stdio.h>

int main(){
    int iPilas[11];
    int ikilos[11];
    int itotal = 0;
    int suma = 0;
    int cant_bolsas = 0;

    for(int i = 1; i <= 10; i++)
    {
        iPilas[i] = 0;
    }

    printf("Digite la cantidad de bolsas en cada pila :\n");


    for (int i = 1; i <=10; i++)
    {
    printf("Pila numero %i\n",i);
    fflush(stdin);
    scanf("%i",&iPilas[i]);
    ikilos[i] = (iPilas[i] * 50);
    itotal += ikilos[i];
    if(iPilas[i] >= suma)
    {
        suma =+ iPilas[i];
        cant_bolsas = i;
    }

    }
    
    for(int i = 1; i <=10 ; i++)
    {
        printf("La pila %i tiene %i bolsas.\t \n",i,iPilas[i]);

    }

    for (int i = 1; i <=10; i++)
    {
    printf ("\nLa cantidad de kg en la estiba numero %i es : %i",i,ikilos[i]);


    }   
    
    printf("\n\n");

    printf("\nLa mayor cantidad de bolsas esta en la pila ..%i.. con ..%i.. bolsas.", cant_bolsas, suma);


    



    return 0;
}