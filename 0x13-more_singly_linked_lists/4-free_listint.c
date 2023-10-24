#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Write a function that
 * frees a listint_t list.
 *
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *listp, *listp2;

	listp = head;
	while (listp != NULL)
	{
		listp2 = listp->next;
		free(listp);
		listp = listp2;
	}
}
