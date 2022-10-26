#include <stdio.h>

/** 
*main:print_line - prints a s bytes of a buffer

*/

int main(void)
{	/**
 * main:print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
  /* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
