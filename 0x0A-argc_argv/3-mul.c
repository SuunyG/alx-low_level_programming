#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints the nos. of argument passed into it.
 * @argc: number of command line arguement (int)
 * @argv: an array of command line arguements
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int mult, st, nd;

	if (argc == 3)
	{
		st = atoi(argv[1]);
		nd = atoi(argv[2]);
		mult = st * nd;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
