#include <stdio.h>

/**
 * main - this program prints the nos. of argument passed into it.
 * @argc: number of command line arguement (int)
 * @argv: an array of command line arguements
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
