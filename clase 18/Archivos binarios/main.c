#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* archivoBin;
    /*int* x = (int*) malloc(sizeof(int));
    *x = 4;
    archivoBin = fopen("C:\\Users\\alumno\\Desktop\\Archivos binarios\\archivoBin","wb");
    fwrite(x, sizeof(int),1 , archivoBin);
    fclose(archivoBin);*/


    int* x;
    x =(int*)malloc(sizeof(int));
    archivoBin = fopen("C:\\Users\\alumno\\Desktop\\Archivos binarios\\archivoBin","rb");
    fread(x,sizeof(int), 1, archivoBin);
    fclose(archivoBin);

    printf("%d",*x);
     return 0;
}

