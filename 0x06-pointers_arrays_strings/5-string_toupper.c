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
	strupr(str);
	return (str);
}
