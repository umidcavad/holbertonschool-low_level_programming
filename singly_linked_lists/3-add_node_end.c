#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - adds new node at the end of the list
 * @head: - input for given structure
 * @str: - new added string
 * Return: - Returns the new  list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));
	list_t *new_node = *head;
	int i = 0;

	if (new_list == NULL)
		return (0);

	if (new_node != NULL)
	{
		while (new_node->next != NULL)
		new_node = new_node->next;
		new_node->next = new_list;
	}

	new_list->next = NULL;
	new_list->str = strdup(str);
	if (*head ==  NULL)
		*head = new_list;

	while (str[i])
	{
		i++;
	}
	new_list->len = i;
	return (*head);
}
