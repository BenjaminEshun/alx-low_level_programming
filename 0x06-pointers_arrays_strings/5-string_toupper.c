#include <string.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 *
 * Return: returns the string in uppercase
 */
char *string_toupper(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	str = str - len;
	return (str);
}
