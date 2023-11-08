#include <stdio.h>

//prototipos
int comp(int array1[],int array2[], int n);

int main()
{
    int n = 5 ,i,r;
    int array1[n], array2[n];
    //Pedimos al usuario que rellene los arreglos
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
    //Llamamos la funcion
    r=comp(array1,array2,n);
    //Imprimimos valores
    //Si r es mayor a 0 entonces significa que si hay valores que se repiten
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
    //el puntero 1 almacenara lo que este en la posicion i del arreglo 1
    //el puntero 2 almacenara lo que este en la posicion j del arreglo 2
    //Comparara lo que este almacenando el puntero 1 con el puntero 2, y el ciclo del puntero 2 recorrera todo el arreglo 2, una vez finalise el puntero 1 pasara a la siguiente posicion y de nuevo el puntero 2 lo comparara con todo el arreglo
    //Si llega a haber 2 numeros iguales el valor de c incrementara
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
    //retornamos c
    return c;
}