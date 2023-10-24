#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Write a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 *
 * @head: Address of the first node of the list.
 *
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
