.*"description".*\r?\ninclude <stdio.h>
int main()
{
    int opcion, i; //Definimos variables
    i=0;
    do
    {
        float num1, num2, r; 
        printf("Que operador va a seleccioanr\n"); //Preguntamos que tipo de operacion hara
        printf("1 = Suma , 2 = resta , 3 = Division , 4 = Multiplicacion\n");
        scanf("%d", &opcion);
        printf("seleccione su primer numero (de 1 o mas digitos)\n"); //Pedimos valores
        scanf("%f", &num1);
        printf("seleccione su segundo numero (de 1 o mas digitos)\n");
        scanf("%f", &num2);
            switch (opcion) //Una vez con los valores los enviamos a la ecuacion correspondiente
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
                    if(num1==0 || num2==0) //si algun valro de la divison es 0 cancela la operacion y pasa a preguntar si quiere repetir
                    {
                        printf("No puedes dividir numeros entre 0\n");
                    }
                    else
                    {
                        r=num1/num2;
                        printf("Su resultado es %.2f", r);
                    }
                    break;
                case 4:
                    r=num1*num2;
                    printf("Su resultado es %.2f", r);
                    break;
                default:
                    printf("seleccione una opcion valida");
                    break;
            }        
        printf("\nDesea salir del programa o repetir alguna operacion?\nEscriba 1 para repetir, 2 para salir\n"); //Pregunta al usuario si quiere repetir o salir
        scanf("%d",&i);
    }
    while(i==1);
}