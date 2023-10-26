#include "main.h"

/**
 * binary_to_uint - Write a function that converts a binary
 * number to an unsigned int.
 *
 * @b: string contain binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[i] - '0');
	}
	return (dec_v);
}
