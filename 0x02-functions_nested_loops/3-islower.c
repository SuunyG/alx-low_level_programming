#include "main.h"

/**
 * _islower - checks for lower case character
 * @C: int c is the arguement to be passed into the function
 * Return: 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
