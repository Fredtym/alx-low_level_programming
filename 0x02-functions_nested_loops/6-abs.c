#include "main.h"
/**
 * _abs - calculates absolute value of a number
 * @n: parameter to be checked
 * Return: always 0.
 */
int _abs(int n)
{

	if (n > 0)
		return (n * 1);
	else if (n < 0)
		return (n * -1);
	return (0);
}
