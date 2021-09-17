#include "lists.h"

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

	if (index == position)
		return (head);

	while (head->next && (position != index))
	{
		head = head->next;
		position++;
	}

	if (!head)
		return (NULL);

	return (head);
}
