/*Juego de adivinanza con etiquetas y goto
Gonzalez Ceseña Adan 372799
13/09/2023
En este archivo contiene todo el codigo de la practica 3 del juego de adivinanza*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*definimos variables
    j=jugador, c=computadora o numero aleaotrio, op= la opcion para salir o reniciar el ciclo
    */
    int j, c, i,op;
    /*Inicio
    Iniciamos una etiqueta de inicio, colocamos una semilla para el numero aleatorio, le asignamos ese valor a c con residuo
    de 100 +1 para que tome numeros desde el 1 a al 100, definimos contador desde 0 e imprimimos una bienvenida
    srand=semilla
    c=donde se almacena el numero aleatorio
    i=contador*/
    inicio:
        srand(time(NULL));
        c=rand()%100 + 1;
        printf("Bienvenido al juego de adivianza, Empezemos\n");
        i=0;
    /*Desde aqui iniciamos la lectura de datos para que no tenga que imprimir de nuevo el mensaje de bienvenida
    , imprimimos desde donde a donde ingrese el numero, incrementamos el contador y agregamos condiciones
    i=contador*/
        lectura:
            printf("Pon un numero del 1 al 100 y veremos que tan cerca estas de la computadora\n");
            scanf("%d",&j);
            i++;
            /*Si esta fuera de rango lanzara un mensaje de error y lo regresara a 'lectura'*/
            if(j<1 || j>100)
            {
                printf("Fuera de rango\n");
                goto lectura;
            }
            /*Si son iguales imprimira un mensaje de felicidades junto al numero de intentos y saltara a la pregunta de si quiere salir o no*/
            if(j==c)
            {
                printf("ACERTASTE\nLos numeros son iguales, con un total de %d intentos\n", i);
            }
            /*Si j (Jugador) Es mayor a c (Numero aleatorio / computadora) imprimira un mensaje y lo regresara a la lectura
            de su numero nuevamente*/
            if(j>c)
            {
                printf("Muy arriba\n");
                goto lectura;
            }
            else
            {
            /*Si j (Jugador) Es menor a c (Numero aleatorio / computadora) imprimira un mensaje y lo regresara a la lectura
            de su numero nuevamente*/
                if(j<c)
                {
                    printf("Tu numero es muy bajo intenta de nuevo\n");
                    goto lectura;
                    return 0;
                }
            }
/*Desde aqui iniciamos el goto de reinicio de sistema, y dependiendo su respuesta saldra o repetira todo el programa*/
    reinicio:
        printf("Desea jugar de nuevo?\n1.-Repetir, 2.-Salir\n");
        scanf("%d",&op);
        if(op==1)
        {
            goto inicio;
        }
        else
        {
            if(op==2)
            {
                printf("Adios\n");
                return 0;
            }
            /*Si pone un numero fuera de rango lanzara error y lo regresara a preguntar nuevamente*/
            printf("Error, Fuera de rango\n");
            goto reinicio;
        }
}