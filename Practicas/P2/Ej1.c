/*Archivo ej3
Gonzalez Cesena Adan 372799
05/09/2023
Crear un programa que permita a los usuarios ingresar un número entero, especificar
el número de bits que se deben considerar y luego analizar el número en términos de
bits encendidos, posiciones y representación binaria.*/

.*"description".*\r?\ninclude <stdio.h>
int main()
{
    int num_deci;
    printf("Ingresa su nuermo en decimal\n"); //Pedimos datos
    scanf("%d",&num_deci);

    if(num_deci<0) //Verificamos si es positivo
    {
        return 1;
    }
    int num_bits=0;
    int temp=num_deci; //nuestro valor decimal sera = a los datos que ingrese el usuario
    
    while(temp>0) //Sacamos la longitud del numero binario por ejemplo 4 o 5 ceros y unos y asi
    {
        temp/=2; //temp igual a temp / 2
        num_bits++; //incrementamos el num de bits
    }
    int bits[num_bits]; //definimos bits con dimension al tama;o del usuario
    int indice;
    while(num_deci>0) //mientras el valor del usuario sea mayor a 0 iniciara :
    {
        bits[indice]=num_deci%2; //El valor del residuo del valor del usuario entre 2 sera almacenado el la dimension del numero del indice y por ejemplo si es par o impar tomara como 1 o 0 el valor
        num_deci/=2; //dividimos el valor para ir saltando en valores
        indice++; //contador
    }
    printf("Numero de bits\n");
    for(int i=indice-1; i>=0; i--) //indice -1 para no contar el 1?.. creo
    {
        printf("%d", bits[i]); //imprimimos de arriba hacia abajo
    }
    printf("\n");

    int bits_enc=-1;
    printf("los bits encendidos estan en la posicion :\n");

    for(int i=0; i<indice; i++)
    {
        if(bits[i]==1)
        {
            bits_enc=i;
            printf("%d",bits_enc+1);
        }
    }
    return 0;
}