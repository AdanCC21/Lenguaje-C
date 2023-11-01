/*Taller 6 apuntadores Ejercicio 1
Gonzalez Cesena Adan 372799
Grupo 932
Fecha 17/10/2023
*/

.*"description".*\r?\ninclude <stdio.h>

int main()
{
    int x=3;
    int *ptr;
    *ptr=x;
    printf("x = %d, ptr = %d\n",x,ptr);
    return 0;
}