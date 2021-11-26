#include <stdio.h>

// struct : declaracion de un tipo de dato estructura 
// nos permite agrupar elementos relacionados, que poseen diferentes tipos de datos, bajo 1 nombre de variable. 
// 

struct Person       // convencion: nombre primer letra en mayuscula 
{
    char name[50];  // miembros 
    int citNo;
    float salary; 
    //int y = 0;  // COMPILER ERROR:  no se puede inicialiciar miembros aca 
                  // cuando declaramos un tipo de dato no hay asignacion de memoria, esto ocurre cuando las variables son creadas. 
};

struct Point
{
  int x, y;
};

// opcion con declaracion de variables: 
// struct Person
// {
//     char name[50];
//     int citNo;
//     float salary;
// } person1, person2, p[20];

// typedef : permite crear un alias para tipo de dato. 
// se usa para simplificar la sintaxis en la declaracion de variables.
typedef struct Distance{
    int feet;
    float inch;
} distancia ;


int main()
{
// - declaracion de variables 
  struct Person person1, person2, p[20];

  // en estructuras simples se pueden inicializar usando { }
  struct Point p1 = {0, 1}; 

  // usando un alias: 
  distancia d1, d2;  

// - Operadores para acceder a los miembros: 
  // .      - Member operator
  // ->     - Structure pointer operator  

  p1.x = 20;
  printf ("x = %d, y = %d\n", p1.x, p1.y);

// tambien podemos crear arrays de tipo estructura: 
  struct Point arr[10];
  
  // para acceder a sus miembros: 
  arr[0].x = 10;
  arr[0].y = 20;
  
  printf("%d %d\n", arr[0].x, arr[0].y);

// punteros a estructura 
  // al igual que con los tipos de datos primitivos, podemos declarar punteros a struct 
  // p2 es un puntero a la estructura p1 
  struct Point *punto2 ;
  punto2 = &p1;
  
  // accedemos a los miembros usando el operacion '->' (Structure pointer operator)
  printf("%d %d\n", punto2->x, punto2->y );
  // p2->x == (*p2).x 

  return 0;
}


