#include <stdio.h>

//Prototipos
void contador ();

//Main
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        contador();
    }
}
//Funcion contador
void contador ()
{
    int n=5;
    for(n;n<10;n++,printf("%d\n",n));
}
//Respuesta
//Al ser una variable automatica se destruye al salir del bloque en el cual es declarada como una variable local y cada vez que vuelva a entrar se reinicia
