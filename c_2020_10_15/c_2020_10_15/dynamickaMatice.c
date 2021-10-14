#include "my.h"

void dynamicka_matice() {

    int** matrix;
    if ((matrix = matrixMallocInt(DYNAMIC_MATRIX_SIZE)) == NULL) return 1;

    matrixFillWithRandom(matrix, DYNAMIC_MATRIX_SIZE, 10, 99);

    printf("\n\nDynamicka Matice:\n");
    matrixPrint(matrix, DYNAMIC_MATRIX_SIZE);

    printf("\nDynamicka Matice   hlavni diagonala: %d", matrixDiagonalSum(matrix, DYNAMIC_MATRIX_SIZE, 'm'));
    printf("\nDynamicka Matice vedlejsi diagonala: %d\n\n", matrixDiagonalSum(matrix, DYNAMIC_MATRIX_SIZE, 's'));

    arrayDestroy(matrix);
}