.*"description".*\r?\ninclude <stdio.h>
.*"description".*\r?\ninclude <string.h>

//  Prototipos  //
int suma (int array[]);


int main()
{
    /*Definimos nuestro arreglo 
    r donde almacenaremos nuestro resultado
    y le pedimos al usuario 2 numeros*/
    int array[2], i,r;
    printf("Escriba 2 numeros\n");
    /*En un bucle registrara los 2 numeros*/
    for(i=0;i<2;i++)
    {
        scanf("%d",&array[i]);
    }
    //Mandamos la funcion
    r=suma(array);
    //Imprimimos resultados
    printf("Tu resultado es %d",r);
}

int suma(int array[])
{
    //Con el puntero ptr apuntamos a la direccion 0 del arreglo y la sumamos con la posicion siguiente
    int *ptr,r;
    ptr=&array[0];
    r=*ptr+array[1];
    //retornamos el resultado de la suma
    return r;
}