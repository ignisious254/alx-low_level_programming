#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints numbers in order from input to 98
 *@n: the number to be checked
 *Return: input number
 */
void print_to_98(int n)
{
if (n >= 98)
	{while (n > 98)
		printf("%d, ",n--);
	printf("%d,",n);
	}
else
	{
	while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
	}
}
