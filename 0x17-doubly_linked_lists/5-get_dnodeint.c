#include "lists.h"
/**
 * get_dnodeint_at_index - the nth node of a dlistint list
 * @head: head node
 * @index: element number
 * Return: node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		if (index == num)
			return (head);
		head = head->next;
		num++;
	}
	return (NULL);
}
