#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonal of 
 * a square matrix of integers
 * @a: a square matrix
 * @size: matrix size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int first_diagonal = 0;
	int second_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				first_diagonal = first_diagonal + *a;
			}

			if (i + j == size - 1)
			{
				second_diagonal = second_diagonal + *a;
			}

			a++;
		}
	}
	printf("%d, %d\n", first_diagonal, second_diagonal);
}
