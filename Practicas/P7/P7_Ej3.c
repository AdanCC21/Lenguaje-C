/*
    Gonzalez Cesena Adan 372799
    Practica 7 EJ3
    G-932 06/11/2023
*/

#include <stdio.h>
#include <string.h>
#include "libad.h"

int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max = 0, fila = 0, col = 0, suma = 0;
    int *ptr = &matriz[0][0];

    for (int i = 0; i < 3 * 3; i++)
    {
        suma += *ptr;
        if (*ptr > max)
        {
            max = *ptr;
            fila = i / 3;
            col = i % 3;
        }
        ptr++;
    }

    printf("Suma de la matriz %d\n", suma);
    printf("Elemento mas grande %d\n", max);
    printf("Fila %d\nColumna %d\n", fila, col);
}