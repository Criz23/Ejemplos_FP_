#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opc;
    printf("Elige una opcion del menu: ");
    printf("\nA - Opci%cn A %c: ", 162, 163);
    printf("\nB - Opcion B: ");
    printf("\nC - Opcion C: \n");
    opc=getchar();
    switch(opc) {
        case 'A': puts("Se ha pulsado una a.");
            break;
        case 'B': puts("Se ha pulsado una b.");
            break;
        case 'C': puts("Se ha pulsado una c.");
            break;
        default: puts("Opcion invalida!!!!");
    }
    return 0;
}
