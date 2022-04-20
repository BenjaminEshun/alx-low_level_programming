#include <string.h>
#include "main.h"

/**
 * _strcpy - copies string from a source to a destination
 * @dest: destination string
 * @src: source string
 *
 * Return: the point to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
