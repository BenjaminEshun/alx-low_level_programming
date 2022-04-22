#include <string.h>
#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be appended to dest
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
