#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with multiples of 3, 5 being Fizz, Buzz respectively
 *
 * Return: program returns 0
 */
int main(void)
{
	int num;
	char multiples_of_3[] = "Fizz";
	char multiples_of_5[] = "Buzz";
	char multiples_of_3_and_5[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s ", multiples_of_3_and_5);
		}
		else if (num % 3 == 0)
		{
			printf("%s ", multiples_of_3);
		}
		else if (num % 5 == 0)
		{
			printf("%s", multiples_of_5);

			if (num != 100)
				printf(" ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
