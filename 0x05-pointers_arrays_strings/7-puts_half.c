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
	int string_length = strlen(str), i;

	if (string_length % 2 != 0)
		string_length = (string_length - 1) / 2;
	else
		string_length = string_length / 2;

	for (i = string_length; i <= (strlen(str) - 1); i++)
		_putchar(str[i]);

	_putchar('\n');
}
