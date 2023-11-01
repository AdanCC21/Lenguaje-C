#include <stdio.h>

int max (int array[],int n);

int main ()
{
    int i,n,r;
    n=5;
    int array[n];
    //Pedimos al usuario que rellene el arreglo
    printf("Rellene su arreglo\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    //lamamos la funcion
    r=max(array,n);
    //imprimimos resultados
    printf("Tu valor maximo es %d",r);
}

int max (int array[],int n)
{
    int *ptr;
    int i,m;
    //El puntero almacenara lo que contenga el arreglo en la posicion 0
    //m sera igual a lo que este apuntando ptr
    ptr=&array[0];
    m=*ptr;
    //El ciclo comparara lo que contenga m con todo el arreglo, si existe algo mayor remplazara el valor de m, hasta que termine de comparar con todas las posiciones
    for(i=1;i<n;i++)
    {
        if(array[i]>m)
        {
            m=array[i];
        }
    }
    //retornamos el valor de m
    return m;
}