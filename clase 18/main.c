#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    FILE* archivo;
    char nisman[70]={"\nPero te acordas que a Nisman lo mataron"};
    archivo = fopen("C:\\Users\\alumno\\Downloads\\Clase-master\\Memoria Dinamica\\archivo.txt","w");
    fprintf(archivo,"cuando estas comiendo Anis %s", nisman);
    fclose(archivo);
    archivo = fopen("C:\\Users\\alumno\\Downloads\\Clase-master\\Memoria Dinamica\\archivo.txt","r");
    while(!feof(archivo))
    {
        fgets(nisman,70,archivo);
        printf("%s", nisman);
    }

    return 0;
}
