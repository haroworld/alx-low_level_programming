#include "main.h"
/**
 * print_most_numbers - program to print most numbers
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
		{
		continue;
		}
		else
		{
		_putchar(x + '0');
		}
	}
	_putchar('\n');
}
