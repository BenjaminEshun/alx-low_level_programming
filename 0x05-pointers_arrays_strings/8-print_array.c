#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: the array
 * @n: number of elements
 *
 * Return: nothing is returned
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
