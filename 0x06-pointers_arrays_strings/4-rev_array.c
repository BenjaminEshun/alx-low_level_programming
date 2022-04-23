#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array
 * @n: the size of array
 *
 * Return: nothing is returned
 */
void reverse_array(int *a, int n)
{
	int i, b[n];

	a = a + n - 1;

	for (i = 0; i < n; i++)
	{
		b[i] = *a;
		a--;
	}

	a = a + 1;

	for (i = 0; i < n; i++)
	{
		*a = b[i];
		a++;
	}
}
