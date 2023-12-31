#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  Write a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * Prototype: void print_diagsums(int *a, int size);
 * Format: see example
 * You are allowed to use the standard library
 *
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
