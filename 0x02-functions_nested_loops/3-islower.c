#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * _islower - Check Description
 * Description: Checks for lowercase character
 *
 * Return: 0 (Success) 1 (False)
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
