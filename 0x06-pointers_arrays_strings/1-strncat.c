#include "main.h"
#include <string.h>

/**
 * _strncat - check description
 * @dest: an input string 
 * @src: an input string
 * @n: an input integer
 * Description: that concats two string
 * Return: Char
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
