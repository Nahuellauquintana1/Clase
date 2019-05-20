#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>
int mostrarDato(eDato *pDato)
{
    //printf("Boquita Kampeon");
    printf("%d-----%c\n", (pDato)->numero,(pDato)->letra);
    return 0;
}

int mostrarTodos(eDato *pDato, int tam)
{
    int state;
    int i;
    if (pDato != NULL && tam > 0)
    {
        for(i = 0; i < tam; i++)
    {
        mostrarDato(pDato+i);
        state = 1;
    }
    }
    return state;
}

void ordenarDatos_Letras(eDato* pDato, int tam)
{
    int state;
    eDato aux;

    if(pDato !=NULL && tam > 0)
        {
    for(int i=0;i<tam-1;i++)
    {
        for (int j = i+1;j<3;i++)
        {
            if(pDato[i].letra == pDato[j].letra)
                     aux =(*pDato[i]).letra;
                     (*pDato[i]).letra = (*pDato[j]).letra;
                     (*pDato[j]).letra = aux;
        }
    }
        state = 1;
        }
    return state;
}
