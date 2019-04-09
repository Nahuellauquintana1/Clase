#include <stdio.h>
#include <stdlib.h>

void ordenarVector(int[], int);
void mostrarVector(int[], int);
int main()
{
    int valores[10]=(5,7,1,9,6,4,3,7,10,0);

    ordenarVector()

    return 0;
}
void ordenarVector(int numero[], int tam)
{
    int i, j, aux;
    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(numero[i]>numero[j])//criterio de ordenamiento
            {
                aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }

    }
}
