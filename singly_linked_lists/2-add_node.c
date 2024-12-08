#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds new node at the beginning of the list
 * @head: - input for given structure
 * @str: - new added string
 * Return: - Returns the new  list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));
	char *new_string = strdup(str);
	int i = 0;

	if (new_list == NULL)
	{
		return (0);
	}
	new_list->next = *head;
	new_list->str = new_string;
	*head = new_list;

	while (str[i])
	{
		i++;
	}
	new_list->len = i;
	return (*head);
}
