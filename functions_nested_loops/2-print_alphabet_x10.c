#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 *
 */

void print_alphabet_x10(void)
{
char letter;
int a;
for (a = 0; a < 10; a++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
