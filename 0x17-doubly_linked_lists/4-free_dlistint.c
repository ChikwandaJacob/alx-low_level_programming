#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: pointer to the head of the linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
