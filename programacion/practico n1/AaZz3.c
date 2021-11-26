/*  realizar una función que reciba un caracter en minúscula como parámetro y 
devuelva  convertido a mayúscula. Hacer la función inversa, 
que convierta de mayúscula a  minúscula. Crear un programa que utilice ambas funciones.  */



#include <stdio.h>

int funcion_1 ();


int main(){
char letra,letra_conver;
printf("Ingrese la letra a convertir :");
scanf("%c",&letra);
funcion_1(letra);
if(letra == (int)'ñ')
{
    printf("%c",165);
    return;
}
if(letra == (int)'Ñ')
{
    printf("%c", 164);
    return;
}
letra_conver=funcion_1(letra);
printf("La letra convertida es :%c",letra_conver);




    return 0;
}


int funcion_1(int a)
{
  int aux=0;
    if (a>=65 && a<=90)
    {aux= a+32;
    return aux;
    }
    if (a>=97 && a<=122)
    {
        aux=a-32;
        return aux;
    }
    
  

}