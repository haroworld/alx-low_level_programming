#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char x;

	x = 'a';

	while
		(x <= 'z') {
			_putchar(x);
			x++;
		}
	_putchar('\n');
}
