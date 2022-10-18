#include<stdio.h>
#include<string.h>


/**
 * main-prints out putchar
 *
 * Return Always 0
 */

int main(void)
{
	char arr[] = "_putchar";
	int len = strlen(arr);
	int i;
	for (i = 0; i < len; i++)
	{
			putchar(arr[i]);


	}

	putchar('\n');

	return (0);
}

