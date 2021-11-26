#include <stdio.h>

typedef struct Direccion
{
  char calle[50];
  int numero;
  int piso;
  char depto;
} direccion_td ;

typedef struct Persona
{
  char nombre[30];
  long dni;
  direccion_td direccion;
  struct Direccion dir2; 
}Persona;


int main(int argc, char const *argv[])
{
  // declaro una variable de tipo Direccion
  direccion_td d;
  strcpy(d.calle,"Av. Siempre viva");
  d.numero = 743;
  d.depto = 'A';
  d.piso = 12;

  // declaro una variable de tipo Persona
  Persona p;
  strcpy(p.nombre,"Pablo"); // asigno el nombre
  p.dni = 23354212; // asigno el DNI
  p.direccion = d; // asigno la direccion

  // printf("", p.nombre,....)
  printf("direccion: \n");
  printf("Calle: %s\n", p.direccion.calle);
  printf("numero: %d\n", p.direccion.numero);


  return 0;
}


void cargarDireccion1(direccion_td* d)
{
  strcpy((*d).calle,"Mitre");
  (*d).numero = 1210;
  (*d).depto = 'C';
  (*d).piso = 7; 
}

void cargarDireccion2(direccion_td* d)
{
  strcpy(d->calle,"Mitre");
  d->numero = 1210;
  d->depto = 'C';
  d->piso = 7;
}



