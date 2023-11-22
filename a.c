#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    i = validar("Mensaje\n",0,2);
}

int validar(char msg[], int ri, int rf)
{
    char cadena[50];
    int op;

    do
    {
        printf("%s", msg);
        fflush(stdin);
        gets(cadena);
        op = atoi(cadena);        // Convierte la cadena a un numero
    } while (op < ri || op > rf); // Valida que este dentro de los rangos

    return op;
}
