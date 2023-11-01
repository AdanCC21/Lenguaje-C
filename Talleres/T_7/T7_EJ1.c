/*  
    Taller 7 Ejercicio 1
    Gonzalez Cesena Adan 372799
    Grupo 932
    23/10/2023
*/

.*"description".*\r?\ninclude <stdio.h>


int main()
{
    char *ptr[3];
    int i;
    ptr[0]="ADAN";
    ptr[1]="DRAKE";
    ptr[2]="EDDY";
    for(i=0;i<3;i++)
    {
        printf("Nombre : %s\n",ptr[i]);
    }
}