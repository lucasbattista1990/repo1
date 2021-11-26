/*2) Un cyber café necesita un programa para procesar la información
 relacionada con las  computadoras que posee. Se necesita leer cantidad de computadoras, y precio por hora  de uso.
  Luego ingresar la cantidad de horas de uso de cada computadora en el mes.  se pide:  
a) calcular el monto total recaudado por el cyber en el mes.  
b) informar cual fue la computadora con menor cantidad de horas de uso y monto recaudado  por la misma.  */

#include <stdio.h>

int main()
{
    int cant_pc = 0;
    int pc_menor = 0;
    float precioXhora = 0;
    float x_pc[cant_pc];
    float total = 0;
    float horas_mes = 0;
    float menor_consumo = 750;

    printf("Ingrese la cantidad de computadoras que posee el cyber cafe: ");
    scanf("%i", &cant_pc);

    printf("Indique el precio por hora: ");
    scanf("%f", &precioXhora);

    for (int i = 1; i <= cant_pc; i++)
    {
        printf("Ingrese cuantas horas de uso tuvo la PC %i \n", i);
        fflush(stdin);
        scanf("%f", &horas_mes);

        x_pc[i] = (horas_mes * precioXhora);


        total += x_pc[i];

        if (x_pc[i] <= menor_consumo)
        {
            menor_consumo = x_pc[i];
            pc_menor = i;


        }
    }
    printf("La pc %i es la que menor ganancias tuvo en el mes. Con %.2f hs", pc_menor, menor_consumo);
    printf("\nLa ganancia del mes es de $%.2f en total. ", total);

    return 0;
}