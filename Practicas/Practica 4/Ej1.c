/*Ejercicio 1 practica 4
Gonzalez Cesena Adan 372799
21/09/2023
calcular ek fibonacci con una funcion sin recursion*/

#include <stdio.h>
#include <stdlib.h>
int menu ();
void fibo ();

int main ()
{
    menu();
}

int menu()
{
    int op;
    inicio:
        printf("\t\tBienvenido\n");
        printf("Profavor ingrese un valor para calcular fibonacci\n");
        fibo();
        system("cls");
        reinicio:
            printf("Desea repetir?\n1.-Salir 2.-Repetir\n");
            scanf("%d",&op);
            if(op==2)
            {
                goto inicio;
            }
            else
            {
                if(op==1)
                {
                    printf("Buen dia\n");
                    return 0;
                }
                else
                {
                    printf("Opcion invalida\n");
                    goto reinicio;
                }
            }
}

void fibo ()
{
    int i, num, ant, des, res;
    ant=-1;
    des=1;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        res=ant+des;
        printf(" %d ",res);
        ant=des;
        des=res;
    }
    printf("\n");
    system("PAUSE");
}