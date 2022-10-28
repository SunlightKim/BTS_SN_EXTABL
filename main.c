#include <stdio.h>
#include "inc/fillarray.h"
#include "inc/const.h"

int main() {
    /* EXO 1 */
    printf("-- RESULT OF EXERCISE 1 --\n");
    int array1[SIZE][SIZE] = { 0 };
    fillColumns(array1);

    /* EXO 2 */
    printf("-- RESULT OF EXERCISE 2 --\n");
    int array2[SIZE][SIZE] = { 0 };
    fillRows(array2);

    /* EXO 3 */
    printf("-- RESULT OF EXERCISE 3 --\n");
    int array3[SIZE][SIZE] = { 0 };
    fillBorder(array3);

    /* EXO 4 */
    printf("-- RESULT OF EXERCISE 4 --\n");
    int array4[SIZE][SIZE] = { 0 };
    fillCells(array4);

    /* EXO 5 */
    printf("-- RESULT OF EXERCISE 5 --\n");
    int array5[SIZE][SIZE] = { 0 };
    fillDiag(array5);

    return 0;
}