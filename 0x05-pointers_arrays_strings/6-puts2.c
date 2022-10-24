#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st++)
	if (st % 2 == 0)
		_putchar(str[st]);
	_putchar('\n');
}
