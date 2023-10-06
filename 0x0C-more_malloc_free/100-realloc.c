#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Write a function that reallocates a memory block using
 * malloc and free
 * Prototype:
 * void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
 *
 * where ptr is a pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size)
 *
 * old_size is the size, in bytes, of the allocated
 * space for ptr
 * and new_size is the new size, in bytes of the new
 * memory block
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of the
 * old and new sizes
 * If new_size > old_size, the “added” memory should not be
 * initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call
 * is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 * FYI: The standard library provides a different function: realloc.
 * Run man realloc to learn more.
 *
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
