#include "VectorUno.h"
#include <stdio.h>
#include <stdlib.h>

void cargarArray(int numero[], int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero[i]);
    }
}
void informarArray(int numero[], int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++)
    {
        printf("%d\n", numero[i]);
    }
}
int maxArray(int numero[], int tamanio)
{
    int i;
    int max;
    int flag =0;
    for(i=0; i<tamanio; i++)
    {
        if(flag==0 || max<numero[i])
        {
            max = numero[i];
            flag = 1;
        }
    }
    return max;
}
int valorArray(int numero[], int tamanio, int valor)
{
       int i;
       int x;
       for (i = 0; i<tamanio; i++)
        {
        if(numero[i] == valor)
    {
        x = valor;
    }
    else
    {
        x = -1;
    }
        }
    return x;
}
