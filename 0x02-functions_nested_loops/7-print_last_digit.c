#include "main.h"
/**
 * print_last_digit - program to print last digit
 *
 * @a: integer value
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
	{
	a = -a;

	n = a % 10;
	}

	if (n < 0)
	{
	n = -n;
	}

	_putchar(n + '0');

	return (n);

}
