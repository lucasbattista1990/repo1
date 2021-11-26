#include <stdio.h>

struct Alumno
{
    int numero_libreta;
    int codigo_materia;
    int nota;
};

main()
{
    struct Alumno alumno, auxiliar;
    int contador_materias = 0, acumulador_notas = 0; 
    float promedio = 0; 

    FILE *Archivo;

    Archivo = fopen("examenes.dat", "rb");

    if (Archivo == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
    }

    fread(&alumno, sizeof(struct Alumno), 1, Archivo);

    while (!feof(Archivo))
    {
        auxiliar.numero_libreta = alumno.numero_libreta; 

        while (auxiliar.numero_libreta == alumno.numero_libreta && !feof(Archivo))
        {
            contador_materias = contador_materias + 1; 
            acumulador_notas = acumulador_notas + alumno.nota; 

            fread(&alumno, sizeof(struct Alumno), 1, Archivo);
        }

        printf("\nAlumno: [%i]\n", alumno.numero_libreta); 
        printf("Materias: [%i]\n", contador_materias); 

        promedio = (float) acumulador_notas / contador_materias; 
        
        printf("Promedio: [%.2f]\n", promedio); 

        contador_materias = 0;
        acumulador_notas = 0; 
        promedio = 0; 
    }

    fclose(Archivo);

    return 0;
}