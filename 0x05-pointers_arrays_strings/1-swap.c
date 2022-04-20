#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: the first value
 * @b: the second value
 *
 * Return: nothing is returned
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
