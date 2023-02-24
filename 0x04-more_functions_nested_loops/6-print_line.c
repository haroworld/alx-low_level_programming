#include "main.h"
/**
 * print_line - program to print straight line
 *
 * @n: number of straight line
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{

	for (l = 0; l <= n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
