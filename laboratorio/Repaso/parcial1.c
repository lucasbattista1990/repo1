/*Se desea administrar la carga personas para otorgar turnos de atención por ventanilla.

Al momento de solicitar un turno se pide a cada persona los siguientes datos: Nombre, Apellido, Documento, 
fecha de nacimiento y Nro. De ventanilla (1 al 10 inclusive) de atención el cual será calculado aleatoriamente.
Todos los datos deberán ser almacenados temporalmente en una estructura diseñada para tal fin.

Luego de cargada la persona en la estructura se deberá enviar la misma a una función que valide su NO existencia previa y 
guarde la misma en un archivo de texto.

La validación consta en asegurarse que el Documento ingresado NO se encuentre en los documentos de las personas
YA CARGADAS en el archivo. De existir mostrar mensaje indicando que la persona YA tiene un turno
asignado para la ventanilla “X”. Sino, dar de alta a la persona en el archivo.

Para la gestión, el sistema deberá ofrecer al usuario un menú con las opciones: Ingresar, Listar y Salir.

Detalle de las opciones:
Ingresar: proceso de alta de personas con su correspondiente validación y guardado en el archivo.
Listar: usando una función,  mostrar por pantalla el listado de personas cargadas en el archivo indicando
al final del listado la cantidad de personas listadas.
Salir: Finalizar la aplicación.

Al archivo de personas deberá borrarse con cada nuevo inicio del sistema.
*/

#include <stdio.h>

struct PERSONAS
{
    char nombre[30];
    char apellido[30];
    int documento;
    int dia;
    int mes;
    int anio;
    int ventanillaAsignada;
};

//defino estructura para cargar los datos de las personas

void validar(struct PERSONAS persona)
{
    //si encuentro el documento en el txt
    //mostrar por pantalla, " ya hay un turno asignado"
    //sino
    // mostrar "el turno fue guardado exitosamente"

    FILE *fp;
    char linea[255];

    int encontrado = 0;

    fp = fopen("turnos.txt", "r");

    while (fscanf(fp, "%s", linea) != EOF)
    {
        if (atoi(linea) == persona.documento)
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
        persona.ventanillaAsignada = rand() % 10;
        guardarEnArchivo(persona);
    }
}

void guardarEnArchivo(struct PERSONAS persona)
{

    //CASTEO CADA UNA DE LAS VARIABLES INT A CHAR CON SPRINTF
    char documento[10];
    sprintf(documento, "%d", persona.documento);

    char dia[10];
    sprintf(dia, "%d", persona.dia);

    char mes[10];
    sprintf(mes, "%d", persona.mes);

    char anio[10];
    sprintf(anio, "%d", persona.anio);

    char ventanilla[2];
    sprintf(ventanilla, "%d", persona.ventanillaAsignada);

    FILE *fichero;
    fichero = fopen("turnos.txt", "at");
    fputs("nombre: ", fichero);
    fputs(persona.nombre, fichero);
    fputs("\n", fichero);
    fputs("apellido: ", fichero);
    fputs(persona.apellido, fichero);
    fputs("\n", fichero);
    fputs("documento: ", fichero);
    fputs(documento, fichero);
    fputs("\n", fichero);

    //concateno dia, mes y año
    fputs("fecha de nacimiento: ", fichero);
    fputs(dia, fichero);
    fputs("/", fichero);
    fputs(mes, fichero);
    fputs("/", fichero);
    fputs(anio, fichero);
    fputs("\n", fichero);

    fputs("ventanilla asignada: ", fichero);
    fputs(ventanilla, fichero);
    fputs("\n", fichero);
    fputs("999\n", fichero);
    fclose(fichero);
}

void listar()
{
    FILE *fp;
    char linea[255];
    fp = fopen("turnos.txt", "r");
    int contador = 0;

    while (fscanf(fp, "%s", linea) != EOF)
    {
        if (atoi(linea) == 999)
        {
            contador += 1;
        }
        else
        {
            printf("%s", linea);
            printf("\n");
        }
    }

    fclose(fp);
    printf("La cantidad de personas con turnos son: %i\n", contador);
}

void borrarArchivo()
{
    int del = remove("turnos.txt");
}

int main()
{

    int cantidad;
    int opcion;

    struct PERSONAS persona;

    printf("Elegir una opcion para el sistema de turnos... \n\n");
    printf("1. Ingresar\t 2. listar\t 3. salir\n");
    scanf("%i", &opcion);

    if (opcion == 1)
    {
        borrarArchivo();

        printf("Ingrese la cantidad de turnos que desea otorgar: \n");
        scanf("%i", &cantidad);

        for (int i = 0; i < cantidad; i++)
        {
            printf("Ingrese su Nombre: \n");
            scanf("%s", &persona.nombre);
            printf("Ingrese su Apellido: \n");
            scanf("%s", &persona.apellido);
            printf("Ingrese su numero de documento: \n");
            scanf("%i", &persona.documento);
            printf("Ingrese su fecha de nacimiento:\n(utilizar metodo DD/MM/AAAA) \n");
            scanf("%i %i %i", &persona.dia, &persona.mes, &persona.anio);

            validar(persona);
        }
    }

    if (opcion == 2)
    {
        listar();
    }

    return 0;
}