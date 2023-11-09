#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns the nth node in a list.
 * @head: The pointer to the head of the list.
 * @index: Node indices to search, starting from 0 to end.
 * Return: The nth node or null.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
