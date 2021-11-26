/*TRABAJO PRÁCTICO Nº 2 
Algoritmos de ordenamiento en C. 
Investigar, explicar y programar uno de los siguientes algoritmos de ordenamiento:  • Selection Sort 
• Insertion Sort 
• Shell Sort 
• Merge Sort 
• Quick Sort */

//Insertion sort: 

#include<stdio.h>

int main() {
    //declaro las variables
   int a[50], i,j,n,t;
   //solicito al usuario la cantidad de elemetos y los elementos 
   printf("Ingrese el numero de elementos en la lista: \n");
   scanf("%d", &n);
   printf("Ingrese los elementos: \n");
   //recorro los elementos y los guardo en el array
   for(i=0; i<n; i++){
      scanf ("%d", &a[i]);
   }
   //aplico el metodo de ordenamiento de los elementos "insertion sort"
   for(i = 1; i <= n - 1; i++){
      for(j=i; j > 0 && a[j - 1] > a[j]; j--){
         t = a[j];
         a[j] = a[j - 1];
         a[j - 1] = t;
      }
   }
   printf ("Despues de usar el metodo de insercion ordenando los elementos son: \n");

   for (i=0; i<n; i++)
   {
        printf("%d \t", a[i]); 
   }



   return 0;
}

/*El metodo de insercion o insertion sort es uno de los metodos mas sencillos de utilizar y funciona muy bien para ordenar
un numero pequeño de elementos, funciona como las personas ordenamos las cartas de manera natural, ordenando de menor a mayor todas ellas
de izquierda a derecha. Este sistema funciona comparando de derecha a izquierda y acomodando 
de menor a mayor los elementos de un array o matriz.
La idea de este algoritmo de ordenación consiste en ir insertando un elemento de la lista ó un arreglo en la parte ordenada de la misma, 
asumiendo que el primer elemento es la parte ordenada, el algoritmo ira comparando un elemento de la parte desordenada de la lista
con los elementos de la parte ordenada, insertando el elemento en la posición correcta dentro de la parte ordenada,
y así sucesivamente hasta obtener la lista ordenada. */