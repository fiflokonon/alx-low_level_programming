#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check Description
 * Description: Uses putchar to print alphabet
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			putchar(alpha);
		putchar('\n');
	}
}
