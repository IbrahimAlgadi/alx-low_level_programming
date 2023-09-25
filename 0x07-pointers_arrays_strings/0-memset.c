#include "main.h"

/**
 * 0- Write a function that fills memory with a constant byte.
 * Author: Ibrahim Algadi
 *
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * The _memset() function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * FYI: The standard library provides a similar function: memset.
 *
 * @s: a pointer to a character array (string)
 * @b: the value (character) to set each byte of the memory block to
 * @n: the number of bytes to set in the memory block
 *
 * Return: returns a pointer to the original memory block *s.
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}
