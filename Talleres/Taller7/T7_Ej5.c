#include <stdio.h>
#include <string.h>

#define MAX_PALABRAS 100
#define MAX_LONGITUD_PALABRA 50

void ordenarPalabras(char *palabras[], int numPalabras);

int main()
{
    char *palabras[MAX_PALABRAS];
    int numPalabras;
    int i;

    printf("Ingrese el número de palabras: ");
    scanf("%d", &numPalabras);

    if (numPalabras > MAX_PALABRAS)
    {
        printf("El número de palabras es demasiado grande. Se permiten hasta %d palabras.\n", MAX_PALABRAS);
        return 1;
    }

    printf("Ingrese las palabras una por una:\n");
    for (i = 0; i < numPalabras; i++)
    {
        palabras[i] = (char *)malloc(MAX_LONGITUD_PALABRA * sizeof(char));
        scanf("%s", palabras[i]);
    }

    ordenarPalabras(palabras, numPalabras);

    printf("Palabras ordenadas alfabéticamente:\n");
    for (i = 0; i < numPalabras; i++)
    {
        printf("%s\n", palabras[i]);
        free(palabras[i]); // Liberar la memoria asignada
    }

    return 0;
}

void ordenarPalabras(char *palabras[], int numPalabras)
{
    int i, j;
    char temp[MAX_LONGITUD_PALABRA];

    for (i = 0; i < numPalabras - 1; i++)
    {
        for (j = i + 1; j < numPalabras; j++)
        {
            if (strcmp(palabras[i], palabras[j]) > 0)
            {
                strcpy(temp, palabras[i]);
                strcpy(palabras[i], palabras[j]);
                strcpy(palabras[j], temp);
            }
        }
    }
}