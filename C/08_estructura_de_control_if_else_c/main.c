#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero, calificacion;
    char letra;

    if(1){
        printf("Esto es un disparador");
        printf("\n------------------------");
    }

    if(0){
        printf("Esto es munca va a pasar");
        printf("\n------------------------");
    }

    printf("\n");
    printf("Engresa un numero: ");
    scanf("%d", &entero);

    if(entero < 100){
        printf("\nEl numero es 99 o menos");
        printf("\n------------------------");
    }

    if(entero <= 100){
        printf("\nEl numero es 100 o menos");
        printf("\n------------------------");
    }

    if(entero == 100){
        printf("\nEl numero es 100");
        printf("\n------------------------");
    }

    if(entero != 100){
        printf("\nEl numero no es 100");
        printf("\n------------------------");
    }

    if(entero >= 100){
        printf("\nEl numero es 100 o más");
        printf("\n------------------------");
    }

    if(entero > 100){
        printf("\nEl numero es 101 o más");
        printf("\n------------------------");
    }

    printf("\n");
    printf("Ingresa un numero: ");
    scanf("%d", &calificacion);

    if(calificacion > 0 && calificacion < 60 ){
        printf("\nLa calificacion es reprobatoria");
    }
    else if(calificacion >= 60 && calificacion <= 100){
        printf("\nLa calificacion es aprobatoria");
    }
    else{
        printf("\nLa calificacion es invalida");
    }

    printf("\n");
    printf("Dame una lera del abecedario: ");
    scanf("%s", &letra);

    if (letra >= 'A' && letra <='Z'){
        printf("\nLA LETRA ES MAYUSCULA");
    }
    else if(letra >= 'a' && letra <='z'){
        printf("\nLA LETRA ES MINUSCULA");
    }
    else{
        printf("\nERROR");
    }
    return 0;
}
