#include "main.h"

/**
 * _isupper - Check Description
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is uppercase or 0 if is lowercase
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
