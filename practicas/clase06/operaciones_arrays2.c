#include <stdio.h>


int insertar(int a[], int *len, int valor, int pos_a_insertar) 
{
  for (int i = *len-1; i >= pos_a_insertar; i--)
  {
    a[i+1] = a[i];
  }
  a[pos_a_insertar] = valor; 
  *len += 1;  // longitud del array (cant de elementos)
  
} 

int insertarEnOrden(int a[], int* len, int valor)
{
  int i = 0;
  // 0<1 && 14<=10 
  // {10,14} , len=2 , valor=1
    // 0<2 && 10<=1
  // {1,10,14} , len=3 , valor=31
    // i=0 , 0<3 && 1<=31   => i+=1
    // i=1 , 1<3 && 10<31   => i+=1
    // i=2 , 2<3 && 14<31   => i+=1
    // i=3 , 3<3 &&  
  // {1,10,14,31} , len=4 , valor=5
    // i=0 , 0<4 && 1<=5  => i+=1
    // i=1 , 1<4 && 10<=5  
  while( i<*len && a[i]<=valor ) {
    i = i + 1;
  }
  // el bucle nos permite identificar la posicion(indice) donde agregar el 'valor' 

  // {14}, 1, 10, 0
  // {10,14}, 2, 1, 0
  // {1,10,14}, 3, 31, i=3
  // {1,10,14,31}, 4, 5, i=1
  insertar(a,len,valor,i);
  
  return i;
}
  // recorrer el array y preguntar si menor o mayor que el elemento [i] 
  // si menor: insertar


// devuelve posicion del valor buscado y true en 'enc' 
// o false en 'enc' y devuelve la poscion en la que deberia estar.
int buscarEnArrOrdenado(int a[], int len, int v, int* enc)
{
  int i=0;

  while(i<len && a[i]<v) {
    i=i+1;
  } 

  *enc = i<len;
  
  return i;
}


int main(int argc, char const *argv[])
{
  int arr[50];
  int len = 0;

  insertarEnOrden(arr,&len,14); 
  insertarEnOrden(arr,&len,31);
  insertarEnOrden(arr,&len,10); 
  insertarEnOrden(arr,&len,5);
  insertarEnOrden(arr,&len,12);
  insertarEnOrden(arr,&len,1);

  for(int i=0; i<len; i++) {
    printf("%d\n",arr[i]);
  }

  return 0;
}
