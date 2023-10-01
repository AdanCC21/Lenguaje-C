#include <stdio.h>
#include <stdlib.h> //Bibliteca para generar numeros aleatorios con srand y rand
#include <time.h> //bibliteca para generar la semilla en base a la hora de tu sistema, imte null

int main() 
{
    // Inicializar la semilla para generar números aleatorios basade en la hora de tu sistema y la almacena en srand que sirve para pasarle el dato a rand
    srand(time(NULL));

    // Generar un número aleatorio entre 1 y 100, usando el residuo de la division + 1 para no generar 0
    int numeroAleatorio = rand() % 100 + 1;

    int intentos = 0;
    int intentoUsuario; //contador de intentos

    printf("Bienvenido al juego de adivinar el numero\n");

    do {
        printf("Ingresa tu intento: "); //Pide vaores
        scanf("%d", &intentoUsuario);

        intentos++;
        
        if (intentoUsuario < numeroAleatorio - 20) 
        { //Cada vez que el usuario ingrese un numero el if determinara que tan cerca este, si el valor del usuario es menor al num aleatorio - 20 numeros dara que es muy bajo
            printf("Demasiado bajo. Intentalo nuevamente.\n");
        } else if (intentoUsuario < numeroAleatorio - 10) 
        {  //Lo mismo pero mas cerca y asi susesivamente
            printf("\nAlgo bajo. Intentalo nuevamente.\n");
        } else if (intentoUsuario < numeroAleatorio - 5) 
        {
            printf("\nBAJO PERO CERCA. Intentalo nuevamente.\n");
        }  else if (intentoUsuario < numeroAleatorio) 
        { 
            printf("\nBAJIIITOO PERO CERCA. Intentalo nuevamente.\n");
        } else if (intentoUsuario > numeroAleatorio + 20) 
        {
            printf("\nDemasiado alto. Intentalo nuevamente.\n");
        } else if (intentoUsuario > numeroAleatorio+10) 
        {
            printf("\nAlgo alto. Intentalo nuevamente.\n");
        }else if (intentoUsuario > numeroAleatorio +5) 
        {
            printf("\nALTO PERO CERCA. Intentalo nuevamente.\n");
        }else if (intentoUsuario > numeroAleatorio) 
        {
            printf("\nUN POQUITO ARRIBA PERO CERCA. Intentalo nuevamente.\n");
        }else //finalmente si no resulta ni ser mayor ni menor que el valor aleatorio, dara que es exacto y por lo tanto acertara
        {
            printf("\nFelicidades, Adivinaste el numero %d en %d intentos\n", numeroAleatorio, intentos);
        }

    } while (intentoUsuario != numeroAleatorio); //Termina y repite mientras el intento sea desigual al valor aleatorio

    return 0;
}
