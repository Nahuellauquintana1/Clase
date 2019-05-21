#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
    int* pVectorNumeros;
    pVectorNumeros = (int*)malloc(sizeof(int)*T);
    int* auxVectorNumeros;

    if(pVectorNumeros != NULL)
    {
        int i;
        for(i = 0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pVectorNumeros+i);
        }
        for(i = 0; i<T; i++)
        {
            printf("%d\n", *(pVectorNumeros + i));
        }
        if(auxVectorNumeros = (int*) realloc(pVectorNumeros, sizeof(int)*(T+T)) == NULL)
        {
            printf("Error, no hay mas memoria");
        }
        else
        {
            pVectorNumeros = (int*) realloc(pVectorNumeros, sizeof(int)*(T+T));
            free(auxVectorNumeros);
        }
    }














    /* int* a;
     a = (int*)malloc(sizeof(int));//Asigna memoria dinamica
     int* b;
     b =(int*)calloc(sizeof(int), 1);//Asiga memoria dinamica e inicializa el valor en 0

     if(a == NULL)
     {
            printf("NO hay espacio tuma");
     }
     else
     {
             *a = 120;
             printf("El diametro de tuma: %d\n", *a);
             printf("cuanto se saco luca en ingles: %d", *b);
             free(a);//Libera el espacio de memoria al que apunta el PUNTERO (no borra el puntero sino a lo que se esta apuntando)
             printf("\nEl peso de tuma: %d", &a);
     }
     return 0;*/

}
