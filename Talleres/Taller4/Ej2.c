/*calcular Factorial con funcion que si retorna valores
Gonzalez Ceseña Adan 372799
16-09-2023
Este archivo contiene el contenido del ejercicio 2 del taller 4*/

#include <stdio.h>

int factorial();

int main()
{
    int r;
    r = factorial();
    printf("su num es %d",r);
}

int factorial()
{
    int r,num,i;
    printf("Escriba su numero\n");
    scanf("%d",&num);
    for(i=(num-1);i>0;i--)
    {
        r=num*i;
        num=r;
    }
    return r;
}