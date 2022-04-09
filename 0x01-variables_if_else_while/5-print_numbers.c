#include <stdio.h>

/**
 * main - print all single digit numbers
 *
 * Return: program returns 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		printf("%d", digit);
	printf("\n");
	return (0);
}
