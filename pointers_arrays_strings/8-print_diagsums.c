#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the matrix.
 *
 * Description: This function calculates the sum of the two diagonals of a
 * square matrix and prints the results in the format "sum1, sum2\n".
 * The matrix is represented as a 1D array,  size is given as a parameter.
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;


for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}


for (i = 0; i < size; i++)
{
sum2 += a[i * size + (size - 1 - i)];
}


printf("%d, %d\n", sum1, sum2);
}

