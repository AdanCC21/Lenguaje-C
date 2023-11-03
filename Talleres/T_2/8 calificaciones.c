#include <stdio.h>

int main()
{
    int sumcal, cal1[10] ;
    int cont, i;
    float promed;
    sumcal=0;
    cont=0;
    printf("Ingrese su calificacion de una en una\n");
    for(cont=0; cont<10; cont++)
    {
        printf("Ingrese su calificacion %d \n", cont);
        scanf("%d",&cal1[cont]);
        sumcal= sumcal + cal1[cont];
    }
    promed=sumcal/10;
    printf("\n Tu promedio es de %f \n",promed);
    
    int paso, paso2, temp;
    
    for(paso=0; paso<9; paso++)
    {
        for(paso2=0; paso2<9-paso; paso2++)
        {
            if(cal1[paso2]> cal1[paso2 + 1])
            {
                temp=cal1[paso2];
                cal1[paso2]= cal1[paso2 +1];
                cal1[paso2+1] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("Su calificacion %d %d \n",i+1, cal1[i]);
    }
}
