#include "holberton.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int product;

	if (argc == 3)
	{
		product = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
