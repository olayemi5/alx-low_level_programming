#include "holberton.h"

/**
 * _strcpy -Creates a copy of a string
 * @src: The original string
 * @dest: Copy of the original string
 * Return: A copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
