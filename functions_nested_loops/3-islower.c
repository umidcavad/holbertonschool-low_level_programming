#include "main.h"
/**
 * _islower - prints alphabet
 * @c: - input of function
 * Return: Always 0.
 */

int _islower(int c)
{
char i;
int n = 0;
for (i = 'a'; i < 'z'; i++)
{
if (c == i)
{
n++;
}
}
if (n == 1)
{
return (1);
}
else
{
return (0);
}
}
