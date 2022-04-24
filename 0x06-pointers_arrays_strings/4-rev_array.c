#include "main.h"
#define size n

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array
 * @n: the size of array
 *
 * Return: nothing is returned
 */
void reverse_array(int *a, int n)
{
	int b[size];
	int i;

	a = a + size - 1;

	for (i = 0; i < size; i++)
	{
		b[i] = *a;
		a--;
	}

	a = a + 1;

	for (i = 0; i < size; i++)
	{
		*a = b[i];
		a++;
	}
}
