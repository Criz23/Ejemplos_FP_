#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char nombre[10] = "Javier";
    char nombre_[10];

    letra = "L";
    nombre_[0] = 'P';
    nombre_[1] = 'a';
    nombre_[2] = 'c';
    nombre_[3] = 'o';
    nombre_[4] = '\0';

    printf(nombre);
    printf("\n%s", nombre_);
    return 0;
}
