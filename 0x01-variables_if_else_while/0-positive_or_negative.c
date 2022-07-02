#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number
 * provided it's positive or negative
 * Return: Aways 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* The code starts from here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
