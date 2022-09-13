#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Check Description
 * Description: Checks for lowercase character
 *
 * Return: 0 (Success) 1 (False)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
