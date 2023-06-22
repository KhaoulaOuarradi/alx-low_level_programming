#include "main.h"

/**
 * print_line - drawing a straight line
 * @n: number of times
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
