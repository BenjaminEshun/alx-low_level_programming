#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 *
 * Return: program returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char result;

	result = strncpy(dest, src, n);
	return (result);
}
