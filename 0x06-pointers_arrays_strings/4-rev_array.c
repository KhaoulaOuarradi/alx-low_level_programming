#include "main.h"
/**
 * reverse_array - array
 * @a: pointer of an array
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n / 2; i++)
	{
		c = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = c;
	}
}
