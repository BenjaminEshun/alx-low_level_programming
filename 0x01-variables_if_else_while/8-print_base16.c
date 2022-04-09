#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: program returns 0
 */
int main(void)
{
	int ascii_number;

	for (ascii_number = 48; ascii_number <= 57; ascii_number++)
		putchar(ascii_number);

	for (ascii_number = 97; ascii_number <= 102; ascii_number++)
		putchar(ascii_number);

	putchar('\n');
	return (0);
}
