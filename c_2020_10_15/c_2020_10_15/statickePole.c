#include "my.h"

void staticke_pole() {
    int array[POCET_STATIC];

    arrayFillWithRandom(array, POCET_STATIC, 0, POCET_STATIC * 2);

    printf("\n\nStaticke pole:\n");
    arrayPrint(array, POCET_STATIC);

    printf("\n\nStaticke pole Min: %d", arrayMin(array, POCET_STATIC));
    printf("\n\nStaticke pole Max: %d", arrayMax(array, POCET_STATIC));

    printf("\n\nStaticke pole Serazene:\n");
    arraySort(array, POCET_STATIC);
    arrayPrint(array, POCET_STATIC);
}