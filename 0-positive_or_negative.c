#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints out a random positive and negative integer
 * Description: also prints out zero
 * Return: Always return 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
