#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconde string.
 */
char *leet(char *s)
{
	int i;
	int j;
	int k;

	char letters[] = "oOlLeEaAtT";
	char encode[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				k = j;
				s[i] = encode[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
