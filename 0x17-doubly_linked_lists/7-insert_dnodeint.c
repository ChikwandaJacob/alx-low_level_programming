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
	dlistint_t *current = *h, *prev;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	unsigned int position = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (position == idx)
	{
		new_node->next = current;
		current->prev = new_node;
		new_node->prev = NULL;

		*h = new_node;

		return (new_node);
	}

	while (current && (idx != position))
	{
		prev = current;
		current = current->next;
		position++;
	}

	if (!current)
		return (NULL);

	new_node->next = current;
	new_node->prev = prev;
	prev->next = new_node;
	current->prev = new_node;
	current = new_node;

	return (new_node);
}
