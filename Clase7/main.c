#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

void pedirCadena(char[],char[],int);
void validarTamCadena(char[],char[],int);
void cargarEmpleados(int[], float[],char [], char[][20], float[], int);

int main()
{

  /* char nombre[20];
   char apellido[20];
   char apellidoNombre[41]="";
   int i = 0;
  */

  int legajo[T];
  float sueldoBruto[T];
  float sueldoNeto[T];
  char sexo[T];
  char nombre[T][20];
  int auxEntero;
  float auxFlotante;
  char auxSexo;
  char auxCadena [100];
  float
  int i;

  cargarEmpleados(legajo, sueldoBruto, sexo, nombre, sueldoNeto, T);

  for(i=0; i<T-1; i++)
  {
      for(j=i+1; j<T; j++)
      {
          if(legajo[i]>legajo[j])
          {
              auxEntero = legajo[i];
              legajo[i] = legajo[j];
              legajo[j] = auxEntero;

              auxFlotante = sueldoBruto[i];
              sueldoBruto[i] = sueldoBruto[j];
              sueldoBruto[j] = auxFlotante;

              auxFlotante = sueldoNeto[i];
              sueldoNeto[i] = sueldoNeto[j];
              sueldoNeto[j] = auxFlotante;

              auxSexo = sexo[i];
              sexo[i] = sexo[j];
              sexo[j] = auxSexo;

              strcpy(auxCadena,nombre[i]);
              strcpy(nombre[i],nombre[j]);
              strcpy(nombre[j], auxCadena);
          }
      }
  }

  for(i=0; i<T; i++)
  {
      printf("%d--%s--%.2f--%c--%.2f\n", legajo[i],nombre[i],sueldoBruto[i], sexo[i], sueldoNeto[i]);
  }

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
     printf("Reingrese %s", mensajeError);
     fflush(stdin);
     scanf("%[^\n]", cadena);
    }

}
void cargarEmpleados(int legajo[], float sueldoBruto[],char sexo[], char nombre[][20], float sueldoNeto[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
  {
      printf("Ingrese legajo: ");
      scanf("%d", &legajo[i]);
      printf("Ingrese sueldo bruto: ");
      scanf("%f", &sueldoBruto[i]);
      printf("Ingrese Sexo (m o f): ");
      fflush(stdin);
      scanf("%c", &sexo[i]);
      pedirCadena("Nombre: ", nombre[i], 20);

      sueldoNeto[i] = sueldoBruto[i] * 0.85;
  }
}
