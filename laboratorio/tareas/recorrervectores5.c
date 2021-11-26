/*Ejercicio 5) Recorremos un vector
Dado un vector de 8 posiciones, se pide realizar “n” pasos para   
mostrar el avance de un número a lo largo del vector.
Opeación: 
En el primer paso, deberá mostrar en vector con todos “0” (Ceros).
En los pasos posteriores se deberá mostrar un “1” (Uno) en la primer posición,
 un “1” (uno) en la segunda posición, y así sucesivamente hasta mostrar un “1” (uno) en la última posición
  del vector como muestra la imagen.*/

#include <stdio.h>

void mostrar();

int main (){
    int vector [8] ={0,0,0,0,0,0,0,0};//asigno el valor 0 a los espacios de los vectores
    mostrar(vector);//llamo a la funcion
    for (int i = 0; i < 8; i++) //recorro los vectores
    {
      vector[i-1] = 0;
      vector[i] = 1;

      mostrar(vector);
    }


  return 0;
}

void mostrar(int vector[8]) //ingreso funcion
  for(int i = 0; i < 8; i++)
  {
    printf("%i \t",vector[i]);
  }
  printf("\n\n");
}