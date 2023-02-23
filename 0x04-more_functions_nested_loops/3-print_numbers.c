#include "main.h"
#include <stdio.h>
/**
 * print_numbers - program to print 0 to 9
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}

