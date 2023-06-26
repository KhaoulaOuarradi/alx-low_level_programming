#include "main.h"

/**
 * _puts - printing a string, followed by a new line
 * @str: string 
 *
 * Return: void
 */
void -puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n')
}
