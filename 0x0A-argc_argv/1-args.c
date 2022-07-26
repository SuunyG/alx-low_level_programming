#include <stdio.h>

/**
 * main - this program prints the nos. of argument passed into it.
 * @argc: number of command line arguement (int)
 * @argv: an array of command line arguements
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
