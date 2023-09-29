#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value
 * of x raised to the power of y.
 * Prototype: int _pow_recursion(int x, int y);
 * If y is lower than 0, the function should return -1
 * FYI: The standard library provides a different function:
 * pow. Run man pow to learn more.
 *
 * @x: integer
 * @y: integer
 * Return: recur
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
