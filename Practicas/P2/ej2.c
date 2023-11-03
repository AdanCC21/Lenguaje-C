/*Archivo ej3
Gonzalez Cesena Adan 372799
05/09/2023
Crear un programa que tome una calificación numérica y la convierta en una
calificación en letra utilizando operadores ternarios.*/
#include <stdio.h>
int main()
{
    int calif, op;
    printf("Bienvenido al sistema de calificaciones\n");
    do
    {
        printf("Porfavor escriba su calificacion del 1 al 100\n");
        scanf("%d",&calif);
        if(calif<59)
        {
            printf("Su calificacion que es %d, Es equivalente a ",calif);
            printf("F\n");
        }
        if(calif>=60 && calif<69)
        {
            printf("Su calificacion que es %d, Es equivalente a ",calif);
            printf("D\n");
        }
        if(calif>=70&& calif<79)
        {
            printf("Su calificacion que es %d, Es equivalente a ",calif);
            printf("C\n");
        }
        if(calif>=80 && calif<89)
        {
            printf("Su calificacion que es %d, Es equivalente a ",calif);
            printf("B\n");
        }
        if(calif>=90&&calif<=100)
        {
            printf("Su calificacion que es %d, Es equivalente a ",calif);
            printf("A\n");
        }
        do
        {
            printf("Quisiera repetir?\n1=Salir, 2=Repetir\n");
            scanf("%d",&op);
        }
        while(op<1 || op>2);
    }
    while(op==2);
}