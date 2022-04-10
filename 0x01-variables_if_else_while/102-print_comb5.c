#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: program returns 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i + j < k + l && i <= k && j <= l)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);

						if (i == 57 && j == 56 && k == 57 && l == 57)
							break;

						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
