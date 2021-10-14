#pragma once

#ifndef MY

#define MY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define POCET_DYNAMIC 10
#define POCET_STATIC 15
#define DYNAMIC_MATRIX_SIZE 10
#define STATIC_MATRIX_SIZE 10

#define ARRAY_MALLOC(t, s) (t*)malloc(sizeof(t) * (s))

void dynamicke_pole();
void staticke_pole();
void dynamicka_matice();
void staticka_matice();

void arrayDestroy(int* p);
void arrayFillWithRandom(int* p, int size, int min, int max);
void arrayPrint(int* p, int size);
int  arrayMin(int* p, int size);
int  arrayMax(int* p, int size);
void arraySort(int* p, int size);
int** matrixMallocInt(int size);
void matrixFillWithRandom(int** m, int size, int min, int max);
void matrixPrint(int** m, int size);
int matrixDiagonalSum(int** m, int size, char s);

#endif