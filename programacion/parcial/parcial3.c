/* 3) Crear un programa que permita registrar el inventario de un depósito.  El usuario deberá ingresar por teclado: 
código de producto, descripción y cantidad.  Almacenar internamente todos los datos leídos.  
Imprimir en pantalla:  
- el producto con mayor cantidad.  
- listado de todos los productos.  
Guardar en un archivo el listado de productos.  
Condiciones: Crear al menos 1 una función. No utilizar variables globales. 
*/

#include <stdio.h>

struct PRODUCTO
{
    char codigo[50];
    char descripcion[50];
    int cantidad[50];
};

void listar(struct PRODUCTO producto)
{
    FILE *archivo;
    archivo = fopen("producto.txt", "r");

    if (archivo != NULL)
    {
        while (!feof(archivo))
        {
            fscanf(archivo, "Codigo: %s\nDescripcion: %s\ncantidad: %i\n", &producto.codigo, &producto.descripcion, &producto.cantidad);

            printf("Codigo: %s\nDescripcion: %s\ncantidad: %i\n", producto.codigo, producto.descripcion, producto.cantidad);
        }
    }
}
void mostrarMayor(struct PRODUCTO producto)
{
    int codigo = 0;
    char desc = "";
    int cantidad = 0;

    FILE *archivo;
    archivo = fopen("producto.txt", "r");
    
    if (archivo != NULL)
    {
        while (!feof(archivo))
        {
            fscanf(archivo, "Codigo: %s\nDescripcion: %s\ncantidad: %i\n", &producto.codigo, &producto.descripcion, &producto.cantidad);

            if (producto.cantidad > cantidad)
            {
                int codigo = producto.codigo;
                char desc = producto.descripcion;
                int cantidad = producto.cantidad;
                
            }
        }
    }
    printf("EL MAYOR ES Codigo: %s\nDescripcion: %s\ncantidad: %i\n", codigo, desc, cantidad);
}
void archivo(struct PRODUCTO producto)
{

    FILE *fichero;
    fichero = fopen("producto.txt", "at");
    fprintf(fichero, "Codigo: %s\nDescripcion: %s\ncantidad: %i\n", producto.codigo, producto.descripcion, producto.cantidad);

    fflush(fichero);
    fclose(fichero);
}

void cargarProductos(struct PRODUCTO producto)
{

    printf("Ingrese CODIGO del producto: \n");
    scanf("%s", producto.codigo);

    printf("Ingrese DESCRIPCION del producto: \n");
    scanf("%s", producto.descripcion);

    printf("Ingrese CANTIDAD del producto: \n");
    scanf("%i", producto.cantidad);

    archivo(producto);
}
int main()
{
    struct PRODUCTO producto;
    int opcion = 0;

    printf("\n*******\n");
    printf("\n*BIENVENIDO AL SISTEMA DE INVENTARIO*\n");
    printf("\n*******\n");
    printf("\n");
    printf("\n Por favor, ingrese una opcion\n");
    printf("\n");
    while (opcion != 3)
    {
        printf("1: cargar producto:\t 2: listar productos\t 3: producto con mayor cantidad\t 4: salir\n");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            cargarProductos(producto);
            break;
        case 2:
            listar(producto);
            break;
        case 3:
            mostrarMayor(producto);
            break;
        case 4:
            break;
        default:
            printf("opcion invalida..\n");
            break;
        }
    }
    return 0;
}