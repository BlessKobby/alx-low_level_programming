#include "lists.h"

/**
 * print_listint - A funcution that prints all the elements of a linked list.
 * @h: Linked list of type listint_t to be printed.
 *
 * Return: number of nodes in the singly linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
