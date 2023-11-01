.*"description".*\r?\ninclude <stdio.h>

void terc (int array1[],int array2[], int array3[]);

int main()
{
    int array1[6],array2[6],array3[6];
    int i;
    //Le pedimos al usuario que llene los 2 arreglos
    printf("llena tu primer arreglo\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Segundo arreglo\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&array2[i]);
    }
    //Llamamos la funcion con los 2 arreglos llenos y el arreglo que llenaremos en base a los otros 2 arreglos
    terc(array1, array2, array3);

    //Imprimimos valores
    printf("arreglo 3\n");
    for(i=0;i<6;i++)
    {
        printf("%d ",array3[i]);
    }
}

void terc (int array1[],int array2[], int array3[])
{
    //el puntero 1 apuntara a la primera direccion del arreglo 1 y copiara en la posicion i
    //El 2do puntero apuntara a la segunda direccion del arreglo 2 en la posicion i y la copiara en la posicion i+3, esto para evitar que se sobre escriba
    int *ptr1, *ptr2;
    int i;
    for(i=0;i<3;i++)
    {
        ptr1=&array1[i];
        array3[i]=*ptr1;
        ptr2=&array2[i];
        array3[i+3]=*ptr2;
    }
}