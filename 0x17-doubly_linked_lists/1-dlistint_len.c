#include "lists.h"

/**
 * dlistint_len - prints the length of the linked list.
 *
 * @h: pointer to the head.
 * Return: total number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		list_len++;
		h = h->next;
	}

	return (list_len);
}
