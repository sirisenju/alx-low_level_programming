#include "lists.h"
/**
 * add_nodeint - adds new node at the start
 * @head: the head of the list
 * @n: the element to add
 * Return: address of the new element, else null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
