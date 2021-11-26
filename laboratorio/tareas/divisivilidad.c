#include <stdio.h>

int main(){
    int n1, n2;

    printf("digite dos numeros: "); scanf(" %i %i", &n1, &n2);

    if (n1 % n2 == 0){
        printf("el numero %i es divisible por el numero %i \n", n1, n2);

    }
    else{
        printf("el numero %i no es divisible por el numero %i \n",n1,n2);
    }

    return 0;
}