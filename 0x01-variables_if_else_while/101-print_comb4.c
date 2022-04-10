#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: program returns 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i != j && i < j && j != k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 55 && j == 56 && k== 57)
						break;

					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
