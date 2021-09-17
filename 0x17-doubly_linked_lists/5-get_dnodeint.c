#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns a node at nth position
 *
 * @head: pointer to the head node.
 * @index: nth position.
 * Return: node at nth position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (position == index)
			return (head);

		head = head->next;
		position++;
	}

	return (NULL);
}
