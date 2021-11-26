/*Ejercicio 6) Promedios y Aprobados del curso

Ingresar 15 notas entre 1 y 10 correspondientes a las calificaciones de los alumnos.

Se consideran que según la nota la condición de los alumnos es:
4 o menos 	🡪 RECURSA
5 a 7 	🡪 EXAMEN FINAL
8 o más 	🡪 PROMOCIÓN

De los datos ingresados obtener:
El promedio total del curso
Cantidad y promedio de los alumnos que recursan, promocionan y van a examen final.
*/
#include <stdio.h>
int main()
{
    int notas[16];
    float promedio_total = 0, promedio1 = 0, promedio2 = 0, promedio3 = 0;
    int contador1 = 0, contador2 = 0, contador3 = 0;
    float promedio_r=0,promedio_f=0,promedio_p=0;

    // solicito las notas y guardo en las posiciones de los vectores
    for (int i = 1; i <= 15; i++)
    {
        printf("Nota del alumno numero (Desde 1 a 10):%i:", i);
        fflush(stdin);
        scanf("%i", &notas[i]);
        if (notas[i] <= 4)
        {promedio1+=notas[i];
        contador1++;;
        }
        else if (notas[i] >= 5 && notas[i] <= 7)

          {promedio2+=notas[i];
         contador2++;
         }
        else
        { promedio3 = promedio3+notas[i];
         contador3++;
         }
        promedio_total += notas[i];
    }

    //almaceno la suma en promedio y la muestro dividiendo
    printf("El promedio de todas las notas es :%.2f \n", (promedio_total / 15));


    promedio_r=(promedio1/contador1);
    promedio_f=(promedio2/contador2);
    promedio_p=(promedio3/contador3);

    printf("La cantidad de alumnos que recursan son :%d, \nEl promedio de estos es :%.2f \n", contador1,(promedio_r));
    printf("La cantidad de alumnos que van a examen final son :%d,\nEl promedio de estos es :%.2f \n", contador2,(promedio_f));
    printf("La cantidad de alumnos que promocionan son :%d,\nEl promedio de estos es :%.2f \n", contador3,(promedio_p));

    return 0;
}