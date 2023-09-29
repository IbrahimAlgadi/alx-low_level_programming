#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line.
 * Prototype: void _puts_recursion(char *s);
 * FYI: The standard library provides a similar function:
 * puts. Run man puts to learn more.
 *
 * @s: pointer to char
 * Return: No.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
