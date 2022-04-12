#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: On success, returns 1.
 * On failure, returns 0.
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);

	return (0);
}
