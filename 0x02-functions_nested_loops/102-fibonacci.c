#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers starting 1 and 2
 *
 * Return: program returns 0
 */
int main(void)
{
	unsigned long int i = 0, j = 1, result;
	int count = 1;

	while (count <= 50)
	{
		result = i + j;
		i = j;
		j = result;
		printf("%lu", result);

		if (count < 50)
			printf(", ");

		count += 1;
	}
	printf("\n");
	return (0);
}
