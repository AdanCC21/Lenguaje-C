#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));

    // Generar un número aleatorio entre 1 y 100
    int numeroAleatorio = rand() % 100 + 1;

    int intentos = 0;
    int intentoUsuario;

    printf("¡Bienvenido al juego de adivinar el numero!\n");

    do {
        printf("Ingresa tu intento: ");
        scanf("%d", &intentoUsuario);

        intentos++;

        if (intentoUsuario < numeroAleatorio - 20) {
            printf("Demasiado bajo. Intentalo nuevamente.\n");
        } else if (intentoUsuario < numeroAleatorio - 10) {
            printf("algo bajo. Intentalo nuevamente.\n");
        } else if (intentoUsuario < numeroAleatorio - 1) {
            printf("BAJO PERO CERCA. Intentalo nuevamente.\n");
        }  else if (intentoUsuario < numeroAleatorio) {
            printf("BAJIIITOO PERO CERCA. Intentalo nuevamente.\n");
        } else if (intentoUsuario > numeroAleatorio + 20) {
            printf("Demasiado alto. Intentalo nuevamente.\n");
        } else if (intentoUsuario > numeroAleatorio+10) {
            printf("Algo alto. Intentalo nuevamente.\n");
        }else if (intentoUsuario > numeroAleatorio +1) {
            printf("ALTO PERO CERCA. Intentalo nuevamente.\n");
        }else if (intentoUsuario > numeroAleatorio) {
            printf("UN POQUITO ARRIBA PERO CERCA. Intentalo nuevamente.\n");
        }else {
            printf("¡Felicidades! ¡Adivinaste el numero %d en %d intentos!\n", numeroAleatorio, intentos);
        }

    } while (intentoUsuario != numeroAleatorio);

    return 0;
}
