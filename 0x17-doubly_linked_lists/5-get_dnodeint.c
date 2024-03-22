#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a certain index
 * @index: index of node to be returned
 * @head: points to the current node
 *
 * Return: adress of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
