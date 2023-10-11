#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - Write a function that prints a name.
 *
 * @name: person's name
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
