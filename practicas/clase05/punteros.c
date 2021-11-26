#include <stdio.h>


int main(int argc, char const *argv[])
{
  int longitud = 0; 
  int *pos ;  // declaro puntero a int 

  pos = &longitud; // asignarle una direccion de memoria, el operador '&' nos permite eso
  // pos contiene la dir. de memoria de la variable longitud. 

  // pos : contiene una direccion de memoria
  // *pos : accedemos al contenido de la dir. de memoria de pos 
  
  // cambio valor a donde apunta *pos 
  *pos = 44;  
  printf("longitud %d\n", longitud);  // 44
  printf("pos %d\n\n", *pos);         // 44


  longitud = 49; 
  printf("longitud %d\n", longitud);   // 49
  printf("pos %d\n", *pos);            // 49
  
  return 0;
}
