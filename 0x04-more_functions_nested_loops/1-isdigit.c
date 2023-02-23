#include "main.h"
#include <stdio.h>
/**
 * _isdigit - program to check digit
 *
 * @c: integer value
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
