#include <stdio.h>
#include <stdlib.h>
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
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
