#include <stdio.h>

int main(){
    int baseM, basem, area, altura;
    printf("digite la base mayor: "); scanf("%i",&baseM);
    printf("digite la base menor:"); scanf("%i",&basem);
    printf("digite la altura: "); scanf("%i",&altura);

    area = ((baseM + basem)*altura)/2;
    
    printf( "\nel area es: %i", area);


    return 0;
}

