#include "lists.h"

/**
 * add_dnodeint - adds a new node to the dlist
 * @head: adress pointer
 * @n: int feild of the new node
 *
 * Return: adress of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (new);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
