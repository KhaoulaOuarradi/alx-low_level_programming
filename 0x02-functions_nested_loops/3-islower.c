#include "main.h"
/**
 * _islower - checks lowercase
 * @c: the code that will be checked
 *
 * Return: 1 if lowercase 0 if else
 */
int _islower(int c)
{
	if ((c > 97) && (c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
