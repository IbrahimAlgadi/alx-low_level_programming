#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * Prototype: char *_strchr(char *s, char c);
 * Returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 *
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
