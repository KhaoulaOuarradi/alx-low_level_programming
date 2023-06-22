#include "main.h"

/**
 * print_numbers - printing numbers followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		_putchar(48 + index);
	}
	_putchar('\n');
}
