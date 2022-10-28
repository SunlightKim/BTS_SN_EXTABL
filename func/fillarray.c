//
// Created by enzbonolis@uimm-sn.fc on 28/10/22.
//

#include <stdio.h>
#include "../inc/fillarray.h"

void fillColumns(int array[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        array[i][0] = 1;
        printf("Value in column 0, row %d is %d\n", i, array[i][0]);
    }
}

void fillRows(int array[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        array[0][i] = 1;
        printf("Value in row 0, column %d is %d\n", i, array[0][i]);
    }

}

void fillBorder(int array[SIZE][SIZE])
{
    /* DEFINING VARIABLES FOR LOOP */
    int i , j;

    /* FILLING THE BORDER WITH '1' */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (i == 0 || i == (SIZE-1)) { array[i][j] = 1; }
            if (j == 0 || j == (SIZE-1)) { array[i][j] = 1; }
        }
    }

    /* PRINT THE ARRAY */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void fillCells(int array[SIZE][SIZE])
{
    /* DEFINING VARIABLES FOR LOOP */
    int i, j;

    /* FILLING THE ARRAY WITH '1' */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            array[i][j] = 1;
        }
    }

    /* FILLING THE BORDER WITH 0 */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (i == 0 || i == (SIZE-1)) { array[i][j] = 0; }
            if (j == 0 || j == (SIZE-1)) { array[i][j] = 0; }
        }
    }

    /* PRINT THE ARRAY */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void fillDiag(int array[SIZE][SIZE])
{
    /* DEFINING VARIABLES FOR LOOP */
    int i, j;

    /* FILLING THE DIAGONALS WITH '1' */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (j == i || j == SIZE-1 - i) { array[i][j] = 1; }
        }
    }

    /* PRINT THE ARRAY */
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}