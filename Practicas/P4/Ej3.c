/*Ejercicio 3 practica 4
Gonzalez Cesena Adan 372799
21/09/2023
Calcular  el triangulo de pascal con el numero de lineas que pida el usuario*/

.*"description".*\r?\ninclude <stdio.h>

int coeficiente ();

int main() 
{
    int num;    
    printf("Ingrese el numero de filas que quiera generar para el tirangulo de pascal ");
    scanf("%d", &num);
    for (int n = 0; n < num; n++) 
    {
        for (int esp = 0; esp < num - n - 1; esp++) 
        {
            printf("   ");
        }
        for (int k = 0; k <= n; k++) 
        {
            int cof = coeficiente(n, k);
            printf("%6d", cof);
        }
        printf("\n");
    }
    return 0;
}

int coeficiente(int n, int k) 
{
    if (k == 0 || k == n) 
    {
        return 1;
    } else 
    {
        return coeficiente(n - 1, k - 1) + coeficiente(n - 1, k);
    }
}