#include "my.h"

int main()
{
    double a, b, c, r;
    a = 15.7;
    b = 7.1;
    c = max(a, b);
    printf("[*] Funkce max(%.2f, %.2f) = %.2f\n", a, b, c);

    c = MAX(a, b);
    printf("[*]  Makro MAX(%.2f, %.2f) = %.2f\n", a, b, c);

    r = 7.15;
    a = obvodKruhu(r);
    printf("[*] Funkce obvodKruhu(%.2f) = %.2f\n", r, a);

    a = OBVOD_KRUHU(r);
    printf("[*]  Makro OBVOD_KRUHU(%.2f) = %.2f\n", r, a);

    a = 7.15;
    b = 2.67;
    c = 12.02;
    r = objemKvadru(a, b, c);
    printf("[*] Funkce objemKvadru(%.2f, %.2f, %.2f) = %.2f\n", a, b, c, r);

    r = OBJEM_KVADRU(a, b, c);
    printf("[*]  Makro OBJEM_KVADRU(%.2f, %.2f, %.2f) = %.2f\n", a, b, c, r);
}

