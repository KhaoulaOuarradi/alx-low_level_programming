#include "main.h"

/**
 * print_most_numbers - printing numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		if (index == 2 || index == 4)
			continue;
		_putchar(48 + index);
	}
	_putchar('\n');
}
