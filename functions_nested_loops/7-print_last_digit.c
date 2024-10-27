#include "main.h"

/**
 * print_last_digit - prints abs of number
 * @number: - input of function
 * Return: Always 0 (Success)
 */

int print_last_digit(int number)
{
int last_digit;
last_digit = number % 10;
if (last_digit < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');
return (last_digit);
return (0);
}
