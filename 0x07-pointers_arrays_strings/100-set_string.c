#include "main.h"
/**
 * set_string - Write a function that sets the value of a
 * pointer to a char.
 * Prototype: void set_string(char **s, char *to);
 *
 * @s: pointer
 * @to: char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
