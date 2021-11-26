/*Se tiene registrada la información sobre las notas de los exámenes finales de los alumnos de la facultad durante el presente año, 
en un archivo ordenado de forma ascendente por número de libreta. De cada alumno se conoce el: Numero de Libreta (LU),
Código de materia y nota obtenida.
Ejercicio 1: 
Listar los datos de los alumnos (Numero de libreta, código de materia y nota obtenida)
Sacar el promedio final (todas las notas de todos los alumnos) y el total de alumnos

Ejercicio 2: 
Listar los alumnos (Numero de libreta y Materia) que tengan la mayor calificación. ej: Si la nota mayor es 9, 
listar todos los alumnos que tengan en alguna materia la calificación de 9.
 
Ejercicio 3: (usar CC)
Listar el promedio y cantidad de materias de cada alumno respetando el siguiente formato de salida:
    Alumno: [código de alumno]
	Materias: [Cant. Materias]
	Promedio: [Promedio]

Considerar ahora que se cuenta con una copia del registro de alumnos ordenado de manera ascendente por materia.

Ejercicio 4: (usar CC)
Listar la cantidad de alumnos y el promedio por materia respetando el siguiente formato de salida:
        Materia: [código de materia]
		Alumnos: [Cant. Alumnos]
        Promedio: [Promedio]

    
*/
#include <stdio.h>

struct alumnos
{
    int LU;
    int CM;
    int nota;
};

int main()
{
    struct alumnos alumno, aux;
    int notaMAX = 0, contador = 0;
    float promedio = 0;

    FILE *archivo;
    archivo = fopen("examenes.dat", "rb");

    if (archivo == NULL)
    {
        printf("no se puede abrir el archivo\n");
    }

    fread(&alumno, sizeof(struct alumnos), 1, archivo);

    while (!feof(archivo))
    {
        aux.LU = alumno.LU;

        while (!feof(archivo) && aux.LU == alumno.LU)
        {
            contador++;
            notaMAX += alumno.nota;
            fread(&alumno, sizeof(struct alumnos), 1, archivo);
            printf("libreta: %i\tcodigo de materia: %i\tnota: %i\n", alumno.LU, alumno.CM, alumno.nota);
        }
        printf("El numero de alumnos es: %i \n", contador);
    }
    

        promedio = (float)alumno.nota / contador;
        printf("El promedio es: %.2f \n", promedio);

        printf("La nota mayor es: %i\n", notaMAX);

        notaMAX = 0;
        promedio = 0;
        contador = 0;
    fclose(archivo);

    FILE *archivo2;
    archivo2 = fopen("examenes.dat", "rb");    if (archivo == NULL)
    {
        printf("no se puede abrir el archivo\n");
    }

    fread(&alumno, sizeof(struct alumnos), 1, archivo);


    while (!feof(archivo))
    {
        aux.LU = alumno.LU;

        while (!feof(archivo) && aux.LU == alumno.LU)
        {
            contador++;
            notaMAX += alumno.nota;
            fread(&alumno, sizeof(struct alumnos), 1, archivo);
            printf("materia: %i\tcantidad de alumnos: %i\tpromedio: %i\n", alumno.CM, contador, (float)alumno.nota/contador);
        }
    }

    fclose(archivo);

    return 0;
}