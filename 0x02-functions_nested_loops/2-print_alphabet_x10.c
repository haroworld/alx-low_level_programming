#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
*
* main - Entry point
*
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int x;
	char c;

	x = 0;

	while
		(x < 10) {
			c = 'a';
			while
				(c <= 'z') {
					_putchar(c);
					c++;
				}
			_putchar('\n');
			x++;
			}
}
