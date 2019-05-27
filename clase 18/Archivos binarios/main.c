#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    char nombre[64];
    float sueldo;
}eEmpleado;





int main()
{
    FILE* archivoBin;
    /*int* x = (int*) malloc(sizeof(int));
    *x = 4;
    archivoBin = fopen("C:\\Users\\alumno\\Desktop\\Archivos binarios\\archivoBin","wb");
    fwrite(x, sizeof(int),1 , archivoBin);
    fclose(archivoBin);*/
//crear de forma dinamica un emleado, una funcion se va a enfcargar de recibir un empleado y lo va a guardar en un arhcivo
//de forma binaria, otara funcin lo lee, last 2 funtions reciben y muestran el resto in text. respectivamente

    int* x;
    x =(int*)malloc(sizeof(int));
    archivoBin = fopen("C:\\Users\\alumno\\Desktop\\Archivos binarios\\archivoBin","rb");
    fread(x,sizeof(int), 1, archivoBin);
    fclose(archivoBin);

    printf("%d",*x);
     return 0;
}

