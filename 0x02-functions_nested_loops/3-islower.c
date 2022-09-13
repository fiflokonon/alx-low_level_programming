#include "main.h"

/**
 * _islower - Check Description
 * Description: 
 *
 * Return: 1 (Success) 0 (Failure)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
