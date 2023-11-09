#include "lists.h"

/**
 * free_dlistint - Functions frees a doubly linked list.
 * @head: The pointer to the head of the doubly linked list.
 * Return: Null.
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
