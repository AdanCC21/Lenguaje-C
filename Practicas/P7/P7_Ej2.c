/*
    Gonzalez Cesena Adan 372799
    Practica 7 EJ2
    G-932 06/11/2023
*/

#include <stdio.h>
#include <string.h>
#include "libad.h"

void My_Min (char cad[], int lon);

int main()
{
    int n,i;
    char cad[30];
    n=strlen(cad);

    printf("Ingrese su cadena\n");
    gets(cad);
    My_Min(cad,n);
    for(i=0;i<n;i++)
    {
        //strcmp;
    }
}

void My_Min (char cad[], int lon)
{
    int i;
    for(i=0;i<lon;i++)
    {
        if(cad[i] >='A')
        {
            if(cad[i] <= 'Z')
            {
                cad[i]+=32;
            }
        }
    }
}