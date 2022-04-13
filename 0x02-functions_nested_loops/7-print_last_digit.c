#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: The number to be computed
 *
 * Return: program returns the last digit og input value
 */
int print_last_digit(int x)
{
	int result;

	if (x < 0)
		x = -x;
	result = x % 10;
	_putchar(result + '0');
	return (result);
}
