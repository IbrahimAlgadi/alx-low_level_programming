#include "main.h"

/**
 * _print_rev_recursion - Write a function that prints a
 * string in reverse.
 * Prototype: void _print_rev_recursion(char *s);
 *
 * @s: pointer to string params
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
