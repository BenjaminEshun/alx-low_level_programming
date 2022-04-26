#include <string.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: returns a memory filled with constant bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
