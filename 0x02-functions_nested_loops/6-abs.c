#include "main.h"
/**
 * _abs - program to get absolute number
 *
 * @a: integer value
 *
 * Return: Always 0 (success)
 */
int _abs(int a)
{
	if (a < 0)
	{
	a = (-1) * a;
	}
	else if (a > 0)
	{
	a = (1) * a;
	}
	return (a);
}
