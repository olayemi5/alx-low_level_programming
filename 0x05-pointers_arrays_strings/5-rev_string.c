#include "holberton.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String
 */

void rev_string(char *s)
{
	int len;
	int head;
	char rev;

	for (len = 1; s[len]; len++)
	{}

	for (head = 0; head < len; head++, len--)
	{
		rev = s[len - 1];
		s[len - 1] = s[head];
		s[head] = rev;
	}
}
