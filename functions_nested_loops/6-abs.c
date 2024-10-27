#include "main.h"

/**
 * _abs - prints abs of number
 * @a: - input of function
 * Return: Always 0 (Success)
 */

int _abs(int a)
{
if (a > 0 || a == 0)
{
return (a);
}
else if (a < 0)
{
int t;
t = a * (-1);
return (t);
}
return (0);
}
