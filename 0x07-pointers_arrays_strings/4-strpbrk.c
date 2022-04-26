#include <string.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string
 * @accept: the substring
 *
 * Return: a pointer to the character in s that matches one of the
 * characters in accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
