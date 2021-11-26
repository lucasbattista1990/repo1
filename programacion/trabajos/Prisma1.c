/*EJERCICIO 3
https://drive.google.com/file/d/1pps5ONoncr0Ojfq3TRufZdopjYjePeeb/view
*/

#include <stdio.h>

struct Producto
{
    int codigo;
    char descripcion[50];
    int cantidad;
};

void cargarProductos(struct Producto array[], int posicion)
{
    struct Producto producto;

    printf("Ingrese CODIGO del producto: \n");
    gets(&producto.codigo);

    printf("Ingrese DESCRIPCION del producto: \n");
    gets(&producto.descripcion);

    printf("Ingrese CANTIDAD del producto: \n");

    gets(&producto.cantidad);

    array[posicion] = producto;


}

void mostrarMayor(struct Producto array[])
{

    struct Producto producto = {0, "...", 0};

    int codigo = 0;
    char desc = "";
    int cantidad = 0;

    for (int i = 0; i < 10 + 1; i++)
    {

        if (array[i].cantidad > cantidad)
        {
            codigo = array[i].codigo;
            desc = array[i].descripcion;
            cantidad = array[i].cantidad;
        }
    }

    printf("El producto con mas cantidad es: %i\n", codigo);
    printf("Descripcion: %c\n", desc);
    printf("Con una cantidad de %i\n", cantidad);
}


int main()
{
    int cantidad_productos = 0;
    struct Producto array_producto[10];

    printf("\n***************\n");
    printf("\n**BIENVENIDO AL SISTEMA DE INVENTARIO**\n");
    printf("\n***************\n");
    printf("\n");
    printf("\n Por favor, ingrese la cantidad de productos que desea cargar \n");
    printf("\n");

    scanf("%d", &cantidad_productos);

    if (cantidad_productos > 0)
    {
        for (int i = 0; i < cantidad_productos; i++)
        {
            printf("\nCargando el producto numero: %d \n", i + 1);
            cargarProductos(array_producto, i);
        }

        mostrarMayor(array_producto);
    
    }
    else
    {
        printf("\n-Ocurrio un error, vuelva a ejecutar el programa nuevamente \n");
    }

    return 0;
}