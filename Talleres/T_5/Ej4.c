/*
Gonzalez Ceseña Adan 372799
*/

.*"description".*\r?\ninclude <stdio.h>
//prototipos
void registro ();
void automatica ();

//Main
int main()
{
    registro();
    automatica();
    return 0;
}

void registro ()
{
    int valor;
    valor=5;
    register temp;
    temp=5;
    printf(" %d \n",temp);
}
//Respuesta
//No creo usar mucho las variables de registro ya que los compiladores ya suelen ser buenos en decidir que variables deberian de almacenarse en regisrto y cuales en memoria
