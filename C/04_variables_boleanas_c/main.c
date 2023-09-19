#include <stdio.h>
#include <stdlib.h>

int main()
{
    bool and1, and2, and3, and4, or1, or2, or3, or4;

    and1 = 1&1;
    and2 = 1&0;
    and3 = 0&1;
    and4 = 0&0;

    or1 = 1||1;
    or2 = 1||0;
    or3 = 0||1;
    or4 = 0||0;

    printf("AND\n");
    printf("1 && 1 = %d", and1);
    printf("\n");
    printf("1 && 0 = %d", and2);
    printf("\n");
    printf("1 && 0 = %d", and2);
    printf("\n");
    printf("1 && 0 = %d", and2);
    printf("\n");

    printf("Esto es a : %d", a);
    printf("Esto es b : %d", &b);
    return 0;
}
