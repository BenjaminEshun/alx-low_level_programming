#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times '_' character should be printed
 *
 * Return: nothing is returned
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
