typedef struct
{
    int numero;
    char letra;

}eDato;

typedef struct
{
    int numero;
    double importe;
    char Tipo;
}eFactura;
int mostrarDato(eDato *pDato);
int motrarTodos(eDato *pDato, int);
void ordenarDatos_Letras(eDato *pDato, int);
