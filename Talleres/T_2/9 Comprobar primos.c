//comprobar si es primo o no primo
#include <stdio.h>
int esPrimo(int num2)
                {
                    if (num2 <= 1) {
                        return 0;  // No es primo si es menor o igual a 1
                    }
                    for (int i = 2; i * i <= num2; i++) {
                        if (num2 % i == 0) {
                            return 0;  // No es primo si es divisible por algún número
                        }
                    }

                    return 1;  // Es primo
                }
int main() 
{
    int cont, num, i, n;
    printf("Que numero quere comprobar si es primo o no es primo\n");
    scanf("%d",&num);
    cont=0;
    n=2;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        cont++;
        }
    }
    if(cont==2)
    {
        printf("El numero es primo\n");
        
        int num2 = 2; 
        while (num2 <= 11) 
        {
                if (esPrimo(num2)) 
                {
                    printf("%d ", num2);
                }
                num2++;
            
        }
    return 0;

    }
    else
    {
        printf("El numero no es primo");
    }
}
