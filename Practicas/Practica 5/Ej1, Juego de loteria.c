/*Juego de loteria
Gonzalez Ceseña Adan 372799
09/30/2023
Practica 5*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Parametro deonde se almacenara el numero ganado
static int c;

//main inicial
int main()
{
    //J sera el numero que el juga dbdor ingrese para la loteria
    int j;
    //Generamos numero aleatorio y lo almacenamos en c Que es el numero ganador
    srand(time(NULL));
    c=rand() % (100 - 1 +1) +1;
    //Damos bienvenida y pedimos al usuario que ingrese su numero de loteria (j)
    printf("Bienvenido al juego de lootera\n");
    printf("Ingrese su numero\ndel 1 al 100\n");
    scanf("%d",&j);
    //comparamos respuestas, y si j (Jugador) es igual a c (Numero ganador) imprimira una mensaje de ganador, de lo contrario dara otro mensaje diciendo que perdio
    if(j==c)
    {
        printf("Felicidades has ganado\n");
    }
    else
    {
        printf("Perdiste, mucha suerte para la proxima\n");
    }
    return 0;
}