/*3) Se ingresan números por teclado mientras que la suma de los mismos sea menor o igual a 100. 
Se debe informar la cantidad de números ingresados.*/
#include <stdio.h>

int main()
{

    int final=0, incremento, error=0, bandera=0;

    printf("\n\n");

    printf("\nInicializamos en: %i\n", final);

    while (final < 100)
    {

        printf("\nIngrese un numero\n");
        scanf("%d", &incremento);
        printf("\n");
        printf("usted sumo %d \n", incremento);
        final=final + incremento;
        printf("\n");
        printf("la suma de los numeros es: %d", final);
        
        bandera++;
        

        if( final > 100)
        
        {

            printf(" ERROR!! \n");
            printf("El sistema solo permite sumar hasta 100\n");
            break;
        }
    }
    printf("Usted ha ingresado %i numeros", bandera);
    printf("\n\n");

    return 0;
}