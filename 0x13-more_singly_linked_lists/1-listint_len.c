#include "lists.h"
/**
 * listint_len - returns the of element in a linked list
 * @h: head of the linked list
 * Return: numbers of nodes present
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}

	return (nnodes);
}
