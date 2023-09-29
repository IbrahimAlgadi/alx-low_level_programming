#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the
 * length of a string.
 * Prototype: int _strlen_recursion(char *s);
 * FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
 *
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
