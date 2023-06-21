#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int Largest;

	if (a > b && a > c)
		Largest = a;
	if (b > a && b > c)
		Largest = b;
	if (c > a && c > b)
		Largest = c;
	return (largest);
}
