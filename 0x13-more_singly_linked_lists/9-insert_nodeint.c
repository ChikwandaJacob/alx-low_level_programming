#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: reference pointer to the head of the linked list
 * @idx: position of new node
 * @n: value of new node
 *
 * Return: new linked list with new node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (!*head)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (*head);
	}

	for ( ; i < idx - 1; i++)
		temp = temp->next;

	new_node->next = temp->next;
	temp->next = new_node;

	return (temp);
}
