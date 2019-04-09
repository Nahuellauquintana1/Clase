#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

   char nombre[100];
   char apellido[100];
   int i;

   printf("Ingrese sus nombres: ");
   gets(nombre);
   printf("Ingrese sus apellidos: ");
   gets(apellido);

   for(i = 0;i<100;i++)
   {
       nombre[i] = tolower(nombre[i]);
       apellido[i] = tolower(apellido[i]);
   }

   nombre[0] = toupper(nombre[0]);
   apellido[0] = toupper(apellido[0]);

   strcat(nombre," ");
   strcat(nombre,apellido);

   printf("%s", nombre);

    return 0;
}
