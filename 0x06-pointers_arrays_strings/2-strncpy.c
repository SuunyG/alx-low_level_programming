#include "main.h"
#include <string.h>

/**
 * _strncpy -> function that copies string
 * @dest: aug1
 * @src: aug2
 * @n: aug3
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
