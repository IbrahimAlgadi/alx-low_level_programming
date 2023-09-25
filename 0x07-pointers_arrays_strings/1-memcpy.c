#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src
 * to memory area dest
 *
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 *
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }

        return (dest);
}
