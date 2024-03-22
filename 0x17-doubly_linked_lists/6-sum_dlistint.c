#include "lists.h"

/**
 * sum_dlistint - sums the value of a dlist
 * @head: pointer to the current head node
 *
 * Return: int sum of value.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
