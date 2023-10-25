#include <stdio.h>
#include <string.h>

#define MAX_PALABRAS 100
#define MAX_LONGITUD_PALABRA 50

void ord(char *palabras[], int numPalabras);

int main()
{
    char *ptr[MAX_PALABRAS];
    int nump;
    int i;

    printf("Ingrese el numero de palabras: ");
    scanf("%d", &nump);

    if (nump > MAX_PALABRAS)
    {
        printf("El numero de palabras es demasiado grande. Se permiten hasta %d palabras.\n", MAX_PALABRAS);
        return 1;
    }

    printf("Ingrese las palabras una por una:\n");
    for (i = 0; i < nump; i++)
    {
        ptr[i] = (char *)malloc(MAX_LONGITUD_PALABRA * sizeof(char));
        scanf("%s", ptr[i]);
    }

    ord(ptr, nump);

    printf("Palabras ordenadas alfabeticamente:\n");
    for (i = 0; i < nump; i++)
    {
        printf("%s\n", ptr[i]);
    }

    return 0;
}

void ord(char *ptr[], int nump)
{
    int i, j;
    char temp[MAX_LONGITUD_PALABRA];

    for (i = 0; i < nump - 1; i++)
    {
        for (j = i + 1; j < nump; j++)
        {
            if (strcmp(ptr[i], ptr[j]) > 0)
            {
                strcpy(temp, ptr[i]);
                strcpy(ptr[i], ptr[j]);
                strcpy(ptr[j], temp);
            }
        }
    }
}