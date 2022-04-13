#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers starting 1 and 2
 *
 * Return: program returns 0
 */
int main(void)
{
	unsigned long long int i = 0, j = 1, result;
	int count = 1;

	while (count <= 98)
	{
		result = i + j;
		i = j;
		j = result;
		printf("%llu", result);

		if (count < 98)
		{
			printf(", ");
		}

		count += 1;
	}
	printf("\n");
	return (0);
}
