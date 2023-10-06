#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Write a function that creates an array of integers.
 * Prototype: int *array_range(int min, int max);
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 *
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
