#include <string.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string
 * @accept: substring
 *
 * Return: the number of characters in the initial segment of s which consist
 * only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int length;

	length = strspn(s, accept);
	return (length);
}
