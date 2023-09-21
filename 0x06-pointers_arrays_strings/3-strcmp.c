#include "main.h"

/**
 * _strcmp -  is a function that performs a lexicographic
 * comparison of two strings, s1 and s2, and returns an
 * integer value indicating their relationship. It returns
 * 0 if the strings are equal, a negative value if s1 is
 * less than s2, and a positive value if s1 is greater than
 * s2.
 *
 * @s1: the first string to be compared.
 * @s2: the second string to be compared.
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		res = *s1 - *s2;

	return (res);
}
