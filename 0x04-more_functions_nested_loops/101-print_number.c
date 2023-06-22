#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		—putchar('-');
		nus = -num;
	}
	/*print the first few digits*/
	if ((num / 10) > 0)
		print_nusber(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
