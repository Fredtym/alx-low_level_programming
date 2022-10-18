#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number entered
 * Return: always 0.
 */
int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = (num % 10);
	if (lastdigit < 0)
	{
		lastdigit = (lastdigit * -1);
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
