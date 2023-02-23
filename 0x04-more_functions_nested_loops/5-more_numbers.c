#include "main.h"
/**
 * more_numbers - program to print number 0 to 14 ten times
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int a;
	int b;

	a = 0;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
			_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
		a++;
	}
}

