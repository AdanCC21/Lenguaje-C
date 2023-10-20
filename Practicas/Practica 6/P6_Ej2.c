#include <stdio.h>

void copy (int array[],int array2[]);

int main()
{
    int array[5], array2[5];
    printf("Llena tu arreglo\n");
    fflush(stdin);
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    copy(array,array2);
    printf("\n");
    printf("Arreglo 1\n");
    
    printf("Arreglo 2\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d ",array2[i]);
    }
}

void copy (int array[],int array2[])
{
    int *ptr;
    int i;
    for(i=0;i<5;i++)
    {
        ptr=&array[i];
        array2[i]=*ptr;
    }
}