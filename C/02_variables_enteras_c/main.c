#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f;

    a = 10;
    b = 20;
    c = a+b;
    d = a-b;
    e = a*b;
    f = b/a;

    printf("\nEsto es a: %d", a);
    printf("\nEsto es b: %d", b);
    printf("\nEsto es a + b: %d", c);
    printf("\nEsto es a - b: %d", d);
    printf("\nEsto es a * b: %d", e);
    printf("\nEsto es b / a: %d", f);
    return 0;
}
