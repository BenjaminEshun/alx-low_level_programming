#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 *
 * Return: program returns 1 if greater than zero.
 * Returns -1 if less than zero and 0 if equal to zero.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if else (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('+');
	return (1);
}
