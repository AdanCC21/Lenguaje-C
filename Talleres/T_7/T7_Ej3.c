/*  
    Taller 7 Ejercicio 3
    Gonzalez Cesena Adan 372799
    Grupo 932
    23/10/2023
*/

//      Prototipos      //
void imprim ();

#include <stdio.h>
#include <string.h>
#define N 3

//      Main        //
int main()
{
    imprim();
    return 0;
}

void imprim ()
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
}