#include <stdio.h>

/**
 * main - prints all possible combination of two digits
 *
 * Return: program returns 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);

				if (i == 56 && j == 57)
					break;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
