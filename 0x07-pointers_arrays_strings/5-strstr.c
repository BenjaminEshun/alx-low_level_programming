#include <string.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: returns a pointer to the beginning of the located substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}
