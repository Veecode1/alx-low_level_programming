#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/* A program will assign a random number to
	the variable n each time it is executed.
 * main - The Entry point of the function
 * @n - the variable to store different nums
 *
 * Return: Always 0 on suceess 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negetive", n);
	printf("\n");

	return (0);
}
