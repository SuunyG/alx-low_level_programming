#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: interger a
 * @b: 2nd value b
 * Return: Aways return 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
