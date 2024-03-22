#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the dlist
 * @head: adress pointer
 * @n: int feild of the new node
 *
 * Return: adress of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *list;

	list = *head;
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (new);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (list->next)
			list = list->next;
		new->prev = list;
		list->next = new;
	}

	return (*head);
}
