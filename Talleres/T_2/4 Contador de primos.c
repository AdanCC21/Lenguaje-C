.*"description".*\r?\ninclude <stdio.h>

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

int main() {
    int n;

    printf("Ingrese un número entero positivo n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, ingrese un número entero positivo.\n");
        return 1;
    }

    if(NoPrimo(n))
    {
        printf("Tu numero es primo, intenta de nuevo");
        return 1;
        
    }

    printf("Los primeros %d números primos son:\n", n);

    int contador = 0;
    int num = 2;  // Empezamos a buscar primos desde 2
        while (num <= n) {
                if (esPrimo(num)) 
                {
                    printf("%d ", num);
                }
                num++;
            
        }
    return 0;
}