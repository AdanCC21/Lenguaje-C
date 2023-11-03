/*Archivo ej3
Gonzalez Cesena Adan 372799
08/09/2023
Hace un inventario en el cual el usuario puede agregar, quitar o mostrar elementos dentro del inventario
Inicializa un inventario vacío con una capacidad máxima.
o Presenta al usuario un menú que le permita agregar elementos al inventario, retirar
elementos y mostrar el inventario.
o Implementa un bucle que permita al usuario realizar múltiples operaciones.
o Utiliza incrementadores y decrementadores para ajustar la cantidad de elementos
en el inventario.
o Maneja situaciones en las que el inventario esté lleno o vacío.
o El programa debe terminar cuando el usuario decida salir.*/

#include <stdio.h>
int main()
{
    int sali, i, op, incop,c;
    float num1, in;
    int tam[15];
    c=0;
    printf("Bienvenido al sistema de inventario con un maximo de 15 cupos, iniciemos\n");
    do
    {
        for(i; i<=15; i++)
        {
            if(tam[i]>0 || tam[i]<0)
            {
                c++;
                if(c>15)
                {
                    printf("\nATENCION\nInventario lleno porfavor elimine algun elemento, de lo contrario automaticamente al agregar un numero en x posicion lo remplazara\n \n");
                    continue;
                }
            }

        }
        printf("Que operacion desea realizar?\n");
        printf("1.-Agregar num al inventario\n2.-Eliminar num al inventario\n3.-Mostrar num del inventario\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: //Agregar numero
                printf("Que numero quiere agregar al inventario?\n");
                scanf("%f",&num1);
                posicion:
                printf("En que posicion (del 1 al 15)\n");
                scanf("%d",&i);
                if(i>15 || i<0)
                {
                    printf("Fuera de rango\n");
                    goto posicion;
                }
                tam[i]=num1;
                sum:
                    printf("Listo\nDesea sumar o restar a su num alguna cantidad? (ej 3+1)\n1.-No 2.-Si\n");
                    scanf("%d",&incop);
                    if(incop>=1 && incop<=2)
                    {
                        if(incop==2)
                        {
                            printf("Que cantidad desea sumar?\n");
                            scanf("%f",&in);
                            num1=num1 + in;
                            tam[i]=num1;
                            printf("Listo\nSu numero quedo como %d, en la posicion %d\n", tam[i], i);
                        }
                        else
                        {
                            printf("Excelente\n");
                        }
                    }
                    else
                    {
                        printf("Fuera de rango\n");
                        goto sum;
                    }
                break;
            case 2: //Eliminar posicion
                posicion2:
                    printf("En que posicion esta el numero que quiere eliminar?\n");
                    scanf("%d",&i);
                    if(i>15 || i<1)
                    {
                        printf("Fuera de rango\n");
                        goto posicion2;
                    }
                    if(tam[i]!=0)
                    {
                        eli2:
                            printf("Su numero es %d, en la posicion %d\nSeguro que desea eliminarlo?\n1.-No 2.-Si",tam[i],i);
                            scanf("%d",&sali);
                            if(sali>=1 || sali<=2)
                            {
                                if(sali==2)
                                {
                                    tam[i]=tam[i]-tam[i];
                                    printf("Listo\n");
                                }
                            }
                            else
                            {
                                printf("Fuera de rango, intente de nuevo\n");
                                goto eli2;
                            }
                    }
                    else
                    {
                        printf("Su valor es 0, el espacio esta vacio\n");
                    }
                    break;
            case 3: //Muestra de inventario
                posicion3:
                    printf("Que posicion desea mostrar?\n");
                    scanf("%d",&i);
                    if(i>15 || i<1)
                    {
                        printf("Fuera de rango\n");
                        goto posicion3;
                    }
                    else
                    {
                        printf("Su numero es %d\n",tam[i]);
                    }
                    reinicio3:
                        printf("Desea mostrar otro numero?\n1.-No 2.-Si\n");
                        scanf("%d",&sali);
                        if(sali>=1 && sali<=2)
                        {
                            if(sali==2)
                            {
                                goto posicion3;
                            }
                        }
                        else
                        {
                            printf("Fuera de rango\n");
                            goto reinicio3;
                        }
                break;
            default:
                printf("Operacion no valida\nIntente de nuevo\n");
        }
        do //Ciclo de salida
        {
        printf("Desea salir del programa?\n1=Salir 2-Repetir\n");
        scanf("%d",&sali);
        }
        while(sali<1 && sali>2);
    }
    while(sali==2);
}