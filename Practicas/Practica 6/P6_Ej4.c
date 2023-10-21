#include <stdio.h>

//prototipos
int comp(int array1[],int array2[], int n);

int main()
{
    int n = 5 ,i,r;
    int array1[n], array2[n];
    printf("rellene su arreglo 1\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("rellene su arreglo 2\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
    }
    r=comp(array1,array2,n);
    if(r>0)
    {
        printf("Hay un total de %d numeros que se repiten\n",r);
    }
    else
    {
        printf("No hay numeros repetidos\n");
    }
    return 0;
}

int comp(int array1[],int array2[], int n)
{
    int *ptr,*ptr2;
    int i,c = 0;
    for(i=0;i<n;i++)
    {
        ptr=&array1[i];
        for(int j=0;j<n;j++)
        {
            ptr2=&array2[j];
            if(*ptr==*ptr2)
            {
                c++;
            }
        }
    }
    return c;
}