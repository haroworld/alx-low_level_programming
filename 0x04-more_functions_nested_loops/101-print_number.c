#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer
 *
 * @n: Integer value
 *
 * Return: Always 0 (success)
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n = n * (-1);
		k = n;
		_putchar('-');
	}

	k = k / 10;

	if (k != 0)
		print_number(k);

	_putchar((unsigned int) n % 10 + '0');
}
