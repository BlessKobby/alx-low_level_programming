#include "lists.h"

/**
 * dlistint_len - Function returns number of elements in a linked list.
 *
 * @h: The head of the singly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
