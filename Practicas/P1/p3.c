.*"description".*\r?\ninclude <stdio.h>
.*"description".*\r?\ninclude <math.h>
.*"description".*\r?\ndefine PI 3.141592                                                             
int main()
{
    
    int op, opc;                                                               
    float a, b, r, res;
    printf("De que le gustaria sacar area el dia de hoy\n");                    
    {
        printf(" 1.-triangulo\n 2.-circulo\n 3.-rectangulo\n 4.-cubo\n 5.-clindro\n");
        scanf("%d",&op); 
        switch (op)
        {
            case 1:                                                             
                    printf("Usted escogio el triangulo\ningrese la base\n");
                    scanf("%f", &b);
                    printf("ingrese la altura\n");
                    scanf("%f",&a);
                    res= (b*a)/2;
                    printf("Tu resultado es %.2f\n", res);
                    break;
            case 2:
                    printf("Usted escogio el circulo\ningrese el radio\n");
                    scanf("%f",&r);
                    res= r * PI;
                    printf("Su resultado es %.2f\n",res);
                    break;
            case 3:
                    printf("usted escogio el rectangulo\ningrese la base\n");
                    scanf("%f", &b);
                    printf("Ingrese la altura\n");
                    scanf("%f",&a);
                    res=b*a;
                    printf("su resultado es %.2f\n", res);
                    break;
            case 4:
                    printf("Usted escogio el cubo\nIngrese el uno de los lados\n");
                    scanf("%f",&a);
                    res=6*a;
                    printf("Su resultado es %.2f\n",res);
                    break;
            case 5:
                    printf("Usted escogio el cilindro\nIngrese su radio\n");
                    scanf("%f",&r);
                    printf("Ingrese su altura\n");
                    scanf("%f",&a);
                    res= 2 * PI * r * (r + a);
                    printf("Su resultado es %.2f\n",res);
                    break;
            default:
                    printf("escoja una opcion valida\n");
                    break;
        }
        printf("Desea repetir el programa?\n 1=Salir, 2=repetir\n");
        scanf("%d",&opc);
    }
    while (opc==2);
    printf("Que tenga un buen dia");
}