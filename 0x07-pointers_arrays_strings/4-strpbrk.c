#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Write a function that searches a string for any of a set
 * of bytes.
 * Prototype: char *_strpbrk(char *s, char *accept);
 * The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 *
 * FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.
 *
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
