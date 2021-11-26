#include <stdio.h>
#include <string.h>

typedef struct Productos
{   int codigo_producto;
    char descripcion[100];
    int cantidad;
};


void listar ();
void guardar (struct Productos);
void calcular();

int main ()
{




    struct Productos producto;
    int len=0;

    printf("Cuantos productos desea ingresar :");
    scanf("%i",&len);

    for (int i = 0; i <len; i++)
    {
        printf("Ingrese el codigo del producto :\n");
        scanf("%i",&producto.codigo_producto);
        printf("Ingrese el nombre del producto :\n");
        fflush(stdin);
        scanf("%s",&producto.descripcion);
        printf("Ingrese la cantidad de productos que tiene  :\n");
        fflush(stdin);
        scanf("%i",&producto.cantidad);

        guardar(producto);
    }
       
    listar();

    calcular();
    return 0;
}



void guardar(struct Productos p)
{

    FILE* binario;
    binario = fopen("mm.bin", "ab");
            // CONTENIDO   , TAMAÑO DEL CONTENIDO   , ARCHIVO
    fwrite ( &p, sizeof(p), 1,  binario);
    
    fclose(binario);

}


void listar()
{
    FILE* archivo;
    archivo=fopen("mm.txt","rt");

    struct Productos pro;
    struct Productos p;

    while ( !feof(archivo))
    {
        fscanf (archivo,"%i %i %s", &pro.codigo_producto, &pro.cantidad, &pro.descripcion );
        printf("\n %i %i %s ", pro.codigo_producto, pro.cantidad, pro.descripcion);
    
    }
    
    fclose(archivo);


    FILE* binario;
    binario = fopen("mm.bin", "ab");
    
    while ( !feof(binario))
    {

     fread ( &p, sizeof(p),1,  binario);
     printf("\n %i %i %s ", p.codigo_producto, p.cantidad, p.descripcion);

    }

    fclose(binario);

}


void calcular()
{
 
    FILE* archivo;
    archivo=fopen("mm.txt","rt");

    struct Productos pro;

    int max = -9999;
    char Descripcion_maximo[100];

    while ( !feof(archivo))
    {
        fscanf (archivo,"%i %i %s", &pro.codigo_producto, &pro.cantidad, &pro.descripcion );
        if (pro.cantidad > max)
        {
            max= pro.cantidad;
            strcpy(Descripcion_maximo,pro.descripcion);
        }
    }
    
    fclose(archivo);

   
    printf("\n El producto con mayor cantidad es %s con %i de productos",Descripcion_maximo,max);


}