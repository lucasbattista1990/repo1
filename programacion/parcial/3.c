#include <stdio.h>

struct PRODUCTO
{
    char codigo[50];
    char descripcion[50];
    int cantidad;
};

void archivo(struct PRODUCTO producto[])
{

    FILE *fichero;
    fichero = fopen("producto.txt", "wt");

    for (int i = 0; i < 3; i++)
    {
        fprintf(fichero, "Codigo: %s\nDescripcion: %s\ncantidad: %i\n", producto[i].codigo, producto[i].descripcion, producto[i].cantidad);
    }
    fflush(fichero);
    fclose(fichero);
}

void cargarProductos(struct PRODUCTO producto[], int posicion)
{

    printf("Ingrese CODIGO del producto: \n");
    scanf("%s", producto[posicion].codigo);

    printf("Ingrese DESCRIPCION del producto: \n");
    scanf("%s", producto[posicion].descripcion);

    printf("Ingrese CANTIDAD del producto: \n");
    scanf("%i", producto[posicion].cantidad);

}
int main()
{
    struct PRODUCTO producto[10];
    int cantidad_productos = 0;

    printf("\n***\n");
    printf("\n*BIENVENIDO AL SISTEMA DE INVENTARIO*\n");
    printf("\n***\n");
    printf("\n");
    printf("\n Por favor, ingrese la cantidad de productos que desea cargar: \n");
    printf("\n");

    scanf("%i", &cantidad_productos);

    if (cantidad_productos > 0)
    {
        for (int i = 0; i < cantidad_productos; i++)
        {
            printf("\nCargando el producto numero: %i \n", i + 1);
            cargarProductos(producto, i);
        }
    }
    else
    {
        printf("\n-Ocurrio un error, vuelva a ejecutar el programa nuevamente \n");
    }
    return 0;
}