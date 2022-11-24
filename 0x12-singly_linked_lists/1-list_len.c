#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t no_elem;

	for (no_elem = 0; h != NULL; no_elem++)
	{
		h = h->next;
	}
	return (no_elem);
}
