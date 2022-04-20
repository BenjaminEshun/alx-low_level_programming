#include <string.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the string to be reversed
 *
 * Return: nothing is returned
 */
void rev_string(char *s)
{
	int string_length = strlen(s), i;

	for (i = string_length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
