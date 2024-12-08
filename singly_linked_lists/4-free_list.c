#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees all the nodes of list
 * @head: - input for given structure
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
