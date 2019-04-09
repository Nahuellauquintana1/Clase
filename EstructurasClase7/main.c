#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    float sueldoBruto;
    float sueldoNeto;
    int legajo;
    char sexo;
} eEmpleado;

int main()
{
    eEmpleado unEmpleado = {"Martin",15000,12000,1000,'m'};
    eEmpleado otroEmpleado = {"Jose",18000,15000,1100,'m'};
    puts(unEmpleado.nombre);
    puts(otroEmpleado.nombre);

    printf("Ingrese legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(unEmpleado.nombre);
    printf("Ingrese sexo (m o f): ");
    fflush(stdin)
    scanf("%c", &unEmpleado.sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &unEmpleado.sueldoBruto);
    unEmpleado.sueldoBruto = unEmpleado.sueldoNeto * 0.85;
    scanf("%f", unEmpleado.sueldoNeto);

    return 0;
}
