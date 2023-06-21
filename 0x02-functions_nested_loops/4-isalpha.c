#icnlude "main.h"
/**
 * _isalpha - checking alphabetic character
 * @c: the code that will be checked
 *
 * Return: 1 if the letter is lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)

{
	if (((c > 96) && (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
