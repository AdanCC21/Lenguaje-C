/*
    Gonzalez Cesena Adan 372799
    Practica 7
    G-932 06/11/2023
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int res,num1,num2;
    num1=atoi(argv[1]);
    num2=atoi(argv[2]);

    printf("Numero total de argumentos: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Argumento %d: %s\n", i, argv[i]);
    }
    printf("______________________________\n");

    res = num1+num2;
    printf("Su suma es : %d\n",res);

    res= num2-num1;
    printf("Su resta es : %d\n",res);

    res= num1*num2;
    printf("Su multiplicacion es : %d\n",res);

    float div;

    if(num1==0 || num2==0)
    {
        printf("No es posible dividir entre 0\n");
    }
    else
    {
        div= (float)num1 / (float)num2;
        printf("Su Division es : %f\n",div);
    }

    return 0;
}