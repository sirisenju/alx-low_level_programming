#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 * @head: first element
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
