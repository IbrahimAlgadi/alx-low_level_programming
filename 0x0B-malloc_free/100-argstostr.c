#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}


/**
  * argstostr - concatenates all arguments of the program.
  *
  * @ac: argument count.
  * @av: pointer to array of size ac.
  *
  * Return: NULL if ac == 0 or av == null, Pointer to new string.
  * NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, size = 0, arg_string_idx = 0;
	char *arg_string;

	while (i < ac)
	{
		size = size + _strlen(av[i]) + 1;
		i++;
	}
	/*printf("Total Size Is: %d\n", size);*/

	arg_string = malloc((sizeof(char) * size));
	if (arg_string == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < _strlen(av[i]))
		{
			arg_string[arg_string_idx] = av[i][j];
			j++;
			arg_string_idx++;
		}
		arg_string[arg_string_idx] = '\n';
		i++;
		arg_string_idx++;
	}
	/*printf("%d = %d\n", arg_string_idx, size);*/
	arg_string[arg_string_idx - 1] = '\0';

	return (arg_string);
}
