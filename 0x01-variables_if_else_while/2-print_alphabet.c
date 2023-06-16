#include <stdio.h>

/**
 * A program that prints the alphabet in lowercase.
 * main - The entry  point of the function
 *
 * Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
