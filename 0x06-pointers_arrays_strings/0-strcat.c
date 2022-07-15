#include "main.h"

/**
 * _strcat - function that copy
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: Always return 0.
 */

char *_strcat(char *dest, char *src)
{
	int s1 = 0, s2 = 0;

	while (dest[s1++])
		s2++;

	for (s1 = 0; src[s1]; s1++)
		dest[s2++] = src[s1];

	return (dest);
}
