#include "lists.h"
/**
 * dlistint_len - prints the count of elements in list
 * @h: - input for given structure
 * Return: - Returns the length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
