#include <stdio.h>



int main (){
int inum1 = 5;
int inum2 = 8;
int inum3 = 10;
float ipromedio;

if (inum1>inum2 && inum1>inum3)
{
    printf("El numero mayor es :%i\n",inum1);}


else 
if (inum2>inum1 && inum2>inum3)
{printf("El numero mayor es :%i\n",inum2);}
if (inum3>inum1 && inum3>inum2)
{printf ("El numero mayor es :%i\n",inum3);
}
else
{printf ("Hay alguna igualdad");}
printf("\n");
if (inum1<inum2 && inum1<inum3)
{printf ("El numero menor es : %i\n",inum1);
}
else if (inum2<inum1 && inum2<inum3)
{printf("El numero menor es :%i \n",inum2);
}
else
{printf ("El numero menor es : %i \n",inum3);}
printf ("\n");
ipromedio = (inum1+inum2+inum3)/3;
printf ("Su promedio es : %.2f \n",ipromedio);








    return 0;
}