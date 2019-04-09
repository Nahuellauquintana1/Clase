#include <stdio.h>
#include <stdlib.h>


void sumaNumero(int,int);
int main()
{

    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese otro numero: ");
    scanf("%d", &numeroDos);
    sumaNumero(numeroUno, numeroDos);

    return 0;
}

void sumaNumero(int numeroUno, int numeroDos)

{
    int resultado;

    resultado = numeroUno + numeroDos;

    printf("La suma es: %d", resultado);

}
