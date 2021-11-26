/*Ejercicio 4) Letras mayores o menores 
Escriba el código necesario para que se solicite al usuario: una letra entre la “B” y la “F” y 
un sentido “>” (mayores) o “<” (menores) para mostrar por pantalla las 5 letras posteriores o anteriores
 a la ingresada dependiendo el sentido solicitado.*/

 #include <stdio.h>

int main (){
    char cLetra = "";
    int iCaso = 0;

        printf("Digite una letra que este entre b y f :");
        scanf("%c",&cLetra);

        printf ("Digite el sentido a mostrar : \n 1.Mayores \n 2.Menores \n");
        fflush(stdin);
        scanf("%i",&iCaso);
        switch (iCaso)
        {       
            case 1: for (int i = cLetra; i <=102; i++)
            {   
                printf("%c \n",i);
            }          
            printf("\n Eligio el sentido mayor estas son las letras :");
            break;
            case 2: printf("\n Eligio el sentido menor a continuacion las letras :");
            for (int i = cLetra; i >=98; i--)
            {
                printf("%c \n",i);
            }
            break;

            default:    
            {
            break;
            }
        }
    return 0;
}
