#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds the new node at the head of the list
 * @head: - input for given structure
 * @n: - data of new node
 * Return: - Returns the pointer which points new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (0);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		new_node->next->prev = new_node;
		*head = new_node;
	}
	return (*head);
}
