#include <stdio.h>

typedef long Fecha ; 

// estructura o registro 
typedef struct Empleado
{
  int matricula;
  char nombre[20];
  Fecha fechaIngreso;
} Empleado;

int main(int argc, char const *argv[])
{

  Empleado e; 
  // e.matricula = 31234; // asigno la matricula
  // strcpy(e.nombre, "Juan"); // asigno el nombre
  // e.fechaIngreso = 20000628; // asigno la fecha
  // // 
  // printf("%s", e.nombre);

  return 0;
}


