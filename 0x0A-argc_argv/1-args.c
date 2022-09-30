#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check entry point
 * @argc: An integer input
 * @argv: An array input
 * Description: Print number
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
	if (argc > 0)
		print("%d\n", argc);
	return (0);
}
