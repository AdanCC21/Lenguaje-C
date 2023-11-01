#include <stdio.h>
#define TASA_DESCUENTO 0.1
int main()
{
    int x, y, r; //Ej 1Definir 2 variables
    r=(x+2 * y)/(3*x-y); //Ej 2
    printf("Tu resultado es %d\n", r);

    float po, pd ;
    printf("\nPonga el precio original del producto\n");
    scanf("%f",&po);
    pd = po * TASA_DESCUENTO;
    printf("su precio final con 10 de descuento es de %.2f \n", pd);
    return 0;
}
