#include "main.h"

/**
 * _pow_recursion - Return he value 0f x raised to power y
 *
 * @x: The value to multiply
 *
 * @y: times to multiply
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
