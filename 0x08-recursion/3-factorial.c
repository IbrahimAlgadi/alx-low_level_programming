#include "main.h"

/**
 * factorial - Write a function that returns the
 * factorial of a given number.
 * Prototype: int factorial(int n);
 * If n is lower than 0, the function should return -1 to
 * indicate an error
 * Factorial of 0 is 1
 *
 * @n: integer
 * Return: recursive function
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
