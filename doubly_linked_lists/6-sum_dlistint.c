#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - calculates the sum of elements in linked list
 * @head: - input for given structure
 * Return: - return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
