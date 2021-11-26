/*⦁	3) –  (6P) – se desea desarrollar un sistema para gestionar Alumnos de una institución educativa.

Para ellos se cuenta con una estructura de personas con los siguientes datos: Apellido, Nombre, Documento,
Fecha Nacimiento, año de cursada.

Los años de cursada pueden ser 5. 
1: 1er año CB,  2: 2do año  CB, 3: 3er año CB, 4: 1er CS, 5: 2do año CS. La selección del año de cursada debe ser
 controlada al momento de la carga del alumno, 
cualquier otra opción ingresada debe informarse como “opción no válida” al usuario.

El Sistema brindará al usuario un menú repetitivo con las siguientes opciones: 
1: Alta alumno, 2: Listar alumnos, 3: Generar Comisiones, 4: Salir del sistema.  
Cualquier otra opción ingresada de menú debe informarse como “opción no válida” al usuario.

Detalle de la acciones del menú:

⦁	(1) Alta: solicitar en el Main() los datos al Alumno que deberán ser cargardos en la estructura de alumnos
 y enviados POR PARAMETRO a la función Guardar(). 
Antes de guardar en el archivo Alumnos.dat se debe validar que el alumno YA NO se encuentre cargado. 
Si Existiera debe informarse al usuario que el Alumno YA está ingresado 
y se mostraran sus datos.
⦁	(2) Listar: llamar a una función Listar() que muestre por pantalla todos los alumnos inscriptos hasta el momento.
⦁	(3) Generar: llamar a la función Generar(). Esta opción debe generar 5 archivos, uno por cada año de inscripción, 
tomando como base el archivo de general de alumnos. 
Se deberá mover cada alumno del archivo general al correspondiente por su año de inscripción. 
Una vez movidos todos los alumnos al archivo que corresponda deberá eliminarse el contenido del archivo alumnos.dat.
⦁	 (4) Salir: fin del sistema. */

#include <stdio.h>
#include <stdlib.h>

struct ALUMNOS
{
    char apellido[30];
    char nombre[30];
    int documento;
    int anio;
    int mes;
    int dia;
    int anio_cursada;
};
void guardar(struct ALUMNOS datos)
{

    FILE *fichero;
    fichero = fopen("Alumnos.dat", "at");
    fprintf(fichero, "Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
            datos.apellido, datos.nombre, datos.documento, datos.dia, datos.mes, datos.anio, datos.anio_cursada);

    fflush(fichero);
    fclose(fichero);
}

void listar(struct ALUMNOS datos)
{
    FILE *archivo;
    archivo = fopen("Alumnos.dat", "rt");

    if (archivo != NULL)
    {
        while (!feof(archivo))
        {
            fscanf(archivo, "Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
                   &datos.apellido, &datos.nombre, &datos.documento, &datos.dia, &datos.mes, &datos.anio, &datos.anio_cursada);

            printf("Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
                   datos.apellido, datos.nombre, datos.documento, datos.dia, datos.mes, datos.anio, datos.anio_cursada);
        }
    }
}

void generar(struct ALUMNOS datos)
{

    FILE *fp;
    fp = fopen("Alumnos.dat", "r");

    while (!feof(fp))
    {
        fscanf(fp, "%s \t %s \t %i \t %i \t %i \t %i \t %i \t",
               &datos.apellido, &datos.nombre, &datos.documento, &datos.dia, &datos.mes, &datos.anio, &datos.anio_cursada);
        printf("%i",datos.anio_cursada);
        if (datos.anio_cursada == 1)
        {
            FILE *fp;
            fp = fopen("1erañocb.dat", "at");
            fprintf(fp, "Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
                    datos.apellido, datos.nombre, datos.documento, datos.dia, datos.mes, datos.anio, datos.anio_cursada);

            fflush(fp);
            fclose(fp);
        }
        if (datos.anio_cursada == 2)
        {
            FILE *fp;
            fp = fopen("2doañocb.dat", "at");
            fprintf(fp, "Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
                    datos.apellido, datos.nombre, datos.documento, datos.dia, datos.mes, datos.anio, datos.anio_cursada);

            fflush(fp);
            fclose(fp);
        }
        if (datos.anio_cursada == 3)
        {
            FILE *fp;
            fp = fopen("3erañocb.dat", "at");
            fprintf(fp, "Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
                    datos.apellido, datos.nombre, datos.documento, datos.dia, datos.mes, datos.anio, datos.anio_cursada);

            fflush(fp);
            fclose(fp);
        }
        if (datos.anio_cursada == 4)
        {
            FILE *fp;
            fp = fopen("1erañocs.dat", "at");
            fprintf(fp, "Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
                    datos.apellido, datos.nombre, datos.documento, datos.dia, datos.mes, datos.anio, datos.anio_cursada);

            fflush(fp);
            fclose(fp);
        }
        if (datos.anio_cursada == 5)
        {
            FILE *fp;
            fp = fopen("2doañocb.dat", "at");
            fprintf(fp, "Apellido: %s\tNombre: %s\tDNI: %i\tFecha de Nac: %i/%i/%i\tAnio de cursada: %i \n",
                    datos.apellido, datos.nombre, datos.documento, datos.dia, datos.mes, datos.anio, datos.anio_cursada);

            fflush(fp);
            fclose(fp);
        }
    }

    fclose(fp);

}

void salir()
{
  int del = remove("Alumnos.dat");
}

int main()
{

    struct ALUMNOS datos;
    int opcion = 0;
    int opcion_cursada = 0;

    while (opcion != 4)
    {

        printf("Ingrese el numero de la opcion deseada. . . \n");
        printf("1: Alta alumno\t 2: Listar alumnos\t 3: Generar Comisiones\t 4: Salir del sistema\n ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese su Apellido: \n");
            scanf("%s", &datos.apellido);
            printf("Ingrese su Nombre: \n");
            scanf("%s", &datos.nombre);
            printf("Ingrese numero de DNI: \n");
            scanf("%i", &datos.documento);
            printf("Ingrese a%co de nacimiento: \n", 164);
            scanf("%i", &datos.anio);
            printf("Ingrese su mes de nacimiento: \n");
            scanf("%i", &datos.mes);
            printf("Ingrese su dia de nacimiento: \n");
            scanf("%i", &datos.dia);
            printf("\n");
            printf("Ingrese su a%co de cursada: \n", 164);
            printf("1: 1er a%co CB\t 2: 2do a%co  CB\t 3: 3er a%co CB\t 4: 1er a%co CS\t 5: 2do a%co CS\n", 164, 164, 164, 164, 164);
            scanf("%i", &datos.anio_cursada);

            guardar(datos);

            break;
        case 2:
            listar(datos);
            break;
        case 3:
            generar(datos);
            break;
        case 4:
            salir();
            break;
        default:
            printf("Opcion invalida . . .\n");
            break;
        }
    }
    return 0;
}