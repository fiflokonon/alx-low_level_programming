#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - Check Description
 * @i: An input
 * Return: Nothing
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}

