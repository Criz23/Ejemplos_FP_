#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c, d;
    b = 12.7;
    c = 97.46567;
    d = a+c;

    int r1, r2, r3, r4;

    r1 = 1&&1;
    r2 = 1&&0;
    r3 = 0&&1;
    r4 = 0&&0;

    printf("AND\n");
    printf("1 && 1 = %d", r1);
    printf("\n");
    printf("1 && 0 = %d", r2);
    printf("\n");
    printf("\n");

    printf("Esto es a : %d", a);
    printf("Esto es b : %d", &b);
    //printf("Hello world!\n");
    return 0;
}
