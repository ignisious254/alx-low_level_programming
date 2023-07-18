#include "main.h"
/**
 * _islower - lower case and c
 * Return: 1, if c is lower case
 *         0, otherwise
 * @c: parameter to be checked
*/
int _islower (int c)
{
if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
