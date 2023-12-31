#include "main.h"

/**
 * _strcat - concatenating two strings
 *
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	dest[c] = '\0';

	return (dest);
}
