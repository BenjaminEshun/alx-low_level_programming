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
	int i;
	int *p = &n;
	int b[*p];

	a = a + *p - 1;

	for (i = 0; i < *p; i++)
	{
		b[i] = *a;
		a--;
	}

	a = a + 1;

	for (i = 0; i < *p; i++)
	{
		*a = b[i];
		a++;
	}
}
