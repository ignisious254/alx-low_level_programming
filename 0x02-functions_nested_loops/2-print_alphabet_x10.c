#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
char T;
int y = 0;
while (y < 10)
{
for (T = 'a'; T <= 'z'; T++)
{
_putchar(T);
}
_putchar('\n');
y++;
}
}
