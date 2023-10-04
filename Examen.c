#include <stdio.h>
#include "valid.h"

//prototipos

int main()
{
    int n,band,i,op;
    int acum=0;
    int vr[100];
    int j=0;
    inicio:
        do
        {
            printf("Ingrese un numero\n");
            scanf("%d",&n);
            if(n%2>0)
            {
                printf("intente de nuevo con un numero entero positivo\n");
                band=1;
            }
        }
        while(band!=0);

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