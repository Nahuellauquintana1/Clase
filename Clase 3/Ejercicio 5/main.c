#include <stdio.h>
#include <stdlib.h>


int pedirNota(void);
float sacarPromedio(int suma, int cantidad);
int aprobarMateria(int notaMinima, int nota);
void ejercicioUno(void);
/* pedir 5 notas
cantidad de aprobados
promedio de notas aprobados
promedio de notas desaprobados
*/
int main()
{
    ejercicioUno();
    return 0;

}

int pedirNota(void)
{
    int nota;

    do{
        printf("Ingrese la nota: ");
        scanf("%d",&nota);
    }while(nota < 0 || nota > 10 );

    return nota;
}

float sacarPromedio(int suma, int cantidad)
{
    float promedio;

    promedio = (float)suma / cantidad;

    return promedio;
}

int aprobarMateria(int notaMinima, int nota)
{
        int valor;
        if(nota >= notaMinima){
            valor = 1;
        }else{
            valor = 0;
        }
        return valor;

}

void ejercicioUno(void){

    int i;
    int aprobado = 0;
    int desaprobado = 0;
    float promedioAprobado;
    float promedioDesaprobado;
    int sumaAprobado = 0;
    int sumaDesaprobado = 0;


    for(i = 0; i < 5; i++){
        if(aprobarMateria(6, pedirNota()) == 1){
            sumaAprobado =+ pedirNota();
            aprobado++;
        }else{
            sumaDesaprobado =+ pedirNota();
            desaprobado++;
        }
    }
    promedioAprobado = sacarPromedio(sumaAprobado, aprobado);
    promedioDesaprobado = sacarPromedio(sumaDesaprobado, desaprobado);

    printf("La cantidad de aprobado es: %d \n", aprobado);
    printf("El promedio de los aprobados es: %f \n", promedioAprobado );
    printf("El promedio de los desaprobado es: %f \n", promedioDesaprobado);
    return 0;

}


