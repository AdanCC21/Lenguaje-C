/*Ejercicio 2 practica 4
Gonzalez Cesena Adan 372799
21/09/2023
calcular ek fibonacci con una funcion con recursion*/

.*"description".*\r?\ninclude <stdio.h>
.*"description".*\r?\ninclude <stdlib.h>

int menu ();
int fibo ();

int main ()
{
    menu();
}

int menu()
{
    int op, res,num;
    inicio:
        printf("\t\tBienvenido\n");
        printf("Profavor ingrese un valor para calcular fibonacci\n");
        scanf("%d",&num);
        res=fibo(num);
        printf("el termino numero %d es %d \n",num,res);
        system("pause");
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

int fibo (int num)
{
    int i, ant, des, res;
    ant=-1;
    des=1;
    for(i=0;i<num;i++)
    {
        res=ant+des;
        printf(" %d ",res);
        ant=des;
        des=res;
    }
    printf("\n");
    return res;
}