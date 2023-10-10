#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[80];
    printf("Engresa tu nombre: ");
    scanf("%s", &nombre);


    for (int i = 0; i < 80; i++){
        if(nombre[i] == '\0'){
            break;
        }
        printf("%c", nombre[i]);
    }

    for (int j = 10; j > 0; j--){
        printf("\n %d", j);
    }
    return 0;
}
