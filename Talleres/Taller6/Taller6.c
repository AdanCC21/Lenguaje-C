/*
    Taller 6 Ejercicios Apuntadores y Argumentos de funciones
    Gonzalez Ceseña Adan 372799
    Grupo 932
    Fecha de Creacion 11/10/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libad.h"

// Prototipos
int multiplicarPorDos (int p);


//   Main

int main()
{
    srand(time(NULL));
    int *ptr;
    int x, r, ar[7];
    x=2;
    ptr = &x;
    printf("X es igual a %d", ptr);
    system("Pause");
    r=multiplicarPorDos (ptr);
    printf("Su valor multiplicado es %d", r);
    system("PAUSE");
    
}

//   Funciones
int multiplicarPorDos (int p)
{
    int b;
    b=p*2;
    return b;
}
