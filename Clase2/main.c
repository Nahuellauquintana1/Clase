#include <stdio.h>
#include <stdlib.h>

//while, cuando no sabemos cuantas repeticiones queremos
//for cuando sabemos cuantas repeticiones tenemos

//Se ingresan numeros enteros hasta que el usuario quiera que sean distintos de 0
//informar cantida de numeros ingresados
//cantidad de pares
//Suma de positivos
//Promedio de los negativos
//Maximo y minimo
// de los positivos el mas chico
//y de los negativos el mas grande
//cantidad de numeros que se encuentran entre el -10 y 50
//promedio total

int main()
{

int numero;
char respuesta;
int numeroIngresados = 0;
int pares = 0;
int positivo = 0;
int negativo = 0;
int sumaNegativo = 0;
float promedioNeg;
int flag = 0;
int maximo;
int minimo;
int minPositivo;
int maxNegativo;

do{
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    while(numero == 0){
        printf("Error. Reingrese un numero: ");
    }
    numeroIngresados++;

    if(numero%2 == 0){
            pares++;
    }
    if(numero>0){
        positivo++;
    }else{
        sumaNegativo=+negativo;
        negativo++;
    }
    if(numero>maximo || flag == 0){
        maximo = numero;
    }
    if(numero<minimo || flag == 0){
        minimo = numero;
        flag = 1;
    }




}while(respuesta == 's')












   /* int i;
    for(i=0;i<10;i++){
        printf("%d\t", i+1);
    }*/


  /*int i=0;
  while(i<10){

       printf("%d\t", i+1);
    i++;
  }


   /*
    char palabra[15];//siempre hay que poner uno mas de los caracteres que queremos ej: si queremos 14 se pone 15

    printf("Ingrese una palabra: ");
    sacnf("%s", palabra);
    printf("Usted ingreso la palabra: %s",palabra);

    int num1;
    int num2;
    int total;
    float promedio;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);
    printf("Ingrese otro numero: ");
    scanf("%d",&num2);
    total = num1 + num2;
    promedio = (float)total/2;
    printf("El promedio es: %.2f\n", promedio);
    printf("La suma es: %d",total);*/

    return 0;
}
