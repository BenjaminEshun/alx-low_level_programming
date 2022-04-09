#include <stdio.h>

/**
 * main - prints single digits seperated by comma and space
 *
 * Return: program returns 0
 */
int main(void)
{
	int ascii_number;

	for (ascii_number = 48; ascii_number <= 57; ascii_number++)
	{
		putchar(ascii_number);
		if (ascii_number != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
