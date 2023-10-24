#include "lists.h"

/**
 * listint_len - Write a function that returns the number of
 * elements in a linked listint_t list.
 *
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *listp;
	unsigned int res = 0;

	listp = h;
	while (listp)
	{
		res++;
		listp = listp->next;
	}
	return (res);
}
