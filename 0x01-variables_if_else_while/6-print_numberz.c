#include <stdio.h>

/**
 * main - prints all single digit
 *
 * Return: program returns 0
 */
int main(void)
{
	int ascii_number;

	for (ascii_number = 48; ascii_number <= 57; ascii_number++)
		putchar(ascii_number);

	putchar('\n');
	return (0);
}
