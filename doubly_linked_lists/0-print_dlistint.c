#include "lists.h"
/**
 * print_dlistint - prints the n of nodes and returns the count
 * @h: - input for given structure
 * Return: - Returns the length of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
