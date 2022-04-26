#include <string.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: returns a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
