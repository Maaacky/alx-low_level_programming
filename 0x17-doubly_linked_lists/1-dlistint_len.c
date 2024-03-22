#include "lists.h"

/**
 * dlistint_len - returns leght of the dlist
 * @h: adress of head node
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i = 0;

	while (node)
	{
  node = node->next;
  i++;
	}
	
	return (i);
}
