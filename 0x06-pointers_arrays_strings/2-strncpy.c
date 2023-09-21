#include "main.h"

/**
 * _strncpy -  _strncpy is a function that copies characters from
 * src to dest, up to a maximum length of n. It ensures that dest
 * is null-terminated within the specified length and returns a
 * pointer to the modified dest string.
 * @src: the source string to be copied from.
 * @dest: the destination string where the copied characters
 * will be stored.
 * @n: the maximum number of characters to copy from src to
 * dest.
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n) {
    int i;

    i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }

    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}
