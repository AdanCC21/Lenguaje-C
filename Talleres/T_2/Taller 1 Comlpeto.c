.*"description".*\r?\ninclude <stdio.h>
.*"description".*\r?\ninclude <math.h>
.*"description".*\r?\ndefine TASA_DESCUENTO 0.1

int main()
{
    int salida;
    do
    {
        int opciont;
        printf("Bienvenido al programa de taller no.1\n porfavor seleccione una opcion para comenzar\n");
        printf("1.-resultado de exprecion, 2.-Descuento, 3.-Numeros primos, 4.-Calculadora, 5.-Adivinanza \n6.-Factoriales, 7.-Arreglo de calificaciones, 8.-Confirmacion de numeros primos, 9.-Calcular potencias\n");
        printf("(seleccione el numero de la operacion que desea realizar)\n");
        scanf("%d", &opciont);
        switch(opciont)
        {
            case 1: 
                    float x, y, r;
                    printf("asigne valores a x\n");
                    scanf("%f",&x);
                    printf("asigne valores a y\n");
                    scanf("%f",&y);
                    r = (x+2 * y) / (3*x - y);
                    printf("Tu resultado es %.2f \n", r);
                    break;
            case 2: 
                    float po, pd ;
                    printf("Ponga el precio original del producto\n");
                    scanf("%f",&po);
                    pd = po * TASA_DESCUENTO;
                    printf("su precio final con 10 de descuento es de %.2f \n", pd);
                    break;
            case 3:
                    int esPrimo(int num)
                    {
                        if (num <= 1) {
                            return 0;  // No es primo si es menor o igual a 1
                        }
                        for (int i = 2; i * i <= num; i++) {
                            if (num % i == 0) {
                                return 0;  // No es primo si es divisible por algún número
                            }
                        }

                        return 1;  // Es primo
                    }

                    int NoPrimo(int num)
                    {
                        if (num <= 1) {
                            return 0;  // No es primo si es menor o igual a 1
                        }
                        for (int i = 2; i * i <= num; i++) {
                            if (num % i == 0) {
                                return 1;  //No primo dara la se;al
                            }
                        }

                        return 0;  // Es primo
                    }
                    float n;
                    printf("Ingrese un numero entero positivo \n");
                    scanf("%f", &n);

                    if (n <= 0) {
                        printf("Por favor, ingrese un numero entero positivo.\n");
                        return 1;
                    }

                    if(NoPrimo(n))
                    {
                        printf("Tu numero es primo, intenta de nuevo");
                        return 1;
                            
                    }

                    printf("Sus numeros primo son :\n",n);

                    int contador = 0;
                    int num = 2;  // Empezamos a buscar primos desde 2
                        while (num <= n) {
                            if (esPrimo(num)) 
                            {
                                printf("%d ", num);
                            }
                            num++;
                                
                        }
                    break;

            case 4:
                    int opcion, i;
                    float relt;
                    i=0;
                    relt=0;
                    do
                    {
                        float num1, num2, r;
                        printf("Que operador va a seleccioanr\n");
                        printf("1 = Suma , 2 = resta , 3 = Division , 4 = Multiplicacion\n");
                        scanf("%d", &opcion);
                        printf("seleccione su primer numero (de 1 o mas digitos)\n");
                        scanf("%f", &num1);
                        printf("seleccione su segundo numero (de 1 o mas digitos)\n");
                        scanf("%f", &num2);
                        
                        do
                        {
                            switch (opcion)
                            {
                                case 1:
                                relt=num1 + num2;
                                printf("Su resultado es %.2f", relt);
                                break;
                                case 2:
                                relt=num1 - num2;
                                printf("Su resultado es %.2f", relt);
                                break;
                                case 3:
                                relt=num1/num2;
                                printf("Su resultado es %.2f", relt);
                                break;
                                case 4:
                                relt=num1*num2;
                                printf("Su resultado es %.2f", relt);
                                break;
                                default:
                                printf("seleccione una opcion valida");
                            }
                            if(r=0)
                                {
                                    r++;
                                }
                        }
                        while(r=0);
                        
                        printf("\nDesea salir del programa o repetir alguna operacion?\nEscriba 1 para repetir, 2 para salir\n");
                        scanf("%d",&i);
                    }
                    while(i==1);
                    break;
            case 5:
                    // Inicializar la semilla para generar números aleatorios
                    srand(time(NULL));

                    // Generar un número aleatorio entre 1 y 100
                    int numeroAleatorio = rand() % 100 + 1;

                    int intentos = 0;
                    int intentoUsuario;

                    printf("Bienvenido al juego de avinizanza\n");

                    do {
                        printf("Ingresa tu intento: ");
                        scanf("%d", &intentoUsuario);

                        intentos++;

                        if (intentoUsuario < numeroAleatorio - 20) {
                            printf("\nDemasiado bajo. Intentalo nuevamente.\n");
                        } else if (intentoUsuario < numeroAleatorio - 10) {
                            printf("\nAlgo bajo. Intentalo nuevamente.\n");
                        } else if (intentoUsuario < numeroAleatorio - 1) {
                            printf("\nBAJO PERO CERCA. Intentalo nuevamente.\n");
                        }  else if (intentoUsuario < numeroAleatorio) {
                            printf("\nBAJIIITOO PERO CERCA. Intentalo nuevamente.\n");
                        } else if (intentoUsuario > numeroAleatorio + 20) {
                            printf("\nDemasiado alto. Intentalo nuevamente.\n");
                        } else if (intentoUsuario > numeroAleatorio+10) {
                            printf("\nAlgo alto. Intentalo nuevamente.\n");
                        }else if (intentoUsuario > numeroAleatorio +1) {
                            printf("\nALTO PERO CERCA. Intentalo nuevamente.\n");
                        }else if (intentoUsuario > numeroAleatorio) {
                            printf("\nUN POQUITO ARRIBA PERO CERCA. Intentalo nuevamente.\n");
                        }else {
                            printf("Felicidades, Adivinaste el numero %d en %d intentos\n", numeroAleatorio, intentos);
                        }

                    } while (intentoUsuario != numeroAleatorio);
                    break;
            case 6:
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
                        
                        break;
            case 7:
                    int sumcal, cal1[10] ;
                    int cont, i7;
                    float promed;
                    sumcal=0;
                    cont=0;
                    printf("Ingrese su calificacion de una en una\n");
                    for(cont=1; cont<11; cont++)
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
                    for(i7=0;i7<10;i7++)
                    {
                        printf("Su calificacion %d %d \n",i+1, cal1[i7]);
                    }
                    break;
            case 8:
                    int cont8, num8, i8;
                        printf("Que numero quere comprobar si es primo o no es primo\n");
                        scanf("%d",&num8);
                        cont8=0;
                        for(i8=1;i8<=num8;i8++)
                        {
                            if(num8%i8==0)
                            {
                            cont++;
                            }
                        }
                        if(cont8>2)
                        {
                            printf("El numero es primo");

                        }
                        else
                        {
                            printf("El numero no es primo");
                        }
                    break;
            case 9:
                    int exp, bas, res;
                    printf("escoga su exponente\n");
                    scanf("%d",&exp);
                    printf("escoga su base\n");
                    scanf("%d",&bas);
                    res=pow(bas,exp);
                    printf("tu resultado es %d \n", res);
                    break;
            default:
                    printf("escriba un numero valido\n");
                    break;
        }
    printf("\nSi quiere repetir el programa escriba (1), Si quiere salir del programa, escriba (2)\n");
    scanf("%d", &salida);
    }
    while(salida==1);

}