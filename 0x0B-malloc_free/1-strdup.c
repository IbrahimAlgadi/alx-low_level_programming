#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Write a function that returns a pointer to
 * a newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *str_dup_ptr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL) /* Error Handling */
		return (NULL);

	while (str[len])
		len++;

	/* Allocate with the size of char plus '\0' end of the string  */
	str_dup_ptr = malloc(sizeof(char) * (len + 1));

	/* NULL if *str = NULL or allocation failed */
	if (str_dup_ptr == NULL)
		return (NULL);

	while ((str_dup_ptr[i] = str[i]) != '\0')
		i++;

	return (str_dup_ptr);
}
