/*Taller 6 apuntadores Ejercicio 2
Gonzalez Cesena Adan 372799
Grupo 932
Fecha 17/10/2023
*/

#include <stdio.h>

int multiplicar (int *ptr);

int main()
{
    int a;
    a=5;
    int *ptr;
    ptr=&a;
    *ptr=multiplicar(ptr);
    printf("r= %d\n",*ptr);
    return 0;
}

int multiplicar (int *ptr)
{
    int r;
    r=*ptr * 2;
    return r;
}