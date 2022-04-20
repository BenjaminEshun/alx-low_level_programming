#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: nothing is returned
 */
void puts2(char *str)
{
	int string_length = strlen(str), i;

	for (i = 0; i < string_length - 1; i++)
	{
		if (i % 2 == 0 || str[i] == '.')
			_putchar(str[i]);
	}
	_putchar('\n');
}
