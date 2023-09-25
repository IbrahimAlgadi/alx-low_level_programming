#include "main.h"

/**
* _strstr - Write a function that locates a substring.
* Prototype: char *_strstr(char *haystack, char *needle);
* The _strstr() function finds the first occurrence of the
* substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
* Returns a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}

	return (0);
}
