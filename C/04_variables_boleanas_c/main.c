#include <stdio.h>
#include <stdlib.h>

int main()
{
    int and1, and2, and3, and4, or1, or2, or3, or4;

    and1 = 1&1;
    and2 = 1&0;
    and3 = 0&1;
    and4 = 0&0;

    or1 = 1||1;
    or2 = 1||0;
    or3 = 0||1;
    or4 = 0||0;

    printf("AND\n");
    printf("1 : 1 = %d", and1);
    printf("\n");
    printf("1 : 0 = %d", and2);
    printf("\n");
    printf("1 : 0 = %d", and2);
    printf("\n");
    printf("1 : 0 = %d", and2);
    printf("\n");
    printf("\n");

    printf("OR\n");
    printf("1 : 1 = %d", or1);
    printf("\n");
    printf("1 : 0 = %d", or2);
    printf("\n");
    printf("1 : 0 = %d", or3);
    printf("\n");
    printf("1 : 0 = %d", or4);
    printf("\n");
    printf("\n");

    printf("XAND\n");
    printf("1 : 1 = %d", !and1);
    printf("\n");
    printf("1 : 0 = %d", !and2);
    printf("\n");
    printf("1 : 0 = %d", !and2);
    printf("\n");
    printf("1 : 0 = %d", !and2);
    printf("\n");
    printf("\n");

    printf("XOR\n");
    printf("1 : 1 = %d", !or1);
    printf("\n");
    printf("1 : 0 = %d", !or2);
    printf("\n");
    printf("1 : 0 = %d", !or3);
    printf("\n");
    printf("1 : 0 = %d", !or4);
    printf("\n");
    printf("\n");

    return 0;
}
