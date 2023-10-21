#include <stdio.h>

int max (int array[],int n);

int main ()
{
    int i,n,r;
    n=5;
    int array[n];
    printf("Rellene su arreglo\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    r=max(array,n);
    printf("Tu valor maximo es %d",r);
}

int max (int array[],int n)
{
    int *ptr;
    int i,m;
    ptr=&array[0];
    m=*ptr;
    for(i=1;i<n;i++)
    {
        if(array[i]>m)
        {
            m=array[i];
        }
    }
    return m;
}