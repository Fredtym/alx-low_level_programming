#include "main.h"

/**
 * _isupper - a funtion that checks for uppercase character
 * @c: input
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
