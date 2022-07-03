#include <stdio.h>

/**
 * main - this code prints all possible combination of 1-9
 * Return: the code returns 0.
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar((numb % 10) + '0');
		if (numb == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
