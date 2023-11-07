#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "libad.h"

//Datos enteros

int main(int argc, char *argv[])
{

    printf("Numero total de argumentos: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {

        printf("Argumento %d: %s\n", i, argv[i]);
    }
    printf("______________________________");

    return 0;
}