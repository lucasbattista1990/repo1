#include <stdio.h>  


long int fibonacci( numero )
{
  if ( numero < 2) // Condicion de corte
    return numero ;
  
  return fibonacci( numero-1 ) + fibonacci( numero-2 ) ; // Llamado recursivo para numero -1 y luego para numero -2
}

int main(int argc, char const *argv[])
{
  int numero ;

  scanf("%i" ,&numero );

  long int resultado = fibonacci( numero );
  printf("El Fibonacci de %i es %lu",numero , resultado );

  return 0;
}
