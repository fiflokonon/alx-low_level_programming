#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m1, m2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
