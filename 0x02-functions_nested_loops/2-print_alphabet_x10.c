#include "main.h"
/**
 * print_alphabet_x10 - ten times
 *
 * Return: This functions return void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; i++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
