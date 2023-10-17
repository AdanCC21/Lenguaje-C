#include <stdio.h>

int main()
{
    int a;
    a=2;
    int *ptr;
    ptr=&a;
    printf("&a %p, p %p",&a,ptr);
    printf("\n");
    *ptr=3;
    printf("a %d",a);

}