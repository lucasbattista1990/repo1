#include <stdio.h>
// Argumentos por linea de comando. 

int main(int argc, char const *argv[])
{
  printf("Cantidad de argumentos/parametros: %d\n", argc);

  printf("Nombre del programa: %s\n", argv[0]); 

  if( argc == 2 ) {
    printf("El argumento ingresado es %s\n", argv[1]);

  }
  else if( argc > 2 ) {
    printf("Demasiados argumentos.\n");
  }
  else {
    printf("Solo 1 argumento es esperado.\n");
  }
  
  return 0;
}
