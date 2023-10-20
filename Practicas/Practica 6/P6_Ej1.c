#include <stdio.h>
#include <string.h>

//  Prototipos  //
int suma (int array[]);


int main()
{
    int array[2], i,r;
    printf("Escriba 2 numeros\n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&array[i]);
    }
    r=suma(array);
    printf("Tu resultado es %d",r);
}

int suma(int array[])
{
    int *ptr,r;
    ptr=&array[0];
    r=*ptr+array[1];
    return r;
}