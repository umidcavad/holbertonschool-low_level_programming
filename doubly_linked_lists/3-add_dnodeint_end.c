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
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to list.
 * @idx: index of inserting position.
 * @n: data for new node insertion.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp_node = *h;

	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}
		while (i < idx - 1 && tmp_node)
		{
			tmp_node = tmp_node->next;
			i++;
		}
		if (tmp_node)
		{
			if (tmp_node->next)
				tmp_node->next->prev = new_node;
			new_node->next = tmp_node->next;
			new_node->prev = tmp_node;
			tmp_node->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
