#include "PedirEntero.h"
#include <stdio.h>


int unEntero (char texto[])
{
    int entero;

    printf("%s", texto);
    scanf("%d", &entero);

    return entero;
}
