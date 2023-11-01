#include<stdio.h>
#include<math.h>
int main()
{
    int exp, bas, res;
    printf("escoga su exponente\n");
    scanf("%d",&exp);
    printf("escoga su base\n");
    scanf("%d",&bas);
    res=pow(bas,exp);
    printf("tu resultado es %d \n", res);

}