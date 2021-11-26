/*-(6P)- Se desea desarrollar un sistema para gestionar pacientes de una clínica médica.

Para ellos se cuenta con una estructura de pacientes con los siguientes datos: Apellido, Nombre, Documento, Fecha Nacimiento,
Especialidad.Las especialidades pueden ser 3, 1: Trauma, 2: Clínica y 3: Rayos. Debe ser controlada al momento de la carga del turno.
El Sistema brindará al usuario un menú con las siguientes opciones: 1: Alta turno, 2: Listar Turnos, 3: Generar Turnos,
4: Salir del sistema. Cualquier otra opción ingresada debe informarse como “opción no válida” al usuario.
Detalle de la acciones del menú:- Alta: solicitar en el Main() los datos al paciente que serán cargarlos en la estructura de
Pacientes y enviados a la función Guardar() que recibirá la estructura como parámetro. 
Antes de guardar en el archivo turnos.dat se debe validar que el paciente YA NO tenga un turno para esa especialidad 
controlando que no existen ese Documento y Especialidad. Si Existiera debe informarse al usuario que el paciente
YA tiene un turno para esa especialidad.- Listar: llamar a un funciones que muestro por pantalla todos los turnos
otorgados hasta el momento que se encuentran en el archivo de turnos.- Generar: esta opción debe generar 3 archivos 
(clínica.dat, trauma.dat y rayos.dat) tomando como base el archivo de general de turnos (turnos.dat) moviendo los pacientes
al archivo de destino correspondiente según la especialidad del turno dado. Los archivos clínica.dat, trauma.dat y rayos.dat
deben soportar agregación y al finalizar la distribución se debe eliminar el contenido del archivo turnos.dat. 
Ej: si el paciente pidió un turno para clínica deberán guardarse sus datos en el archivo clínica.dat.- Salir: fin del sistema.*/

#include <stdio.h>

struct PACIENTES
{
    char apellido[30];
    char nombre[30];
    int documento;
    int dia;
    int mes;
    int anio;
    int especialidad;
};

void validar(struct PACIENTES paciente)
{

    struct PACIENTES auxPaciente;

    FILE *fp;
    char linea[255];

    int encontrado = 0;

    fp = fopen("turnos.dat", "r");

    while (fscanf(fp, "%s", linea) != EOF)
    {
        fprintf(fp, "%s \t %s \t %i \t %i \t %i \t %i \t %i \t ", &auxPaciente.apellido, &auxPaciente.nombre, &auxPaciente.documento, &auxPaciente.dia, &auxPaciente.mes, &auxPaciente.anio, &auxPaciente.especialidad);

        if (paciente.documento == auxPaciente.documento && paciente.especialidad == auxPaciente.especialidad)
        {
            encontrado = 1;
            break;
        }
    }

    fclose(fp);

    if (encontrado == 1)
    {
        printf("LA PERSONA INGRESADA YA SE ENCUENTRA CON UN TURNO ASIGNADO \n");
    }
    else
    {
        guardarEnArchivo(paciente);
    }
}

void guardarEnArchivo(struct PACIENTES paciente)
{

    FILE *fp;
    fp = fopen("turnos.dat", "at");
    fprintf(fp, "%s \t %s \t %i \t %i \t %i \t %i \t %i \t ", paciente.apellido, paciente.nombre, paciente.documento, paciente.dia, paciente.mes, paciente.anio, paciente.especialidad);
    fprintf(fp, "\n");
    fclose(fp);
}

void guardarPorEspecialidad(struct PACIENTES paciente, char ruta)
{
    FILE *fp;
    fp = fopen(ruta, "at");
    fprintf(fp, "%s \t %s \t %i \t %i \t %i \t %i \t %i \t ", paciente.apellido, paciente.nombre, paciente.documento, paciente.dia, paciente.mes, paciente.anio, paciente.especialidad);
    fprintf(fp, "\n");
    fclose(fp);
}

void listar()
{

    int contador = 0;
    struct PACIENTES tt;

    FILE *archivo;

    archivo = fopen("turnos.dat", "rt");

    printf("\n\n Listado de turnos \n\n");

    while (!feof(archivo))
    {

        fscanf(archivo, "%s \t %s \t %s \t %i \t %i \t %i \t %i \n", &tt.apellido, &tt.nombre, &tt.documento, &tt.dia, &tt.mes, &tt.anio, &tt.especialidad);

        contador++;
        printf("\n %i- %s %s %s %i %i %i %i", contador, tt.apellido, tt.nombre, tt.documento, tt.dia, tt.mes, tt.anio, tt.especialidad);
    }

    fclose(archivo);

    printf("\n\n En total hay: %i turnos", contador);
}



void borrarArchivo()
{
    int del = remove("turnos.dat");
}

void generar()
{
    FILE *fp;
    char linea[255];

    struct PACIENTES auxPaciente;

    fp = fopen("turnos.dat", "r");

    while (fscanf(fp, "%s", linea) != EOF)
    {
        fscanf(fp, "%s \t %s \t %i \t %i \t %i \t %i \t %i \t", &auxPaciente.apellido, &auxPaciente.nombre, &auxPaciente.documento, &auxPaciente.dia, &auxPaciente.mes, &auxPaciente.anio, &auxPaciente.especialidad);

        if (auxPaciente.especialidad == 1)
        {
            guardarPorEspecialidad(auxPaciente, "trauma.dat");
        }
        if (auxPaciente.especialidad == 2)
        {
            guardarPorEspecialidad(auxPaciente, "clinica.dat");
        }
        if (auxPaciente.especialidad == 3)
        {
            guardarPorEspecialidad(auxPaciente, "rayos.dat");
        }
    }

    fclose(fp);

    borrarArchivo();
}

int main()
{
    struct PACIENTES paciente;
    int opcion = 0;
    printf("Ingrese la opcion deseada: \n");
    printf("1. Alta de turno. \t 2. Listar turnos. \t 3. Generar turno. \t 4. Salir del sistema.\n");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:

        printf("\n Ingrese apellido: ");
        scanf("%s", &paciente.apellido);

        printf("\n Ingrese Nombre: ");
        scanf("%s", &paciente.nombre);

        printf("\n Ingrese Documento: ");
        scanf("%i", &paciente.documento);

        printf("\n Ingrese Dia Nacimiento: ");
        scanf("%i", &paciente.dia);

        printf("\n Ingrese Mes Nacimiento: ");
        scanf("%i", &paciente.mes);

        printf("\n Ingrese A%co nacimiento: ", 164);
        scanf("%i", &paciente.anio);

        printf("\n Ingrese numero especialidad:   1: Trauma, 2: Clinica y 3: Rayos ");
        scanf("%i", &paciente.especialidad);

        if (paciente.especialidad != 1 || paciente.especialidad != 2 || paciente.especialidad != 3)
        {
            validar(paciente);
        }
        else
        {
            printf("\n especialidad incorrecta ");
        }

        break;

    case 2:

        listar();
        break;

    case 3:
        generar();
        break;

    default:
        printf("\n opcion incorrecta ");
        break;
    }

    return 0;
}