#include <stdio.h>

main(){

int iNumero1, iNumero2, iNumero3;

iNumero1 = 9;
iNumero2 = 2;
iNumero3 = 5;

    if (iNumero1 > iNumero2 && iNumero1 > iNumero3)
    {
        printf(" %i \t",iNumero1);
            if(iNumero2 > iNumero3)
         {
               printf(" %i \t %i \n ",iNumero2, iNumero3); 
            }
            else
            {
                 printf("%i \t %i \n",iNumero3, iNumero2);
        }
    }
    printf("\n \n");

        if (iNumero1 < iNumero2 && iNumero1 < iNumero3)
        {
            printf("%i \t",iNumero1);
                       if (iNumero2 < iNumero3)
                        {
                             printf(" %i \t %i \n",iNumero2, iNumero3);
                        }
                        else
                        {
                            printf( "%i \t %i \n",iNumero3, iNumero2);
                        }
        }



    



}