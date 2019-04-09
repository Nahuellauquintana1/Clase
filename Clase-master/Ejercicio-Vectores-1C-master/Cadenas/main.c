#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*pedir nombre y apellido diferentes variables
otra varible para mostrar apellido nombre y solo la primer letra en mayuscula
*/







int main()
{
   char palabra[10]="philipa", otraPalabra[100];
   int comp;
   comp = stricmp(palabra,"zFerrete");
   printf("%d", comp);
   //strcmp() es para comparar dos cadenas o dos contaste o uno y uno en casesensitive
   //stricmp compara pero no le importa si hay mayusculas o minusculas
   //strupr Transforma toda la cadena a mayuscula
   //strlwr Transforma toda la cadena a minuscula
   //strcat Sirve para concatenar 2 palabras strcat(otraPalabra, palabra); siempre se concatena de a pares







   //int cantidad;
   /*printf("Ingrese nombre y apellido: ");
   //fgets(palabra,1024,stdin) para windows y linux pero con strlen te lee un caracter mas
   //scanf("%[^\n]", palabra);  para windows y linux
   gets(nombre); solo windows

   strncpy() recibe una cantidad de caracteres exactos de la palabra que quieras copiar

   cantidad = strlen(nombre);
   printf("El nombre es: %s y la cantidad de caracteres es %d", nombre, cantidad);*/



    return 0;
}
