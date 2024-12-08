#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds the new node at the end of the list
 * @head: - input for given structure
 * @n: - data of new node
 * Return: - Returns the pointer which points the head node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
	last->next = new_node;
	new_node->prev = last;
	}
	return (*head);
}
