#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[80];
    int entero;
    float flotante;


    printf("Engresa tu nombre: ");
    scanf("%s", &nombre);
    printf("Engresa un numero: ");
    scanf("%d", &entero);
    printf("Engresa un flotante: ");
    scanf("%f", &flotante);

    printf("\nTu nombre es: %s", nombre);
    printf("\nEl numero entero es: %d", entero);
    printf("\nEl numero flotante es: %f", flotante);
    return 0;
}
