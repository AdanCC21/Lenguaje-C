#include <stdio.h>
int main()
{
    int opcion, i, r;
    i=0;
    r=0;
    do
    {
        float num1, num2, r;
        printf("Que operador va a seleccioanr\n");
        printf("1 = Suma , 2 = resta , 3 = Division , 4 = Multiplicacion\n");
        scanf("%d", &opcion);
        printf("seleccione su primer numero (de 1 o mas digitos)\n");
        scanf("%f", &num1);
        printf("seleccione su segundo numero (de 1 o mas digitos)\n");
        scanf("%f", &num2);
        
        do
        {
            switch (opcion)
            {
                case 1:
                r=num1 + num2;
                printf("Su resultado es %.2f", r);
                break;
                case 2:
                r=num1 - num2;
                printf("Su resultado es %.2f", r);
                break;
                case 3:
                r=num1/num2;
                printf("Su resultado es %.2f", r);
                break;
                case 4:
                r=num1*num2;
                printf("Su resultado es %.2f", r);
                break;
                default:
                printf("seleccione una opcion valida");
            }
            if(r=0)
                {
                    r++;
                }
        }
        while(r=0);
        
        printf("\nDesea salir del programa o repetir alguna operacion?\nEscriba 1 para repetir, 2 para salir\n");
        scanf("%d",&i);
    }
    while(i==1);
}