#include "my.h"

void arrayDestroy(int* p) {
    free(p);
    p = NULL;
}

void arrayFillWithRandom(int* p, int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        p[i] = min + rand() % (max - min) + 1;
    }
}

void arrayPrint(int* p, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
}

int arrayMin(int* p, int size) {
    int m = p[0];
    for (int i = 1; i < size; i++) {
        if(m > p[i]) m = p[i];
    }
    return m;
}

int arrayMax(int* p, int size) {
    int m = p[0];
    for (int i = 1; i < size; i++) {
        if (m < p[i]) m = p[i];
    }
    return m;
}

void arraySort(int* p, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (p[i] > p[j]) {
                int tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

int** matrixMallocInt(int size) {
    int** m;
    if ((m = (int**)malloc(sizeof(int*) * size)) == NULL) return NULL;
    for (int i = 0; i < size; i++) {
        if ((m[i] = (int*)malloc(sizeof(int) * size)) == NULL) return NULL;
    }
    return m;
}

void matrixFillWithRandom(int** m, int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arrayFillWithRandom(m[i], size, min, max);
    }
}

void matrixPrint(int** m, int size) {
    for (int y = 0; y < size; y++) {
        arrayPrint(m[y], size);
        printf("\n");
    }
}

int matrixDiagonalSum(int** m, int size, char s) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += m[i][(s == 'm' ? i : size - i - 1)];
    }
    return sum;
}