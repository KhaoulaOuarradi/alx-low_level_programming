#include "main.h"
/**
 * print_alphabet(void)
 *
 * Return: This function returns void
*/
void print_alphabet(void);
{
	int index;

	for (index =97; index < 123; index++)
	{
		_putchar(index);
	}
	_putchar('\n');
}
