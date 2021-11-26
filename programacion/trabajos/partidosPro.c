/*Elaborar un programa que permita ingresar el número de partidos de futbol ganados,
 perdidos y empatados, por algún equipo en el torneo, se debe de mostrar en pantalla
el puntaje total del equipo, teniendo en cuenta que por cada partido ganado obtendrá 3 puntos, 
empatado 1 punto y perdido 0 puntos.*/




#include <stdio.h>



int main (){
    //asigno variables
    int puntos=0, ganados=0,perdidos=0,empatados=0;
       // solicitar al usuario la cantidad de partidos y su resultado
        printf ("Digite la cantidad de partidos ganados luego empatado y perdidos :");
        scanf ("%i %i %i",&ganados,&empatados,&perdidos);
        printf ("\n");
        puntos = (ganados*3)+(empatados*1);
        printf ("Los puntos del equipo son : %i\n",puntos);




        return 0 ;
}