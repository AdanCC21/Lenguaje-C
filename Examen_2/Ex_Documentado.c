#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define P 100

typedef struct inventario 
{
    char name[30];
    char raza[30];
    int edad;
    int estado;
    int mat;
    int stat;
}datos;

//-------------------------------Prototipos----------------------------------
void menu();
void agregar (datos reg[], int p);
void mostrar (datos reg[],int p);
void editar (datos reg[], int p);
void crear_txt (datos reg[],int p);

int busqsec (datos vect [],int n,int num);
int valid (char msg[],int ri, int rf);

//-------------------------------Main----------------------------------
int main()
{
    datos reg[P];
    int op,p = 0;
    do
    {
        system("CLS");
        menu();
        op=valid("fuera de rango",0,5);
        switch(op)
        {
            case 1:
                agregar(reg,p);
                p++;
                break;
            case 2:
                editar(reg,p);
                break;
            case 3:
                mostrar(reg,p);
                break;
            case 4:
                crear_txt(reg,p);
                break;
            case 0:
            {
                printf("Seguro que quiere salir?\n1.-Salir 2.-Repetir\n");
                op=valid("fuera de rango\n",1,2);
                op--;
            }
        }
    }
    while(op!=0);
    printf("buen dia\n");
}
//-------------------------------Funciones----------------------------------

void menu()
{
    printf("MENU\n");
    printf("1.-Agregar\n");
    printf("2.-Editar\n");
    printf("3.-Mostrar\n");
    printf("4.-Crear txt\n");
    printf("5.-cargar txt\n");
    printf("0.-Salir\n");
}

void agregar (datos reg[], int p)
{
    int i;
    /*
        Agrege los fflush
    */
    char temp[30],temp2[30];

    fflush(stdin);
    printf("ingrese el nombre\n");
    gets(temp);
    strcpy(reg[p].name,temp);

    printf("ingrese la edad\n");
    scanf("%d",&reg[p].edad);
    
    fflush(stdin);
    printf("ingrese la raza\n");
    gets(temp2);
    strcpy(reg[p].raza,temp2);

    fflush(stdin);
    printf("Ingrese el estado\n1.-Saludable 2.-Estable 3.-Mal 4.-Grave\n");
    i=valid("fuera de rango",1,4);
    reg[p].estado = i;

    printf("ingrese su matricula\n");
    scanf("%d",&reg[p].mat);
    fflush(stdin);

    printf("ingrese su stat\n1.-En sistema 2.-Dado de baja\n");
    i=valid("Fuera de rango",1,2);
    reg[p].stat = i;
}

void mostrar (datos reg[],int p)
{
    int i;
    for(i=0;i<p;i++)
    {
        if(reg[i].stat==1)
        {
            printf("Nombre : %s Raza : %s Edad %d Estado %d Matricula %d Stat : %d\n",reg[i].name,reg[i].raza,reg[i].edad,reg[i].estado,reg[i].mat,reg[i].stat);
        }
    }
    system("PAUSE");
}

void editar (datos reg[], int p)
{
    int num,pos;
    printf("coloque la matricula del registro que quiere editar\n");
    scanf("%d",&num);
    pos = busqsec(reg,p,num);
    if(pos != -1 )
    {
        agregar(reg,pos);
    }
    else
    {
        printf("matricula no encontrada\n");
        getch();
    }
}

void crear_txt (datos reg[],int p)
{
    FILE *doc = fopen("datos.txt","w");
    int i;
    for(i=0;i<p;i++)
    {
        if(reg[i].stat==1)
        {
            fprintf(doc,"Nombre : %s, Raza : %s, Edad : %d, Estado : %d,Matricula : %d, stat : %d",reg[i].name,reg[i].raza,reg[i].edad,reg[i].estado,reg[i].mat,reg[i].stat);
        }
    }
    printf("listo\n");
    getch();
    fclose(doc);
}

/*
    Agregue la funcion pero hay un problema con el formato por lo tanto no lo lee
*/
void carg_txt (datos reg[],int *p)
{
    FILE *doc = fopen("datos.txt","r");
    (*p)++;
    /*
        Cambie la condiciion de while
    */
    while(!feof(doc))
    {
        fscanf(doc, "%s,%s,%d,%d,%d,%d",reg[*p].name,reg[*p].raza,&reg[*p].edad,&reg[*p].estado,&reg[*p].mat,&reg[*p].stat);
        (*p)++;
    }
    printf("Listo\n");
    fclose(doc);
}


//Funciones de librerira
int busqsec (datos vect [],int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(vect[i].mat==num) 
        {
            return i;
        }
    }
    return -1; 
}

int valid (char msg[],int ri, int rf)
{
    char cad[50];
    int n;
    do
    {
        fflush(stdin);
        fgets(cad, sizeof(cad),stdin);        
        n=atoi(cad);
        if(n>rf || n<ri)
        {
            printf("%s\n",msg);
        }
    }
    while(n>rf || n<ri);
    return n;
}