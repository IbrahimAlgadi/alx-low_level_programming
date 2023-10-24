#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head
 * node’s data (n).
 *
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *listp;
	int my_data;

	if (*head == NULL)
		return (0);

	listp = *head;
	*head = listp->next;
	my_data = listp->n;
	free(listp);
	return (my_data);
}
