#include "main.h"

/**
 * print_square -> printing line
 * @size: integer parameter
 * Return: 0
 */
void print_square(int size)
{
	int b = 0;
	int c = 0;

	if (size > 0)
	{
		while (b < size)
		{
			while (c < size)
			{
				_putchar('#');
				c++;
			}
		c = 0;
		b++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
