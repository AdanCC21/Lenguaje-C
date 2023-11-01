/*Simluacion de carreras
Gonzalez Ceseña Adan 372799
09/30/2023
Practica 5*/
.*"description".*\r?\ninclude <stdio.h>
.*"description".*\r?\ninclude <stdlib.h>
.*"description".*\r?\ninclude <time.h>
.*"description".*\r?\ndefine H 60
.*"description".*\r?\ndefine PIST 10000

//Prototipos
int ecu (int car1);

int main()
{
    //inicializamos la semilla y definimos argumentos
    srand(time(NULL));
    float temp1, temp2, temp3; //tiempos
    register car1, car2, car3; //donde se almacenara el num aleatorio
    //generamos los numeros aleatorios cada uno en su correspondiente carro
    //Y lo neviamos a ec donde se calculara el tiempo que tardaria en recorrer la pita y la almacenamos en temp[Numero del carro]
    car1=rand() % (200-100+1)+100;
    temp1=ecu(car1);

    car2=rand() % (200-100+1)+100;
    temp2=ecu(car2);

    car3=rand() % (200-100+1)+100;
    temp3=ecu(car3);
    //Comenzara a comparar los 3 tiempos de cada carro
    //Dependiendo del tiempo lanzara un ganador
    if(temp1<temp2)
    {
        if(temp1<temp3)
        {
            printf("El carro 1 gana con %d de veolcidad en un tiempo de %.2f \n", car1, temp1);
        }
    }
    else
    {
        if(temp1<temp3)
        {
            if(temp1<temp2)
            {
                printf("El carro 1 gana con %d de veolcidad en un tiempo de %.2f km\n", car1, temp1);
            }   
        }
    }
    if(temp2<temp1)
    {
        if(temp2<temp3)
        {
            printf("El carro 2 gana con %d de veolcidad en un tiempo de %.2f segundos", car2, temp2);
        }
    }
    else
    {
        if(temp2<temp3)
        {
            if(temp2<temp1)
            {
                printf("El carro 2 gana con %d de veolcidad en un tiempo de %.2f segundos", car2, temp2);
            }
        }
    }
    if(temp3<temp1)
    {
        if(temp3<temp2)
        {
            printf("El carro 3 gana con %d de veolcidad en un tiempo de %.2f segundos", car3, temp3);
        }
    }
    else
    {
         if(temp3<temp2)
        {
            if(temp3<temp1)
            {
                printf("El carro 3 gana con %d de veolcidad en un tiempo de %.2f km\n", car3, temp3);
            }
        }
    }
}

//La funcion ecuacion toma como dato de entrada car1, que es la velocidad que tendra el carro y calculara el tiempo que le tomara en recorrer toda la psita
//car1 = numero aleatorio
//pist = la distancia de la pista
//r = resultado que retornara
int ecu(int car1)
{
    float r;
    r=PIST/car1;
    r=r*60;
    return r;
}
