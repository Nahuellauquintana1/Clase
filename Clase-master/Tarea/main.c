#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pedirCadena(char[],char[],int);
void validarTamCadena(char[],char[],int);

int main()
{

   char nombre[20];
   char apellido[20];
   char apellidoNombre[41]="";
   int i = 0;

   pedirCadena("Nombre: ", nombre, 20);
   pedirCadena("Apellido: ", apellido, 20);

   strcat(apellidoNombre, apellido);
   strcat(apellidoNombre, ", ");
   strcat(apellidoNombre, nombre);

   strlwr(apellidoNombre);

   apellidoNombre[0] = toupper(apellidoNombre[0]);

   while(apellidoNombre[i] != '\0')
   {
       if(apellidoNombre[i]==' ')//se puede usar tambien isspace
       {
           apellidoNombre[i+1] = toupper(apellidoNombre[i+1]);
       }
       i++;
   }

   puts(apellidoNombre);

    return 0;
}
void pedirCadena(char mensaje[],char cadena[], int tam)
{
    printf("Ingrese %s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    validarTamCadena(mensaje,cadena,tam);
}
void validarTamCadena(char mensajeError[],char cadena[],int tam)
{
    while(strlen(cadena)>tam)
    {
     printf("%s", mensajeError);
     fflush(stdin);
     scanf("%[^\n]", cadena);
    }

}
