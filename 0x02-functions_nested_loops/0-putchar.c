#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char string[] = "_putchar";
	int c;

	for (c = 0; c < 8; ++c)
		_putchar(string[c]);
	_putchar('\n');

	return (0);
}
