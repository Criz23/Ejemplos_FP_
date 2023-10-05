#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[50];
    printf("Engresa tu nombre: ");
    scanf("%s", &nombre);

    int i = 0;
    while (i < 50){
        if(nombre[i] == '\0'){
            break;
        }
        printf("%c", nombre[i]);
        i++;
    }

    int j = 0;
    while (j < 50){
        printf("\n%d", j);
        j++;
    }
    int opc = 4;
    while(opc!=4){
        printf("Elige una opcion del menu: ");
        printf("\n1 - Opci%cn A %c: ", 162, 163);
        printf("\n2 - Opcion B: ");
        printf("\n3 - Opcion C: \n");
        printf("\n4 - Salir \n");
        scanf("%d", &opc);
        switch(opc) {
            case 1:
                printf("Se ha pulsado una a.");
                break;
            case 2:
                printf("Se ha pulsado una b.");
                break;
            case 3:
                printf("Se ha pulsado una c.");
                break;
            case 4:
                printf("Adios....");
                break;
            default:
                printf("Opcion invalida!!!!");
                break;
        }
    }

    do{
        printf("Elige una opcion del menu: ");
        printf("\n1 - Opci%cn A %c: ", 162, 163);
        printf("\n2 - Opcion B: ");
        printf("\n3 - Opcion C: \n");
        printf("\n4 - Salir \n");
        scanf("%d", &opc);
        switch(opc) {
            case 1:
                printf("Se ha pulsado una a.");
                system("pause");
                system("cls");
                break;
            case 2:
                printf("Se ha pulsado una b.");
                system("pause");
                system("cls");
                break;
            case 3:
                printf("Se ha pulsado una c.");
                system("pause");
                system("cls");
                break;
            case 4:
                printf("Adios....");
                system("pause");
                system("cls");
                break;
            default:
                printf("Opcion invalida!!!!");
                system("pause");
                system("cls");
                break;
        }
    }while(opc!=4);
    return 0;
}
