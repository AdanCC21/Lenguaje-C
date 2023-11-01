#include <stdio.h>

void copy (int array[],int array2[]);

int main()
{
    //Le pedimos al usuario que llene los arreglos con ciclos
    int array[5], array2[5];
    printf("Llena tu arreglo\1n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    //Llamamos la funcion el arreglo original y el arreglo donde copiaremos los datos
    copy(array,array2);
    printf("\n");
    //Imprimimos valores
    printf("Arreglo 2\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d ",array2[i]);
    }
}

void copy (int array[],int array2[])
{
    //El puntero apuntara a la direccion 0 y lo que este apuntando lo almacenara en el arreglo 2 posicion 0, el 0 ire imcrementando hasta que sea menor a 5
    int *ptr;
    int i;
    for(i=0;i<5;i++)
    {
        ptr=&array[i];
        array2[i]=*ptr;
    }
}