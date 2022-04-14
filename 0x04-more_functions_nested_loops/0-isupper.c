#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the charater to be checked
 *
 * Return: returns 1 if character is uppercase.
 * Returns 0 if otherwise
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	return (0);
}
