#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with multiples of 3, 5 being Fizz, Buzz respectively
 *
 * Return: program returns 0
 */
int main(void)
{
	int num;
	char i[] = "Fizz";
	char j[] = "Buzz";
	char k[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s ", k);
		}
		else if (num % 3 == 0)
		{
			printf("%s ", i);
		}
		else if (num % 5 == 0)
		{
			printf("%s", j);

			if (num != 100)
			{
				printf(" ");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
