#include "main.h"
/**
 * print_sign - check the sign of a number
 * Return: 1 for positive num, -1 for a negative num or 0 for anything else
 * @n: parameter to be checked
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
