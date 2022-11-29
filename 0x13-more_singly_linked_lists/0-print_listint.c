#include "lists.h"
/**
 * print_listint - prints the elements of a list
 * @h: hed of the linked list
 * Return: number of nodes present
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}

	return (nnodes);
}
