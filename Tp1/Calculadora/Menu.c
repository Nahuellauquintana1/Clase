

int menu()
{

int opcion;
char seguir = 's';
do{
    printf("Elija una opcion\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Divicion\n");
    printf("5.Salir");
    scanf("%d", &opcion);

    switch(opcion){
    case 1:

        break;
    case 2:
        printf("Resta\n");
        break;
    case 3:
        printf("Multiplicacion\n");
        break;
    case 4:
        printf("Divicion\n");
        break;
    case 5:
        printf("Salir");
        break;
        default:
        printf("No ingreso una opcion valida");

    }
    system("Pause");
    system("cls");
}while(seguir == 's');

}

