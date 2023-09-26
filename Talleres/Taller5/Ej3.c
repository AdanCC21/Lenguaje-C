#include <stdio.h>
//prototipo
void contador ();

int main ()
{
    int i;
    for(i=0;i<10;i++)
    {
        contador();
    }
}

void contador ()
{
    static int n = 0;

    n++;
    printf("Tu valor es %d\n",n);
}
//Respuesta
//Cada vez que entre a la funcion aumentara el valor de n, conserva su valor a pesar de ser una variable local, durara para todo el codigo aunque salga de la funcion
//Lo que lo hace diferente a una variable automatica es que este mantiene su valor a pesar de salir del bloque de funcion