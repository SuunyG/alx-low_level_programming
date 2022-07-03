#include <stdio.h>

/**
 * main - this code prints all the alphabet lower case
 * Return: the code returns 0.
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar(numb + '0');
	}
	putchar('\n');
	return (0);
}
