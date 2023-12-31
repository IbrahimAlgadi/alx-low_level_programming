#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: is a pointer to an array of integers.
 * @n: the number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
