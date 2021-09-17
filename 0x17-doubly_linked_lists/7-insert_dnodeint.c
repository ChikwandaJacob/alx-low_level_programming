#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position.
 *
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *prev, *new_node = malloc(sizeof(dlistint_t));
	unsigned int position = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!cur)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (position == idx)
	{
		new_node->next = cur;
		cur->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	while (cur && (idx != position))
	{
		prev = cur;
		cur = cur->next;
		position++;
	}
	if (!cur)
		return (NULL);

	new_node->next = cur;
	new_node->prev = prev;
	prev->next = new_node;
	cur->prev = new_node;
	cur = new_node;

	return (new_node);
}
