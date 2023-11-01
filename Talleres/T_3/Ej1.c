/*calcular Factorial con funcion que no retorna valores
Gonzalez Ceseña Adan 372799
16-09-2023
Este archivo contiene el contenido del ejercicio 1 del taller 4*/

.*"description".*\r?\ninclude <stdio.h>

void factorial(int n);

int main()
{
    int n,op;
    do
    {
        printf("Escriba su numero\n");
        scanf("%d",&n);
        factorial(n);
        printf("Desea repetir el proceso?\n1-salir 2-Repetir\n");
        scanf("%d",&op);
    }
    while (op==2);
    return 0;
}

void factorial(int n)
{
    int r,i;
    for(i=(n-1);i>0;i--)
    {
        r=n*i;
        n=r;
    }
    printf("su resultado es %d\n",n);
}