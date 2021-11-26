#include <stdio.h>


int main ( ){

    printf("\n Con For: \n");
    for (int i = 1; i <=10; i++)
    {printf ("%i \t",i);
}
    printf ("\n");
    printf ("\n Con While \n");
    int iterador = 1;

    while (iterador <=10)
    {
        printf ("%i \t",iterador);
        iterador++;
}
        printf ("\n");
        printf ("\n Con Do \n");
        int iterador1 = 1;
        do
        {
            printf ("%i \t",iterador1);
             iterador1++;
}       
            while (iterador1 <=10);
            printf ("\n");




return 0;    
}