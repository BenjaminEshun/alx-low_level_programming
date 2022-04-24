#include "main.h"

/**
 * print_number - prints an integer using putchar function
 * @n: the integer
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	if (n != 0)
		_putchar(n % 10 + '0');
}
