#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Set memory bytes
 *
 * @memory: pointer to memory area to be filled
 * @ch: char to copy
 * @n: number of times to copy [ch]
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *memory, char ch, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		memory[i] = ch;
	}

	return (memory);
}

/**
 *
 * *_calloc - Write a function that allocates memory for an array,
 * using malloc.
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * The memory is set to zero
 *
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * FYI: The standard library provides a different function: calloc.
 * Run man calloc to learn more.
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
