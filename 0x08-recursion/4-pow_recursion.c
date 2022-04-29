#include <math.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value of x
 * @y: value of y
 *
 * Return: return the value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow(x, y));
}
