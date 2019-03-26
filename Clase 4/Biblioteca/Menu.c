

int menu()
{

int opcion;
char seguir = 's';


do{
    printf("Elija una opcion\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Divicion\n5.Salir");
    scanf("%d", &opcion);

    switch(opcion){
    case 1:
        printf("Suma\n");
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
}while(seguir == 's');

}

