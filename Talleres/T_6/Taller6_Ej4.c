/*Taller 6 apuntadores Ejercicio 4
Gonzalez Cesena Adan 372799
Grupo 932
Fecha 17/10/2023
*/

.*"description".*\r?\ninclude <stdio.h>
.*"description".*\r?\ninclude <stdlib.h>
.*"description".*\r?\ninclude <time.h>
.*"description".*\r?\ninclude "libad.h"

int suma (int *ptr,int arreglo[], int num);

int main()
{
    srand(time(NULL));
    int c,i;
    int arreglo[7];
    c=num_alea_sr(arreglo,7,1,50);
    int*ptr;
    printf("Los valores origniales son:\n");
    for(i=0;i<7;i++)
    {
        ptr=&arreglo[i];
        printf("valor %d en posicion %d\n", *ptr,i+1);
    }

    system("PAUSE");
    
    suma(ptr,arreglo,5);
    for(i=0;i<7;i++)
    {
        printf("valor %d en la posicion %d\n",arreglo[i],i+1);
    }
}

int suma (int *ptr,int arreglo[], int num)
{
    for(int i=0; i<7;i++)
    {
        ptr=&arreglo[i];
        *ptr=*ptr+num;
    }
    return 0;
}