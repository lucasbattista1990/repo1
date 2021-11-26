#include <stdio.h>

// Algoritmo de búsqueda 

// Búsqueda binaria o dicotómica : 
// El algoritmo de la búsqueda dicotómica consiste en inspeccionar el array ordenado descartando
// todos aquellos elementos que son superiores e inferiores al valor que estamos buscando.
// Dado que el array debe estar ordenado entonces los elementos superiores ocuparán
// posiciones posteriores y los elementos inferiores ocuparán posiciones anteriores a
// la del elemento que buscamos.

// La función permite buscar el valor v dentro del array a cuya longitud es len. Si a
// contiene a v entonces retornará la posición de v dentro de a y asignará true a enc.
// De lo contrario, simplemente asignará false en dicho parámetro.
int busquedaBinaria(int a[], int len, int valor_buscado, int* enc)
{
  int i = 0;  // limite inferior 
  int j = len - 1; // limite superior 
  int k = (i+j) / 2;  // mitad 
  int encontrado = 0;

  //while( !encontrado && i<=j ) {
  while( encontrado==0 && i<=j ) {

    if( a[k] > valor_buscado ) {

      j = k - 1; // movemos limite superior

    } else {

      if( a[k] < valor_buscado ) {

        i = k + 1; // movemos limite inferior 

      } else {
        
        encontrado = 1;

      }
    }

    k = (i+j) / 2;

  }

  *enc = encontrado;
  
  return k;
  // return v<=a[k]?k:k+1;

}


int main(int argc, char const *argv[]) 
{
  // defi no un array de enteros y ordenado
  int arr[50] = {1,4,7,9,10,12};
  int len = 6;
  int v, pos, enc;

  // busquemos en el array todos los nros entre -3 y 15 
  for(int i=-3; i<15; i++) {
    pos = busquedaBinaria(arr,len,i,&enc);
    printf("%d",i);

    if( enc ) {
      printf(" [encontrado], ");
    } else {
      printf(" [NO encontrado], ");
    }

    printf("pos=%d\n",pos);

  }
  
  return 0;
}
