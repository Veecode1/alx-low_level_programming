#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times
	the alphabet, in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}

	_putchar('\n');
}
