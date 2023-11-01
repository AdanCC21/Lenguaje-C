/*Gonzalez Cese;a Adan 372799
examen 1
04-10-2023*/

#include <stdio.h>
#include "valid.h"

//prototipos

int main()
{
    //Declaracion de variables
    int n,band=0,i,op;
    int acum=0;
    int vr[100];
    int j=0;
    //etiqueta de inicio
    inicio:
        //mientras bandera sea diferente de 0 repetira
        do
        {
            printf("Ingrese un numero\n");
            scanf("%d",&n);
            //Si n es mayor a 0 entonces es un numero positivo
            if(n<=0)
            {
                printf("intente de nuevo con un numero entero positivo\n");
                band=0;
            }
            else
            {
                band=1;
            }
        }
        while(band==0);

        for(i=n-1;i>0;i--)
        {
            if(n%i>0)
            {
                //No hace nada
            }
            else
            {
                acum=acum+i;
                vr[j]=i;
                j++;
            }
        }
        
        if(acum==n)
        {
            printf("Es perfecto\nSus divisores son :\n");
            for(i=0;i<j;i++)
            {
                
                printf(" %d ", vr[i]);
                
            }
        }
        else
        {
            printf("Numero inperfecto\n");
        }
        printf("Desea repetir el programa");
        op=valid("\n1.-Repetir, 2.-Salir\n",1,2);
        if(op==1)
        {
            goto inicio;
        }
        else
        {
            printf("buen dia\n");
        }
}