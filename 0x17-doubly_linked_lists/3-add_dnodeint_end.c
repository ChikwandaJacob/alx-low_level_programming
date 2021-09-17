#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 *
 * @head: pointer reference to the head.
 * @n: data for new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!current)
	{
		new_node->prev = NULL;
		new_node->next = NULL;

		*head = new_node;

		return (new_node);
	}

	new_node->next = NULL;

	while (current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
