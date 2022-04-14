#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 *
 * Return: returns 1 if character is a digit.
 * Returns 0 if otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	return (0);
}
