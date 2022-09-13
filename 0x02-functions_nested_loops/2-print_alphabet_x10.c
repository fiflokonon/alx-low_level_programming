#include "main.h"

/**
 * main - Check desription
 * Description: prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);	
		_putchar('\n');
	}
}
