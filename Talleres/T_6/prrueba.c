#include <stdio.h>

int main()
{
    int a;
    a=2;
    int *ptr;
    ptr=&a;     //Primero apunta
    printf("&a %p, p %p",&a,ptr);
    printf("\n");
    *ptr=3;     //Luego dispara
    printf("a %d",a);

}