#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i, len;

	len = strlen(s);
	s = s + len - 1;

	for (i < 0; i < len; i++)
	{
		_putchar(*s);
		s--;
	}
}
