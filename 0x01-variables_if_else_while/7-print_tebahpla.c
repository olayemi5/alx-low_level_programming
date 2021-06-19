#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet using ascii reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	letter = 'z';
	while (letter != '`')
	{
		putchar (letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
