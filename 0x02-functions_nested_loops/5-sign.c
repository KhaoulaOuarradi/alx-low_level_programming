#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: the sign number that will be printed
 *
 * Return: 1 if n is greater than 0, 0 if n is zero and -1 is less than zero
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (-);
		return (-1)
	}
}
