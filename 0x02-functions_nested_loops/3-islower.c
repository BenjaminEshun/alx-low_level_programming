#include <ctype.h>
#include "main.h"

/**
 * _islower - checkes for lowercase characters
 * @c: The characte or number to be check
 *
 * Return: On success 1 is returned.
 * On failure, 0 is returned
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	return (0);
}
