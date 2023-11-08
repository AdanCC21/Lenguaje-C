/*
    Gonzalez Cesena Adan 372799
    Practica 7 EJ2
    G-932 06/11/2023
*/

#include <stdio.h>
#include <string.h>
#include "libad.h"

int main()
{
    int n=5,i,j;
    char *palabras[] = {"manzana", "banana", "cereza", "uva", "naranja"};
    char *temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(palabras[i], palabras[j]) > 0)
            {
                temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\n", palabras[i]);
    }
}