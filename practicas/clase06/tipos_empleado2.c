#include <stdio.h>

typedef long Fecha ; 

// estructura o registro 
typedef struct Empleado
{
  int matricula;
  char nombre[20];
  Fecha fechaIngreso;
} Empleado;

void agregarEmpleado(Empleado emps[], int* len, int leg, char* nom, Fecha f)
{
  emps[*len].matricula=leg;
  strcpy(emps[*len].nombre,nom);
  emps[*len].fechaIngreso=f;
  *len++;
}

int main(int argc, char const *argv[])
{
  Empleado aEmp[100];
  int len=0;

  agregarEmpleado(aEmp,&len,23213,"Juan",20101202);
  agregarEmpleado(aEmp,&len,11243,"Pablo",20081005);
  agregarEmpleado(aEmp,&len,10021,"Pedro",20050422);

  return 0;
}


