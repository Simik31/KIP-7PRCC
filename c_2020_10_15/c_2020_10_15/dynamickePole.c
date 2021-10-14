#include "my.h"

void dynamicke_pole() {
    int* pointer;
    if ((pointer = ARRAY_MALLOC(int, POCET_DYNAMIC)) == NULL) return 1;

    srand(time(NULL));

    arrayFillWithRandom(pointer, POCET_DYNAMIC, 0, POCET_DYNAMIC * 2);

    printf("Dynamicke pole:\n");
    arrayPrint(pointer, POCET_DYNAMIC);

    printf("\n\nDynamicke pole Min: %d", arrayMin(pointer, POCET_DYNAMIC));
    printf("\n\nDynamicke pole Max: %d", arrayMax(pointer, POCET_DYNAMIC));

    printf("\n\nDynamicke pole Serazene:\n");
    arraySort(pointer, POCET_DYNAMIC);
    arrayPrint(pointer, POCET_DYNAMIC);

    arrayDestroy(pointer);
}