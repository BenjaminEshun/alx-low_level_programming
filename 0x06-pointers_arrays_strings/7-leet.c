#include <string.h>
#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: the string
 *
 * Return: returns the encoded string
 */
char *leet(char *str)
{
	int i, string_size;

	string_size = strlen(str);

	for (i = 0; i < string_size; i++)
	{
		if (*str == 'a' || *str == 'A')
			*str = '4';
		else if (*str == 'e' || *str == 'E')
			*str = '3';
		else if (*str == 'o' || *str == 'O')
			*str = '0';
		else if (*str == 't' || *str == 'T')
			*str = '7';
		else if (*str == 'l' || *str == 'L')
			*str = '1';

		str++;
	}
	str = str - string_size;
	return (str);
}
