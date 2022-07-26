#include <stdio.h>

/**
 * main - this program print its name when executed
 * @argc: number of command line arguement (int)
 * @argv: an array of command line arguements
 * Return: 0 for success
 */
int main(unsigned int argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
