#include "main.h"

/**
 * _isdigit - checking for a digit
 * @c: the char to check
 *
 * Return: 1 if c isdigit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
