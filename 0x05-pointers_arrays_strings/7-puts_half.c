#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: nothing is returned
 */
void puts_half(char *str)
{
	int string_length = strlen(str), i, half;

	if (string_length % 2 != 0)
	{
		half = (string_length - 1) / 2;

		for (i = half; i <= string_length - 1; i++)
			_putchar(str[i]);
	}
	else
	{
		half = string_length / 2;

		for (i = half + 1; i <= string_length - 1; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
