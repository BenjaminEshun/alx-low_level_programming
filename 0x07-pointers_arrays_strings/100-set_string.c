#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer whose value will be changed
 * @to: pointer whose value will be used in the update
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
