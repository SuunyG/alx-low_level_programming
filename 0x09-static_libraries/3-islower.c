#include "main.h"
/**
*_islower - to check for lowercase character
* @c: the int is used as the argument for the function
* Return: Always 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
