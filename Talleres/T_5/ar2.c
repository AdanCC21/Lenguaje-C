#include <stdio.h>

// Declaración externa de la variable "saldo" declarada en archivo1
extern int variable;

int main() 
{
    // Modificamos el valor de "saldo" desde archivo2
    variable = 100;
    // Mostramos el valor final de "saldo"
    printf("Valor final de saldo desde ARCHIVO2.c: %d\n", variable);
    return 0;
}
//Respuesta
//Afecta a cual sea el ultimo archivo en ejecutarse