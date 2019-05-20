#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define T 3
int main()
{
  system("COLOR 1E");
  eDato muchosDatos [T] = {{1,'C'}, {2, 'B'}, {3, 'A'}};
  eDato* pDato;
  //pDato = muchosDatos;
  ///mostrarTodos(pDato);

    /* eDato muchosDatos [3] = {{1,'C'}, {2, 'B'}, {3, 'A'}};

    int i;
    ;

    for(i = 0; i < 3;i++)
    {

       printf("%d  %c\n", (*(pDato+i)).numero, (*(pDato+i)).letra);
       printf("%d-----%c\n", (pDato+i)->numero,(pDato+i)->letra);
    }
    //Si no se pide memoria al sistema no se crea una estructura dinamica
    //eDato unDato = {1,'C'};
    //eDato* pDato;
    //pDato = &unDato;
    //operador flecha es literalmente una flecha "->";*/
    printf("%d", sizeof(doble));
    return 0;
}
