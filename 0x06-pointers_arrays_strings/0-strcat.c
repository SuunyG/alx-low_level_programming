#include "main.h"

/**
 * *_strcatchar - function that copy
 * Return: Always return 0.
 */

char *_strcat(char *dest, char *src);
{
	char *dest[98] = "Hello";
	char *src[98] = "World!\n";
	char *ptr;

	_strcat(dest, src);
	_putchar("_strcat( dest, src):   %s\n", dest);
}
