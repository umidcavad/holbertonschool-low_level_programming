#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees all the nodes
 * @head: - input for given structure
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node = head;

	while (free_node)
	{
		free(free_node);
		free_node = free_node->next;
	}
}
