#include <stdio.h>

/**
 * main - this code prints all the alphabet lower case
 * Return: the code returns 0.
 */
int main(void)
{
	int numb_base_16;
	char letter;

	for (numb_base_16 = 0; numb_base_16 < 10; numb_base_16++)
	{
		putchar(numb_base_16 + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
