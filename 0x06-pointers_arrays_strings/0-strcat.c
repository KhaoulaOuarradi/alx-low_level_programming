#include "main.h"

/**
 * *_strcat - concatenating two strings.
 * @*dest: first string
 * @*src: second string
 *
 * Return: a pointer to the resulting string 
 */
char *_strcat(char *dest, char *src)
{
	char dest[100] = "Hello, \0";
	char src[] = "World!\0";

	strcat (dest, src);

	printf("%s\n", dest);
}
