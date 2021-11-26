#include <stdio.h>

// iterativa 
void imprimir_vector( char *string )
{
  int i;

  i = 0;

  while ( string[i] != '\0' ){
    printf(" %c",string [i]);
    i += 1;
  }

}


// recursiva 
void imprimir_vector_rec( const char * string , int i)
{
  if ( string[i] == '\0 ' ) {
    return ;
  } else {
    printf(" %c", string[i]);
    imprimir_vector_rec( string, i+1 ) ;
  }
}

// recursiva : imprime en orden inverso 
void imprimir_vector_inv_rec( const char * string , int i)
{
  if ( string[i] == '\0 ' ) {
    return ;
  } else {
    imprimir_vector_inv_rec( string , i+1) ;
    printf (" %c",string[i]);
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  char str[20] = "programacion1 "; 

  printf("imprimir_vector: "); 
  imprimir_vector(str); 

  printf("\nimprimir_vector_rec: "); 
  imprimir_vector_rec(str, 0); 
  
  printf("\nimprimir_vector_inv_rec: "); 
  imprimir_vector_inv_rec(str,0);

  return 0;
}
