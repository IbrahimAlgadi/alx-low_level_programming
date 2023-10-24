#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Write a function that deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: First node address.
 * @index: Position of the node to delete.
 *
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_list, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current_list = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current_list->next == NULL)
			return (-1);
		current_list = current_list->next;
	}
	next = current_list->next;
	current_list->next = next->next;
	free(next);
	return (1);
}
