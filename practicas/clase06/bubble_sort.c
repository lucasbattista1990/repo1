#include <stdio.h>

// Algoritmos de ordenamiento:
// Bubble Sort 
// Selection Sort
// Insertion Sort
// Shell Sort
// Merge Sort
// Quick Sort

// Bubble Sort o de la Burbuja: 
// El algoritmo entonces será recorrer el array 
// comparando a[i] con a[i+1] para permutarlos si no están en orden.
// El proceso finalizará cuando realicemos una iteración en
// la cual no haya sido necesario realizar ninguna permutación.
void ordenar(int a[], int len)
{

}


void bubble_sort(int a[], int len)
{
  int ordenado = 0; // bandera o flag. 0: no hubo cambio, 1: hubo cambio

  // while( !ordenado ) { // ! : not => !false==true , !true==false , false==0 true<>0
  while( ordenado==0 ) { // ! : not => !false==true , !true==false , false==0 true<>0

    ordenado = 1;

    // recorrer array 
    for(int i=0; i<len-1; i++) {

      if( a[i] > a[i+1] ) {
        int aux = a[i];
        a[i] = a[i+1];
        a[i+1] = aux;
        ordenado = 0; // marco que hubo cambio 
      }
    }

  }

}


int main(int argc, char const *argv[])
{
  int a[] = {5,4,3,2,1};
  int len = 5;
  //len = sizeof(a)/sizeof(int);
  // 20/4 = 5 len 

  // 
  bubble_sort(a,len);

  // 
  for(int i=0; i<len; i++) {
    printf("%d\n",a[i]);
  }
  
  return 0;
}
