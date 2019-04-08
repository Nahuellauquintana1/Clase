#include <stdio.h>
#include <stdlib.h>
#include "VectorUno.h"
#define T 7

int main()
{
    int numero[T];
    int max;
    int lugar;
    int valor;
    int option;
    int seguir = 's';
    do
    {
        printf("1-Cargar el array\n");
        printf("2-Informar array\n");
        printf("3-Numero mayor del array\n");
        printf("4-Ingresar el valor a buscar dentro del array\n");
        printf("5-Salir\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            cargarArray(numero, T);
            break;
        case 2:
            informarArray(numero, T);
            break;
        case 3:
            max = maxArray(numero, T);
            printf("El numero mayor del array es: %d\n", max);
            break;
        case 4:
            printf("Numero a buscar en el array: \n");
            scanf("%d", &valor);
            lugar = valorArray(numero, T, valor);
            if(lugar == -1){
                printf("El valor ingresado no forma parte de este array.\n");
            }else{
            printf("El numero se encuentra en la poscision: %d del vector\n", lugar);
            }
            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("Error. Reingrese una opcion valida\n");
            break;
        }
        system("pause");
        system("cls");
    }
    while(seguir == 's');
    return 0;
}
