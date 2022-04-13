#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: nothing is return
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%3d", i * j);

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
