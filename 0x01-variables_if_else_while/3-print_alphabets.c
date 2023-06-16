#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char i;
	char n;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
