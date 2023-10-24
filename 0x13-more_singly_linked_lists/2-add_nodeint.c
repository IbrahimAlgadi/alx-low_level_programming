#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Write a function that adds a new node at
 * the beginning of a listint_t list.
 *
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 *
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *listp;

	listp = malloc(sizeof(listint_t));
	if (listp == NULL)
		return (NULL);

	listp->n = n;
	listp->next = *head;
	*head = listp;
	return (*head);
}
