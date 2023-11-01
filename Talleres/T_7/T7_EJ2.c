/*  
    Taller 7 Ejercicio 2
    Gonzalez Cesena Adan 372799
    Grupo 932
    23/10/2023
*/

#include <stdio.h>
#include <string.h>
#define N 3

int main()
{
    char *ptr[N];
    char temp[50];
    int i;
    
    for(i=0;i<N;i++)
    {
        printf("Escriba su nombre numero %d \n",i+1);
        gets(temp);
        ptr[i]=strdup(temp);
    }

    for(i=0;i<N;i++)
    {
        printf(" %s \n",ptr[i]);
    }

    return 0;
}