#include <stdio.h>

/**
 * main - this code prints all the alphabet lower case
 * Return: the code returns 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
