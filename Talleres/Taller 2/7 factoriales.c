#include <stdio.h>
int main()
{
    int num1, mult, sum, numr;
    printf("Escoja un numero para sacar su factoreal\n");
    scanf("%d",&num1);
    sum=0;
    
    if(num1>1)
    {
        numr=num1-1;
        while(numr>=1)
        {
            mult=num1*numr;
            numr--;
            sum=sum+mult;
            printf("su factorial es %d \n",sum);
        }
        
    }
    else
    {
        printf("porfavor escriba un numero entero positivo mayor a 1");
        return 0;
    }
    return 0;
}