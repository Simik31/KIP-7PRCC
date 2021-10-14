#include "my.h"

void staticka_matice() {

    int matrix[STATIC_MATRIX_SIZE][STATIC_MATRIX_SIZE];

    for (int y = 0; y < STATIC_MATRIX_SIZE; y++) {
        for (int x = 0; x < STATIC_MATRIX_SIZE; x++) {
            matrix[x][y] = rand() % 89 + 11;
        }
    }

    printf("\n\Staticka Matice %d x %d:\n", STATIC_MATRIX_SIZE, STATIC_MATRIX_SIZE);
    for (int y = 0; y < STATIC_MATRIX_SIZE; y++) {
        for (int x = 0; x < STATIC_MATRIX_SIZE; x++) {
            printf("%d ", matrix[x][y]);
        }
        printf("\n");
    }

    int sumM = 0, sumS = 0;

    for (int i = 0; i < STATIC_MATRIX_SIZE; i++) {
        sumM += matrix[i][i];
        sumS += matrix[i][STATIC_MATRIX_SIZE - i - 1];
    }

    printf("\nStaticka Matice   hlavni diagonala: %d", sumM);
    printf("\nStaticka Matice vedlejsi diagonala: %d\n\n", sumS);
}