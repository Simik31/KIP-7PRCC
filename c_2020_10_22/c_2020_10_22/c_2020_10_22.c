#include "my.h"

int main()
{
    complex a = { 5, 1 }, b = { 3, 4 }, c = add(a, b), d = subtract(a, b);

    printf("    a: %lf+%lfi\n", a.real, a.imag);
    printf("    b: %lf+%lfi\n", b.real, b.imag);
    printf("a + b: %lf+%lfi\n", c.real, c.imag);
    printf("a - b: %lf+%lfi\n\n", d.real, d.imag);

    char hello[100], copy[100];

    strcpy(hello, "Hello, world!\0");
    strcpy(copy, hello);

    printf("hello: %s\n", hello);
    printf("copy: %s\n\n", copy);

    strcpy(hello, "Hello, world!\0");
    strcpy(copy, "Hello, planet!\0");

    printf("hello: %s\n", hello);
    printf("copy: %s\n", copy);

    printf("dif: %d\n", strcmp(hello, copy));
    printf("hello length: %d\n\n", strlen(hello));

    return 0;
}
