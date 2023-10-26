#include "main.h"

/**
 * get_bit - Write a function that returns the value
 * of a bit at a given index.
 *
 * @n: decimal parameter
 * @index: index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	bit_value = (n >> index);
	if (index > 32)
		return (-1);
	return (bit_value & 1);
}
