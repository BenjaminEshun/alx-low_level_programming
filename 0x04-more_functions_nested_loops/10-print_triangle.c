#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: nothing is returned
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(32);
		}

		for (k = 1; k <= i; k++)
		{
			_putchar(35);
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
