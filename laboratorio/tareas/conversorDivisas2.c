/*Ejercicio 2) Calculadora de moneda extranjera

Escriba el código necesario para que ingresando una moneda de Origen, una moneda de Destino y el valor de origen nos convierta al valor de la nueva moneda considerando hasta 2 decimales:
	Considerar para las conversiones las monedas: 
Pesos ($), 
Dolares (u$s)
Reales (r$) 
Euro (e$)
		Y sus valores respecto al peso Argentino: 
u$s 95.20 
r$  22.80 
e$ 103.72
	Ej:  
Moneda Origen: Pesos 	
Moneda Destino: Dolares
Cantidad origen: 100
Mostrar la leyenda: La conversión de [Pesos] a [Dolares] es: u$s 1.53
*/
#include <stdio.h>

int main(){
    int iOrigen, iCambio;
    float fTotal;
    const float fPesos = 1, fReales = 22.80, fDolar = 95.20, fEuro = 103.72;

    printf("Ingrese su moneda de origen...\n");
    printf(" 1. Pesos \n 2. Reales \n 3. Dolares \n 4. Euros ");
    printf("\n \n");

    scanf("%i",&iOrigen);
    printf("\n \n");

    printf("Ingrese a que moneda desea cambiar su dinero...\n");
    printf(" 1. Pesos \n 2. Reales \n 3. Dolares \n 4. Euros ");
    printf("\n \n");

    scanf("%i",&iCambio);
    printf("\n \n");



    if(iCambio==iOrigen)
        {
        printf("Accion imposible de realizar...");
        printf("\n \n");
        }
        else{
            printf("Ingrese la cantidad que desea cambiar...\n");
            scanf("%f", &fTotal);
            fflush(stdin);
        

    switch (iOrigen)
    {
    case 1:
        switch (iCambio)
        {
        case 2: printf("Usted elegio cambiar de Peso a Real...\n La cantidad es de r$%.2f ",(fTotal/fReales));        
                break;
        case 3: printf("Usted eligio cambiar de Peso a Dolar...\nLa cantidad es de us$%.2f \n",(fTotal/fDolar));
                break;
        case 4: printf("Usted eligio cambiar de Peso a Euro... \nLa cantidad es EU$%.2f \n", (fTotal/fEuro));             
                break;
                
        fflush(stdin);
        }
        break;
        
    case 2:
        switch (iCambio)
        {
        case 1: printf("Usted elegio cambiar de Real a Peso...\n La cantidad es de ARS$%.2f ",((fTotal*fReales)/fPesos));        
                break;
        case 3: printf("Usted eligio cambiar de Real a Dolar...\nLa cantidad es de us$%.2f \n",((fTotal*fReales)/fDolar));
                break;
        case 4: printf("Usted eligio cambiar de Real a Euro... \nLa cantidad es EU$%.2f \n", ((fTotal*fReales)/fEuro));             
                break;

        fflush(stdin);
        }
        break; 
    case 3:
        switch (iCambio)
        {
        case 1: printf("Usted elegio cambiar de Dolar a Peso...\n La cantidad es de ARS$%.2f  ",((fTotal*fDolar)/fPesos));        
                break;
        case 2: printf("Usted eligio cambiar de Dolar a Real...\nLa cantidad es de r$%.2f \n",((fTotal*fDolar)/fReales));
                break;
        case 4: printf("Usted eligio cambiar de Dolar a Euro... \nLa cantidad es EU$%.2f \n", ((fTotal*fDolar)/fEuro));             
                break;       
        fflush(stdin);
        }
        break;
    case 4:
        switch (iCambio)
        {
        case 1: printf("Usted elegio cambiar de Euro a Peso...\n La cantidad es de ARS$%.2f  ",((fTotal*fEuro)/fPesos));        
                break;
        case 2: printf("Usted eligio cambiar de Euro a Real...\nLa cantidad es de r$%.2f \n",((fTotal*fEuro)/fReales));
                break;
        case 4: printf("Usted eligio cambiar de Euro a Dolar... \nLa cantidad es us$%.2f \n", ((fTotal*fEuro)/fDolar));             
                break;            
        fflush(stdin);
        }
        break;
    }             
    

    }
        return 0;
}

    








