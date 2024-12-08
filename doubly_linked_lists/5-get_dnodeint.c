#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the node with given index
 * @head: - input for given structure
 * @index: - index for list
 * Return: - return the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *index_node = head;
	unsigned int i = 0;

	while (i < index)
	{
		index_node = index_node->next;
		if (index_node == NULL)
			break;
		i++;
	}
	if (i < index)
		return (NULL);
	return (index_node);
}
