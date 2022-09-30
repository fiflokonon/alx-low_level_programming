#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check entry point
 * @argc: argument count
 * @argv: argument container
 * Description: Multiplication
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m1, m2, result;
	if (argc != 3)
		printf("Error\n");
	else
		m1 = atoi(argv[1]);
		m2 = atoi(arg[2]);
		result = m1 * m2;
		printf("%d\n", result);
	return (0);
}
