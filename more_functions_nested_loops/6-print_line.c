#include "main.h"
/**
 * print_line - Main entry
 * @n: variable
 * Return: Printing line
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		_putchar('_');
	}
	_putchar('\n');
}
