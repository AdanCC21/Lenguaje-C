#include <stdio.h>

int main()
{
    int array1[6],array2[6],array3[6];
    int i;

    printf("llena tu primer arreglo\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Segundo arreglo\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\n");

    terc (array1, array2, array3);

    printf("arreglo 3\n");
    for(i=0;i<6;i++)
    {
        printf("%d ",array3[i]);
    }
}

void terc (int array1[],int array2[], int array3[])
{
    int *ptr1, *ptr2;
    int i,j;
    j=5;
    for(i=0;i<3;i++)
    {
        ptr1=&array1[i];
        array3[i]=*ptr1;
    }
    for(i=3;i<6;i++)
    {
        ptr2=&array2[i-3];
        array3[i]=*ptr2;
    }
}