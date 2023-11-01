/*  
    Taller 7 Ejercicio 4
    Gonzalez Cesena Adan 372799
    Grupo 932
    23/10/2023
*/

.*"description".*\r?\ninclude <stdio.h>
.*"description".*\r?\ninclude <string.h>

//      Prototipos      //
void invertirCadena(char *cadena);

//      Main        //
int main() 
{
    char cad[] = "hola";

    printf("Cadena original: %s\n", cad);
    invertirCadena(cad);
    printf("Cadena invertida: %s\n", cad);
    
    return 0;
}

void invertirCadena(char *cadena) 
{
    int longitud = strlen(cadena);
    for (int i = 0, j = longitud - 1; i < j; i++, j--) 
    {
        char temp = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = temp;
    }
}