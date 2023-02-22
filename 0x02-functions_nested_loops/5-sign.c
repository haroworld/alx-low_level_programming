#include "main.h"

/**
 * print_sign - program to print number sign
 *
 * @n: integer number
 *
 * Return: 1 if number is greater than 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
	_putchar('\n');
}
