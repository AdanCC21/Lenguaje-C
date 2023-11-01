/*Taller 6 apuntadores Ejercicio 3
Gonzalez Cesena Adan 372799
Grupo 932
Fecha 17/10/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libad.h"

int main()
{
    srand(time(NULL));
    int c;
    int *ptr;
    int arreglo[7];
    c=num_alea_sr(arreglo,7,1,50);
    
    for(int i=0;i<7;i++)
    {
        ptr=&arreglo[i];
        printf("valor %d en posicion %d\n", *ptr,i+1);
    }
    system("PAUSE");
    return 0;
}