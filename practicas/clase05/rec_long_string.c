#include <stdio.h>

// version Iterativa 
int longitud( const char * string )
{
  int i;
  int longitud ;

  longitud = 0;
  i = 0;

  while ( string [i] != '\0 ' ){
    longitud += 1;
    i += 1;
  }

  return longitud ;
}

// version Recursiva 
int longitud_rec ( const char * string , int i)
{
  if ( string [i]== '\0 ') {
    return 0;
  } else {
    return ( 1 + longitud_rec( string, i+1 ) ) ;
  }
}


int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}
